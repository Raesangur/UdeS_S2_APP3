/*
 *   Voir fichier d'entête pour informations.
 *
 *   $Author: bruc2001 $
 *   $Date: 2018-02-13 08:54:36 -0500 (mar., 13 févr. 2018) $
 *   $Revision: 108 $
 *   $Id: Interface.cpp 108 2018-02-13 13:54:36Z bruc2001 $
 *
 *   Copyright 2013 Département de génie électrique et génie informatique
 *                  Université de Sherbrooke
 */
#include "Interface.h"
#include "CommunicationFPGA.h"
#include <QStyleFactory>
#include <iostream>

Interface::Interface(const char* theName, CommunicationFPGA& FPGA) : VisiTest(theName), m_fpga(FPGA)
{
    resetTest();
    resetArchive();
}

void Interface::testSuivant()
{
    setTest(m_donnee);
    setArchive(m_donnee);
    setArchive(m_donnee.typeTest, m_donnee.registreSW);

    if(m_donnee.etatLD > 0x80)
    {
        m_donnee = DonneesTest{};
    }
    else
    {
        m_donnee.typeTest++;

        m_donnee.registreSW++;
        m_donnee.retourSW <<= 1;

        m_donnee.registreLD++;
        m_donnee.valeurLD <<= 1;

        m_donnee.etatLD <<= 1;
        m_donnee.etatSW <<= 1;
    }

    if (m_saveArchive)
    {
        m_archive += m_donnee;
    }
}

void Interface::demarrer()
{
    m_saveArchive = true;
}

void Interface::arreter()
{
    m_saveArchive = false;
}

void Interface::vider()
{
    m_archive.clear();
    resetArchive();
    resetTest();
}

void Interface::premier()
{
    m_archive << 0;
    DonneesTest data = m_archive[m_archive.current()];
    setArchive(data);
    setArchive(1, m_archive.size());
}
void Interface::dernier()
{
    m_archive >> 0;
    DonneesTest data = m_archive[m_archive.current()];
    setArchive(data);
    setArchive(m_archive.size(), m_archive.size());
}
void Interface::precedent()
{
    --m_archive;
    DonneesTest data = m_archive[m_archive.current()];
    setArchive(data);
    setArchive(m_archive.current() + 1, m_archive.size());
}
void Interface::suivant()
{
    ++m_archive;
    DonneesTest data = m_archive[m_archive.current()];
    setArchive(data);
    setArchive(m_archive.current() + 1, m_archive.size());
}

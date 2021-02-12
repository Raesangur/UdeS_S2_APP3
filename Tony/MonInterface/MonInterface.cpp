/*
 *   Voir fichier d'entête pour informations.
 *
 *   $Author: lacp3102-roya2019 $
 *   $Date: 2021-02-11 12:26:36 -0500 (jeudi., 11 févr. 2021) $
 *   $Revision: 108 $
 *   $Id: MonInterface.cpp 108 2021-02-11 12:27:36Z lacp3102-roya2019 $
 *
 *   Copyright 2021 Département de génie électrique et génie informatique
 *                  Université de Sherbrooke
 */
#include "MonInterface.h"
#include "CommunicationFPGA.h"
#include <QStyleFactory>
#include <bit>
#include <iostream>

MonInterface::MonInterface(const char* theName, CommunicationFPGA& FPGA)
: VisiTest(theName), fpga(FPGA)
{
    // placeholders
    donnee.typeTest   = 0;
    donnee.registreSW = SW;
    donnee.retourSW   = 1;
    // placeholders
    donnee.registreLD = LD;
    donnee.valeurLD   = 1;
    // placeholders
    donnee.etatLD = 1;
    donnee.etatSW = 1;

    resetTest();
    resetArchive();
}

#pragma region Options menu Archive
void MonInterface::testSuivant()
{
    // Gestion numero de test
    donnee.typeTest++;
    if(donnee.typeTest > 0x3)
    {
        donnee.typeTest = 1;
    }
    if(fpga.lireRegistre(SW, donnee.retourSW))
    {
        donnee.etatSW = donnee.etatSW = donnee.retourSW;
        managementLEDs();
        fpga.ecrireRegistre(LD, donnee.etatLD);
    }
    // Sauvegarde Temporaire des données
    if(rememberData != false)
    {
        databaseTests += donnee;
    }
    setTest(donnee);
    showArchive(donnee);
    // message("bye");
}

void MonInterface::demarrer()
{
    rememberData = true;
}

void MonInterface::arreter()
{
    rememberData = false;
}

void MonInterface::vider()
{
    databaseTests.clear();
    resetArchive();
    resetTest();
    message("You can't just shoot a hole into the surface of Mars.");
}

void MonInterface::sauvegarder(char* nomFichier)
{
    std::ofstream myFile{nomFichier};
    myFile << databaseTests;
    myFile.close();
}
#pragma endregion

#pragma region Mode Affichage
void MonInterface::modeFile()
{
    if(databaseTests.isempty())
    {
        displayWAy = false;
    }
}

void MonInterface::modePile()
{
    if(databaseTests.isempty())
    {
        displayWAy = true;
    }
}
#pragma endregion

#pragma region Navigation archive
void MonInterface::premier()
{
    message("premier");
    DonneesTest donneeTemp;
    if(displayWAy != true)
    {
        donneeTemp = databaseTests[databaseTests.set_cursor(0)];
    }
    else
    {
        donneeTemp = databaseTests[databaseTests.set_cursor(databaseTests.size() - 1)];
    }
    showArchive(donneeTemp);
}

void MonInterface::dernier()
{
    DonneesTest donneeTemp;
    if(displayWAy != true)
    {
        donneeTemp = databaseTests[databaseTests.set_cursor(databaseTests.size() - 1)];
    }
    else
    {
        donneeTemp = databaseTests[databaseTests.set_cursor(0)];
    }
    showArchive(donneeTemp);
}

void MonInterface::precedent()
{
    message("precedent");
    DonneesTest donneeTemp;
    if(displayWAy != true)
    {
        donneeTemp = databaseTests[--databaseTests];
    }
    else
    {
        donneeTemp = databaseTests[++databaseTests];
    }
    showArchive(donneeTemp);
}

void MonInterface::suivant()
{
    message("Suivant");
    DonneesTest donneeTemp;
    if(displayWAy != true)
    {
        donneeTemp = databaseTests[++databaseTests];
    }
    else
    {
        donneeTemp = databaseTests[--databaseTests];
    }
    showArchive(donneeTemp);
}
#pragma endregion

void MonInterface::showArchive(DonneesTest displayedData)
{
    setArchive(displayedData);
    setArchive(databaseTests.get_cursor() + 1, databaseTests.size());
}

void MonInterface::managementLEDs()
{
    switch(donnee.typeTest)
    {
        case 1:
            donnee.valeurLD = donnee.etatLD = donnee.retourSW;
            break;
        case 2:
            if(checkparity(std::popcount((uint)donnee.retourSW)) != 1)
            {
                donnee.valeurLD = donnee.etatLD = 0b11111111;
            }
            else
            {
                donnee.valeurLD = donnee.etatLD = 0x00;
            }
            break;
        case 3:
            donnee.valeurLD = donnee.etatLD = 0xff >> (8 - (int)log2(donnee.retourSW + 1));
            break;
        default:
            message("It's time to kick ass and chew bubble gum.");
            break;
    }
}

bool MonInterface::checkparity(int x)
{
    return x & 0b00000001;
}

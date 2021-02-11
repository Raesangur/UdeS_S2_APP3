/*
 *   La classe MonInterface teste l'interface usager VisiTest (librairie).
 *
 *   $Author: bruc2001 $
 *   $Date: 2018-02-13 08:54:36 -0500 (mar., 13 févr. 2018) $
 *   $Revision: 108 $
 *   $Id: MonInterface.h 108 2018-02-13 13:54:36Z bruc2001 $
 *
 *   Copyright 2016 Département de génie électrique et génie informatique
 *                  Université de Sherbrooke
 */
#ifndef MONINTERFACE_H
#define MONINTERFACE_H

#include "VisiTest.h"
#include "CommunicationFPGA.h"
#include "vector.h"

class Interface : public VisiTest
{
public:
    Interface(const char* theName, CommunicationFPGA& FPGA);

public slots:
    void testSuivant() override;
    void demarrer() override;
    void arreter() override;
    void vider() override;

    void premier() override;
    void dernier() override;
    void precedent() override;
    void suivant() override;

private:
    DonneesTest m_donnee;
    vector<DonneesTest> m_archive;
    CommunicationFPGA& m_fpga;
    bool m_saveArchive = false;
    const char* m_messageErreur = nullptr;

public:
    bool estOk()
    {
        return m_messageErreur == nullptr ? true : static_cast<bool>(m_messageErreur = nullptr);
    }
};

#endif        // MONINTERFACE_H


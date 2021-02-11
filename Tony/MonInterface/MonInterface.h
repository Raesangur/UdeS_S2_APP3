/*
 *   La classe MonInterface teste l'interface usager VisiTest (librairie).
 *
 *   $Author: lacp3102-roya2019 $
 *   $Date: 2021-02-11 12:26:36 -0500 (jeudi., 11 févr. 2021) $
 *   $Revision: 108 $
 *   $Id: MonInterface.h 108 2021-02-11 12:27:36Z lacp3102-roya2019 $
 *
 *   Copyright 2021 Département de génie électrique et génie informatique
 *                  Université de Sherbrooke
 */
#ifndef MONINTERFACE_H
#define MONINTERFACE_H

#include "CommunicationFPGA.h"
#include "VisiTest.h"
#include "vector.h"
#include <iostream>

enum Registre
{
    SW  = 8,
    BTN = 9,
    LD  = 10,
    AN0 = 11,
    AN1 = 12,
    AN2 = 13,
    AN3 = 14
};

class MonInterface : public VisiTest
{
public:
    MonInterface(const char* theName, CommunicationFPGA& FPGA);
public slots:
    void testSuivant() override;
    // Options d'archivage
    void demarrer() override;
    void arreter() override;
    void vider() override;
    void modeFile() override;
    void modePile() override;
    void sauvegarder(char* nomFichier) override;
    // Navigation Archive
    void premier() override;
    void dernier() override;
    void precedent() override;
    void suivant() override;


private:
    // Attributs privés
    vector<DonneesTest> databaseTests;
    DonneesTest         donnee;
    CommunicationFPGA&  fpga;
    bool                rememberData = false;
    bool                displayWAy   = false;
    // Méthodes privées
    void managementLEDs();
    void showArchive(DonneesTest displayedData);
    bool checkparity(int x);
};

#endif        // MONINTERFACE_H

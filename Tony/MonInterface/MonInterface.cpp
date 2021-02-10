/*
*   Voir fichier d'entête pour informations.
*   
*   $Author: bruc2001 $
*   $Date: 2018-02-13 08:54:36 -0500 (mar., 13 févr. 2018) $
*   $Revision: 108 $
*   $Id: MonInterface.cpp 108 2018-02-13 13:54:36Z bruc2001 $
*
*   Copyright 2013 Département de génie électrique et génie informatique
*                  Université de Sherbrooke  
*/
#include <QStyleFactory>
#include <iostream>
#include "CommunicationFPGA.h"
#include "MonInterface.h"

MonInterface::MonInterface(const char* theName, CommunicationFPGA& FPGA) : VisiTest(theName), fpga(FPGA)
{
    
	//placeholders
	donnee.typeTest = 0;
	donnee.registreSW = 1;
	donnee.retourSW = 1;
    //placeholders
	donnee.registreLD = 1;
	donnee.valeurLD = 1;
    //placeholders
	donnee.etatLD = 1;
	donnee.etatSW = 1;

	resetTest();
	resetArchive();
}

void MonInterface::testSuivant()
{
	//Gestion numero de test
    donnee.typeTest++;
    if(donnee.typeTest > 0x3)
    {
        donnee.typeTest = 1;
    }
    if(fpga.lireRegistre(SW, donnee.retourSW))
    {
        fpga.ecrireRegistre(LD, donnee.retourSW);
        donnee.valeurLD = donnee.etatSW = donnee.etatLD = donnee.etatSW = donnee.retourSW;
        donnee.registreLD = LD;
        donnee.registreSW = SW;

    }
    //Sauvegarde Temporaire des données
    if(rememberData != false)
    {
		databaseTests.push_back(donnee);
        message("bye bye bye");
    }
    setTest(donnee);
    showArchive(donnee);
    //message("bye");
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
    message("You can't just shoot a hole into the surface of Mars.");
}

void MonInterface::modeFile()
{
    displayWAy = false;
} 

void MonInterface::modePile()
{
    displayWAy = true;
}

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

void MonInterface::sauvegarder(char* nomFichier)
{

}

void MonInterface::showArchive(DonneesTest displayedData)
{
    setArchive(displayedData);
    setArchive(databaseTests.get_cursor() + 1, databaseTests.size());
}

/*
*******************************************************************************
*******************************************************************************
*******************************************************************************
*
*	Project: Quest For The Sword
*	File: Quest_For_The_Sword.cpp
*	Author: Kelly Christensen
*	File Version: 1.00
* 	Engine Version: 0a.2.1.1r (work out versioning system later)
*
*	Description:
*	This is the Source File for The Quest For The Sword, which uses the "Firestorm Designs Text RPG Engine"
*	header files that contain all of the programming and functionality needed to make a basic Text RPG through
*	simple calls to everything defined within them.
*
*	Created on April 4th, 2012 8:40 PM
*	Last updated on September 22, 2021 1:10 PM
*
*******************************************************************************
*******************************************************************************
*******************************************************************************
*/
#include "headers/FSP_Main_RPGEng.h"
//#include "SDL.h" Future SDL support

using namespace std;
using namespace FSD_RPG_ENG;

int main()
{
	Files *vectFiles = new Files;
	Game *mainGame = new Game;
	Player *mainChar = new Player;
	Monster *varMonst = new Monster;

	mainGame->initGame(mainGame, mainChar, varMonst);
	mainGame->Menu(mainGame, mainChar, varMonst, vectFiles);
	mainGame->gamePlay(mainGame, mainChar, varMonst, vectFiles);

	return EXIT_SUCCESS;
}

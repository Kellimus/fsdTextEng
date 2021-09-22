/*
*******************************************************************************
*******************************************************************************
*******************************************************************************
*
*	Project: Quest For The Sword
*	File: FSP_RPGEng_InitFuncts.cpp
*	Author: Kelly Christus
*	File Version: 1.00
*
*	Description:
*	This is the Header File containing all functions for initializing the engine
* 	at the beginning of the program.
*
*	Created on: September 7, 2016 6:54 PM
*	Last updated on: September 22, 2021 2:25 PM 
*
*******************************************************************************
*******************************************************************************
*******************************************************************************
*/
#ifndef FSD_RPGENG_INITILIZATION_H
#define FSD_RPGENG_INITILIZATION_H

/*
 *********
 * Initialization Functions
 *********
*/
void FSD_RPG_ENG::Game::initGame(Game *mainGame, Player *mainChar, Monster *varMonst)
{
	// Initialize Game
	mainGame->townName = "None";
	mainGame->townFlag = 0;
	mainGame->strtgame = false;
	mainGame->endgame = false;
	mainGame->batStart = 0;
	std::cout << "Game Initialization Traced!\n";
	
	// Initialize Monster
	varMonst->setName(varMonst, "None");
	varMonst->setHP(varMonst, 0);
	varMonst->setMP(varMonst, 0);
	varMonst->setLvl(varMonst, 0);
	varMonst->setExp(varMonst, 0);
	varMonst->setGold(varMonst, 0);
	varMonst->setAtk(varMonst, 0);
	varMonst->setResMag(varMonst, 0);
	varMonst->setDef(varMonst, 0);
	std::cout << "Monster Initialization Traced!\n";
	
	// Initialize Character
	mainChar->setName("None");
	mainChar->setRace("None");
	mainChar->setClass("None");
	mainChar->setWeap("None");
	mainChar->setArm("None");
	mainChar->setShield("None");
	mainChar->setHP(0);
	mainChar->setMP(0);
	mainChar->setSP(0);
	mainChar->setHPMax(4); // Takes a 'flag' value; 4 is init value of 0
	mainChar->setMPMax(4); // Takes a 'flag' value; 4 is init value of 0
	mainChar->setSPMax(4); // Takes a 'flag' value; 4 is init value of 0
	mainChar->setLvl(0);
	mainChar->setNxtLvl(0);
	mainChar->setCurrExp(0);
	mainChar->setExpMax(0); // 0 is init value
	mainChar->setLvlExp(0); // 0 is init value
	mainChar->setStr(0);
	mainChar->setIntell(0);
	mainChar->setWis(0);
	mainChar->setConst(0);
	mainChar->setAgil(0);
	mainChar->setDex(0);
	mainChar->setDef(0);
	mainChar->setAtk(0);
	mainChar->setGold(0);
	mainChar->setWeapDmg(0);
	mainChar->setArmDef(0);
	mainChar->setShieldDef(0);
	mainChar->setPlayerFlag(0); // 0 is init value
	mainChar->setLowHPot(0);
	mainChar->setMedHPot(0);
	mainChar->setHighHPots(0);
	mainChar->setLowMPots(0);
	mainChar->setMedMPots(0);
	mainChar->setHighMPots(0);
	std::cout << "Player Initialization Traced!\n";
}
#endif

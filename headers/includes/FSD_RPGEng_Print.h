/*
*******************************************************************************
*******************************************************************************
*******************************************************************************
*
*	Project: Quest For The Sword
*	File: FSP_RPGEng_Print.cpp
*	Author: Kelly Christus
*	File Version: 1.00
*
*	Description:
*	This is the Header File containing all functions output to the screen.
*
*	Created on: September 7, 2016 6:54 PM
*	Last updated on: September 22, 2021 2:35 PM
* 
*******************************************************************************
*******************************************************************************
*******************************************************************************
*/
#ifndef FSD_RPGENG_PRINT_H
#define FSD_RPGENG_PRINT_H

void FSD_RPG_ENG::Player::expCheck()
{
	showExpNxtLvl();
}

void FSD_RPG_ENG::Player::checkStats(Files *vectFiles, Game *mainGame)
{
	std::cout << "\nYour Name: "; showName();
	std::cout << "\nYour Race: "; showRace();
	std::cout << "\nYour Class: "; showClass();
	
	std::cout << "\n\nCurrent Level: "; showLvl();
	std::cout << "\nMax Level: "; showExpMax();
	std::cout << "\nCurrent Experience: "; showCurrExp();
	std::cout << "\nNext Level Up at: "; showExpNxtLvl();
	std::cout << "\nExperience needed for next level: "; showNxtExp();
	
	std::cout << "\n\nCurrent Gold: " << Gold;
	std::cout << "\n\nCurrent HP: " << HP;
	std::cout << "\nCurrent MP: " << MP;
	std::cout << "\nCurrent SP: " << SP;
	std::cout << "\nHP Max: " << hpMax;
	std::cout << "\nMP Max: " << mpMax;
	std::cout << "\nSP Max: " << spMax;
	std::cout << "\n\nAttack: " << Atk;
	std::cout << "\nDamage: " << Dmg;
	std::cout << "\nDefense: " << Def;
	std::cout << "\n\nStrength: " << Strength;
	std::cout << "\nIntelligence: " << Intell;
	std::cout << "\nDexterity: " << Dex;
	std::cout << "\nAgility: " << Agil;
	std::cout << "\nWisdom: " << Wisdom;
	std::cout << "\nConstitution: " << Constitution;
	
	if (playerFlag == 1)
	{
		std::cout << "\n\nWarrior Skills: \n";
		vectFiles->openWarriorSkills();
	} else if (playerFlag == 2)
		{
			std::cout << "Mage Skills: \n";
			vectFiles->openMageSkills();
			std::cout << "Mage Spells: \n";
			vectFiles->openMagics();
		} else if (playerFlag == 3)
			{
				std::cout << "Thief Skills: \n";
				vectFiles->openThiefSkills();
			} else if (playerFlag == 4)
				{
					std::cout << "Ranger Skills: \n";
				} else if (playerFlag == 5)
					{
						std::cout << "Barbarian Skills: \n";
					} else
						std::cout << "No Skills/Spells \n";
	std::cout << "You are in: "; mainGame->showTown(); std::cout << "\n";
}

void FSD_RPG_ENG::Player::Inventory()
{
	std::cout << "\nCurrent weapon: "; showWeap(); std::cout << "\n";
	std::cout << "Current armor: "; showArm(); std::cout << "\n";
	std::cout << "Current shield: "; showShield(); std::cout << "\n";
	std::cout << std::endl;
	showPots();
	
	std::cout << "\nStill under Construction";
}
#endif

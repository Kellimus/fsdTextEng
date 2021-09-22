/*
*******************************************************************************
*******************************************************************************
*******************************************************************************
*
*	Project: Quest For The Sword
*	File: FSP_RPGEng_PlayerFuncts.cpp
*	Author: Kelly Christus
*	File Version: 1.00
*
*	Description:
*	This is the Header File containing all functions called by the player.
*
*	Created on: September 7, 2016 6:54 PM
*	Last updated on: September 22, 2021 2:27 PM
* 
* 	TODO: Fix the get, set, show functions by minimizing the code to handle all
*	three things, as there's no need to have three separate functions to handle
* 	the access and alteration of the data
*
*******************************************************************************
*******************************************************************************
*******************************************************************************
*/
#ifndef FSD_RPGENG_PLAYERFUNCTS_H
#define FSD_RPGENG_PLAYERFUNCTS_H

/* ***********************************
 * ******** Player Functions *********
 * ***********************************
 */

// ********* setFunctions *********
inline void FSD_RPG_ENG::Player::setName(std::string name)
{
	Name = name;
}

inline void FSD_RPG_ENG::Player::setRace(std::string race)
{
	Race = race;
}

inline void FSD_RPG_ENG::Player::setClass(std::string Class)
{
	Class = Class;
}

inline void FSD_RPG_ENG::Player::setWeap(std::string name)
{
	weaponName = name;
}

inline void FSD_RPG_ENG::Player::setArm(std::string name)
{
	armorName = name;
}

inline void FSD_RPG_ENG::Player::setShield(std::string name)
{
	shieldName = name;
}

inline void FSD_RPG_ENG::Player::setHP(int amt)
{
	HP += amt;
}

inline void FSD_RPG_ENG::Player::setMP(int amt)
{
	MP += amt;
}

inline void FSD_RPG_ENG::Player::setSP(int amt)
{
	SP = amt;
}

inline void FSD_RPG_ENG::Player::setHPMax(int flag)
{
	hpMax += amt;
}

void FSD_RPG_ENG::Player::setMPMax(int flag)
{
	if (flag == 0)
		mpMax += ((Wisdom * 3) / 2);
	/*else if (flag == 1)
		
	else if (flag == 2)
	
	else if (flag == 3)
	*/ else if (flag == 4) // Initialize value
			mpMax += 0;
}

void FSD_RPG_ENG::Player::setSPMax(int flag)
{
	if (flag == 0) // Warrior
		spMax += (Wisdom * 3 / 2);
		else if (flag == 1) // Thief
			spMax += (Wisdom * 3 / 2);
			else if (flag == 2) // Ranger
				spMax += (Wisdom * 4 / 2);
				else if (flag == 3) // Barbarian
					spMax += (Wisdom * 6 / 2);
					else if (flag == 4) // Initialize value
						spMax += 0;
}

inline void FSD_RPG_ENG::Player::setLvl(int amt)
{
	Level += amt;
}

inline void FSD_RPG_ENG::Player::setNxtLvl(int amt)
{
	ExpNxtLvl += amt;
}

inline void FSD_RPG_ENG::Player::setCurrExp(int amt)
{
	Exp += amt;
}

inline void FSD_RPG_ENG::Player::setExpMax(int amt)
{
	ExpLvlMax += amt;
}

inline void FSD_RPG_ENG::Player::setLvlExp(int amt)
{
	Exp = amt;
}

inline void FSD_RPG_ENG::Player::setStr(int amt)
{
	Strength += amt;
}

inline void FSD_RPG_ENG::Player::setIntell(int amt)
{
	Intell += amt;
}

inline void FSD_RPG_ENG::Player::setWis(int amt)
{
	Wisdom += amt;
}

inline void FSD_RPG_ENG::Player::setConst(int amt)
{
	Constitution += amt;
}

inline void FSD_RPG_ENG::Player::setAgil(int amt)
{
	Agil += amt;
}

inline void FSD_RPG_ENG::Player::setDex(int amt)
{
	Dex += amt;
}

inline void FSD_RPG_ENG::Player::setAtk(int amt)
{
	Atk += amt;
}

inline void FSD_RPG_ENG::Player::setGold(int amt)
{
	Gold += amt;
}

inline void FSD_RPG_ENG::Player::subGold(int amt)
{
	Gold -= amt;
}

inline void FSD_RPG_ENG::Player::setDef(int amt)
{
	Def += amt;
}

inline void FSD_RPG_ENG::Player::setWeapDmg(int amt)
{
	weapDmg += amt;
}

inline void FSD_RPG_ENG::Player::setArmDef(int amt)
{
	armDef += amt;
}

inline void FSD_RPG_ENG::Player::setPlayerFlag(int amt)
{
	playerFlag = amt;
}

inline void FSD_RPG_ENG::Player::setShieldDef(int amt)
{
	shieldDef += amt;
}

inline void FSD_RPG_ENG::Player::setLowHPot(int amt)
{
	Low_H_Pots += amt;
}

inline void FSD_RPG_ENG::Player::setMedHPot(int amt)
{
	Med_H_Pots += amt;
}

inline void FSD_RPG_ENG::Player::setHighHPots(int amt)
{
	High_H_Pots += amt;
}

inline void FSD_RPG_ENG::Player::setLowMPots(int amt)
{
	Low_M_Pots += amt;
}

inline void FSD_RPG_ENG::Player::setMedMPots(int amt)
{
	Med_M_Pots += amt;
}

inline void FSD_RPG_ENG::Player::setHighMPots(int amt)
{
	High_M_Pots += amt;
}

void FSD_RPG_ENG::Player::addItem(Game *mainGame, int item, int flag)
{
	
	if (mainGame->townFlag == 0)
	{
		
		switch (flag)
		{
			case 1:
			{
			}
			case 2:
			{
			}
			case 3:
			{
				Low_H_Pots += item;
				break;
			}
			case 4:
			{
			}
			case 5:
			{
			}
			case 6:
			{
			}
			default:
				std::cout << "That isn't a choice!\n";
		}
	} else if (mainGame->townFlag == 1)
		{
		} else if (mainGame->townFlag == 2)
			{
			} else if (mainGame->townFlag == 3)
				{
				} else 
					{
					}
}

inline void FSD_RPG_ENG::Player::healMP(int amt)
{
	MP = amt;
}

inline void FSD_RPG_ENG::Player::subLowHPot(int amt)
{
	Low_H_Pots -= amt;
}

void FSD_RPG_ENG::Player::buyItem(Game *mainGame, int amt, int flag)
{
	if (mainGame->townFlag == 0)
	{
		switch (flag)
		{
			case 1:
			{
			}
			case 2:
			{
			}
			case 3:
			{
				int item = 1;
				std::cout << "You purchased a Low Life Potion for 15 Gold!\n";
				subGold(amt);
				addItem(mainGame, item, flag);
				break;
			}
			case 4:
			{
			}
			case 5:
			{
			}
			case 6:
			{
			}
			default:
				std::cout << "That isn't a choice!\n";
		}
	} else if (mainGame->townFlag == 1)
		{
		} else if (mainGame->townFlag == 2)
			{
			} else if (mainGame->townFlag == 3)
				{
				} else 
					{
					}
}

inline void FSD_RPG_ENG::Player::minusHP(int amt)
{
	HP -= amt;
}

inline void FSD_RPG_ENG::Player::healHP(int amt)
{
	HP = amt;
}

// ********* getFunctions *********
inline int FSD_RPG_ENG::Player::getHP()
{
	return HP;
}

inline int FSD_RPG_ENG::Player::getHPMax()
{
	return hpMax;
}

inline int FSD_RPG_ENG::Player::getMP()
{
	return MP;
}

inline int FSD_RPG_ENG::Player::getMPMax()
{
	return mpMax;
}

inline int FSD_RPG_ENG::Player::getSP()
{
	return SP;
}

inline int FSD_RPG_ENG::Player::getSPMax()
{
	return spMax;
}

inline int FSD_RPG_ENG::Player::getLvl()
{
	return Level;
}

inline int FSD_RPG_ENG::Player::getCurrExp()
{
	return Exp;
}

inline int FSD_RPG_ENG::Player::getExpMax()
{
	return ExpLvlMax;
}

inline int FSD_RPG_ENG::Player::getExpLvl()
{
	return ExpNxtLvl;
}

inline int FSD_RPG_ENG::Player::getGold()
{
	return Gold;
}

inline int FSD_RPG_ENG::Player::getAtk()
{
	return Atk;
}

inline int FSD_RPG_ENG::Player::getDef()
{
	return Def;
}

inline int FSD_RPG_ENG::Player::getDmg()
{
	return Dmg;
}

// ********* showFunctions *********
inline void FSD_RPG_ENG::Player::showName()
{
	std::cout << Name;
}

inline void FSD_RPG_ENG::Player::showRace()
{
	std::cout << Race;
}

inline void FSD_RPG_ENG::Player::showClass()
{
	std::cout << Class;
}

inline void FSD_RPG_ENG::Player::showHP()
{
	std::cout << HP;
}

inline void FSD_RPG_ENG::Player::showHpMax()
{
	std::cout << hpMax;
}

inline void FSD_RPG_ENG::Player::showMP()
{
	std::cout << MP;
}

inline void FSD_RPG_ENG::Player::showMpMax()
{
	std::cout << mpMax;
}

inline void FSD_RPG_ENG::Player::showLvl()
{
	std::cout << Level;
}

inline void FSD_RPG_ENG::Player::showCurrExp()
{
	std::cout << Exp;
}

inline void FSD_RPG_ENG::Player::showNxtExp()
{
	int nxtExp = ExpNxtLvl - Exp;
	std::cout << nxtExp;
}

inline void FSD_RPG_ENG::Player::showExpMax()
{
	std::cout << ExpLvlMax;
}

inline void FSD_RPG_ENG::Player::showExpNxtLvl()
{
	std::cout << ExpNxtLvl;
}

inline void FSD_RPG_ENG::Player::showGold()
{
	std::cout << Gold;
}

inline void FSD_RPG_ENG::Player::showDef()
{
	std::cout << Def;
}

inline void FSD_RPG_ENG::Player::showAtk()
{
	std::cout << Atk;
}

inline void FSD_RPG_ENG::Player::showDmg()
{
	std::cout << Dmg;
}

inline void FSD_RPG_ENG::Player::showPots()
{
	std::cout << Low_H_Pots << " Low Health Potion\n";
	std::cout << Med_H_Pots << " Medium Health Potion\n";
	std::cout << High_H_Pots << " High Health Potion\n";
	std::cout << Low_M_Pots << " Low Mana Potion\n";
	std::cout << Med_M_Pots << " Medium Mana Potion\n";
	std::cout << High_M_Pots << " High Mana Potion\n";
}

inline void FSD_RPG_ENG::Player::showWeap()
{
	std::cout << weaponName;
}

inline void FSD_RPG_ENG::Player::showArm()
{
	std::cout << armorName;
}

inline void FSD_RPG_ENG::Player::showShield()
{
	std::cout << shieldName;
}

// ********* miscFunctions *********
void FSD_RPG_ENG::Player::createName()
{
	std::string FullName;
	std::string nameSpace; // used to create the name if there is a single space in the name, and not error out (Fix with another "cin" style at a later date)
	std::cin >> FullName;
	std::cin >> nameSpace;
	std::string charName = FullName + " " + nameSpace;
	setName(charName);
	text_decor::setForegroundColor(0,206,172);
	std::cout << "\nYour full name is: "; text_decor::setForegroundColor(0,204,102); showName(); text_decor::reset();
}

void FSD_RPG_ENG::Player::chooseRace(Files *vectFiles)
{
	bool choice = false;
	int pick;
	text_decor::setForegroundColor(51,102,0);
	std::cout << "Pick from the available races.\n";
	text_decor::setForegroundColor(0,102,204);
	vectFiles->openRacesTxt();
	text_decor::reset();
	while (choice == false)
	{
		std::cin >> pick;
		switch(pick)
			{
				case 1:
				{
					text_decor::setForegroundColor(153,0,153);
					std::cout << "You chose the Human!\n";
					text_decor::reset();
					sleep(1);
					setRace("Human");
					setStr(12);
					setIntell(6);
					setDex(8);
					setAgil(5);
					setWis(6);
					setConst(5);
					setLvl(1);
					choice = true;
					break;
				}
			
				case 2:
				{
					text_decor::setForegroundColor(153,0,153);
					std::cout << "You chose the Elf!\n";
					text_decor::reset();
					sleep(1);
/*					mainChar->Race = "Elf";
					mainChar->Strength = 8;
					mainChar->Intell = 12;
					mainChar->Dex = 13;
					mainChar->Agil = 15;
					mainChar->Wisdom = 12;
					mainChar->Constitution = 8;
					mainChar->Level = 1;*/
					choice = true;
					break;
				}
			
				case 3:
				{
					text_decor::setForegroundColor(153,0,153);
					std::cout << "You chose the Dwarf!\n";
					text_decor::reset();
					sleep(1);
/*					mainChar->Race = "Dwarf";
					mainChar->Strength = 13;
					mainChar->Intell = 6;
					mainChar->Dex = 5;
					mainChar->Agil = 4;
					mainChar->Wisdom = 8;
					mainChar->Constitution = 10;
					mainChar->Level = 1;*/
					choice = true;
					break;
				}
			
				case 4:
				{
					text_decor::setForegroundColor(153,0,153);
					std::cout << "You chose the Orc!\n";
					text_decor::reset();
					sleep(1);
/*					mainChar->Race = "Orc";
					mainChar->Strength = 15;
					mainChar->Intell = 4;
					mainChar->Dex = 4;
					mainChar->Agil = 4;
					mainChar->Wisdom = 6;
					mainChar->Constitution = 14;
					mainChar->Level = 1;
					choice = true;*/
					break;
				}
			
				case 5:
				{
					text_decor::setForegroundColor(153,0,153);
					std::cout << "You chose the Dracon!\n";
					text_decor::reset();
					sleep(1);
/*					mainChar->Race = "Dracon";
					mainChar->Strength = 18;
					mainChar->Intell = 12;
					mainChar->Dex = 8;
					mainChar->Agil = 8;
					mainChar->Wisdom = 12;
					mainChar->Constitution = 18;
					mainChar->Level = 1;
					choice = true;*/
					break;
				}
				
				case 6:
				{
					text_decor::setForegroundColor(153,0,153);
					std::cout << "You chose the High Elf!\n";
					text_decor::reset();
					sleep(1);
/*					mainChar->Race = "High Elf";
					mainChar->Strength = 7;
					mainChar->Intell = 10;
					mainChar->Dex = 12;
					mainChar->Agil = 12;
					mainChar->Wisdom = 15;
					mainChar->Constitution = 8;
					mainChar->Level = 1;
					choice = true;*/
					break;
				}
			
				default:
				{
					text_decor::setForegroundColor(175,0,0);
					std::cout << "That isn't a choice! Pick again: ";
					text_decor::reset();
				}
			}
	}
}

void FSD_RPG_ENG::Player::chooseClass(/*Player *mainChar,*/ Files *vectFiles)
{
	bool choice = false;
	int pick;
	text_decor::setForegroundColor(51,102,0);
	std::cout << "Pick from the available classes\n";
	text_decor::setForegroundColor(0,102,204);
	vectFiles->openClassesTxt();
	ExpNxtLvl = 30;
	text_decor::reset();
	while (choice == false)
	{
		std::cin >> pick;
		switch(pick)
		{
			case 1:
			{
				Class = "Warrior";
				text_decor::setForegroundColor(153,0,153);
				std::cout << "You chose the Warrior!\n\n";
				text_decor::setForegroundColor(204,102,0);
				std::cout << "You get three more Strength: " << (Strength += 3) << "\n";
				std::cout << "You get two more Dexterity: " << (Dex += 2) << "\n";
				std::cout << "Your Intelligence and Wisdom stay the same.\n";
				std::cout << "You get one more Agility: " << (Agil += 1) << "\n";
				std::cout << "You get five more Constitution: " << (Constitution += 5) << "\n";
				text_decor::setForegroundColor(255,255,51); std::cout << "You get 20 Gold: " << (Gold = 20) << "\n";
				hpMax = (Constitution * 4 / 2);
				setSPMax(0);
				HP = hpMax;
				SP = spMax;
				text_decor::setForegroundColor(204,0,0);
				std::cout << "Your current HP is: " << HP << "\nAnd you have a Max HP of: " << hpMax << "\n";
				text_decor::setForegroundColor(0,102,102);
				std::cout << "Your current SP is: " << SP << "\nAnd you have a Max SP of: " << spMax << "\n";
				text_decor::reset();
				sleep(5);
				
				weaponName = "Sword";
				weapDmg = 4;
				armorName = "Rawhide";
				armDef = 3;
				shieldName = "None";
				playerFlag = 1; // For logic purposes
				Atk = (((Strength / Dex) - (Agil / Dex)) + weapDmg);
				Dmg = Atk + weapDmg;
				choice = true;
				break;
			}
				
			case 2:
			{
				Class = "Mage";
				text_decor::setForegroundColor(153,0,153);
				std::cout << "You chose the Mage!!\n\n";
				text_decor::setForegroundColor(204,102,0);
				std::cout << "Your Strength, Dexterity, Agility and Constitution stay the same.\n";
				std::cout << "You get seven Intelligence: " << (Intell += 7) << "\n";
				std::cout << "You get five more Wisdom: " << (Wisdom += 5) << "\n";
				text_decor::setForegroundColor(255,255,51); std::cout << "You get 20 Gold: " << (Gold = 21) << "\n"; 
				hpMax = (Constitution * 3 / 2);
				setMPMax(0);
				HP = hpMax;
				MP = mpMax;
				text_decor::setForegroundColor(204,0,0);
				std::cout << "Your current HP is: " << HP << "\nAnd you have a Max HP of: " << hpMax << "\n\n";
				text_decor::setForegroundColor(0,102,102);
				std::cout << "Your current MP is: " << MP << "\nAnd you have a Max MP of: " << mpMax << "\n\n";
				text_decor::reset();
				sleep(5);
				
				weaponName = "Dagger";
				weapDmg = 2;
				armorName = "Cloth";
				armDef = 1;
				shieldName = "None";					
				playerFlag = 2;
				Atk = (((Strength / Dex) - (Agil / Dex)) + weapDmg);
				Dmg = Atk + weapDmg;				
				choice = true;
				break;
			}
			
			case 3:
			{
/*				mainChar->Class = "Thief";
				std::cout << "You chose the Thief!!\n\n";
				std::cout << "You get two more Strength: " << (mainChar->Strength += 2) << "\n";
				std::cout << "You get four more Dexterity: " << (mainChar->Dex += 4) << "\n";
				std::cout << "You get one more Intelligence: " << (mainChar->Intell += 1) << "\n";
				std::cout << "You get one more Wisdom: " << (mainChar->Wisdom += 1) << "\n";
				std::cout << "You get seven more Agility: " << (mainChar->Agil += 7) << "\n";
				std::cout << "You get two more Constitution: " << (mainChar->Constitution += 2) << "\n";
				std::cout << "You get 20 Gold: " << (mainChar->Gold = 21) << "\n";
				mainChar->hpMax = (mainChar->Constitution * 4 / 3);
				mainChar->setSPMax(mainChar, 1);
				mainChar->HP = mainChar->hpMax;
				mainChar->SP = mainChar->spMax;
				std::cout << "Your current HP is: " << mainChar->HP << "\nAnd you have a Max HP of: " << mainChar->hpMax << "\n\n";
				std::cout << "Your current SP is: " << mainChar->SP << "\nAnd you have a Max SP of: " << mainChar->spMax << "\n\n";
				sleep(5);
				
				mainChar->weaponName = "Dagger";
				mainChar->weapDmg = 2;
				mainChar->armorName = "Cloth";
				mainChar->armDef = 1;
				mainChar->shieldName = "None";
				mainChar->playerFlag = 3;
				mainChar->Atk = (((mainChar->Strength / mainChar->Dex) - (mainChar->Agil / mainChar->Dex)) + mainChar->weapDmg);
				mainChar->Dmg = mainChar->Atk + mainChar->weapDmg;
				choice = true;*/
				break;
			}
				
			case 4:
			{
/*				mainChar->Class = "Ranger";
				std::cout << "You chose the Ranger!!\n\n";
				std::cout << "Your Strength remains the same.\n";
				std::cout << "You get six more Dexterity: " << (mainChar->Dex += 6) << "\n";
				std::cout << "You get one more Intelligence: " << (mainChar->Intell += 1) << "\n";
				std::cout << "You get one more Wisdom: " << (mainChar->Wisdom += 1) << "\n";
				std::cout << "You get five more Agility: " << (mainChar->Agil += 5) << "\n";
				std::cout << "You get three more Constitution: " << (mainChar->Constitution += 3) << "\n";
				std::cout << "You get 20 Gold: " << (mainChar->Gold = 20) << "\n";
				mainChar->hpMax = (mainChar->Constitution * 4 / 3);
				mainChar->setSPMax(mainChar, 2);
				mainChar->HP = mainChar->hpMax;
				mainChar->SP = mainChar->spMax;
				std::cout << "Your current HP is: " << mainChar->HP << "\nAnd you have a Max HP of: " << mainChar->hpMax << "\n\n";
				std::cout << "Your current SP is: " << mainChar->SP << "\nAnd you have a Max SP of: " << mainChar->spMax << "\n\n";
				sleep(5);
				
				mainChar->weaponName = "Short Bow";
				mainChar->weapDmg = 4;
				mainChar->armorName = "Cloth";
				mainChar->armDef = 1;
				mainChar->shieldName = "None";
				mainChar->playerFlag = 4;
				mainChar->Atk = (((mainChar->Strength / mainChar->Dex) - (mainChar->Agil / mainChar->Dex)) + mainChar->weapDmg);
				mainChar->Dmg = mainChar->Atk + mainChar->weapDmg;
				choice = true;*/
				break;
			}

			case 5:
			{
/*				mainChar->Class = "Barbarian";
				std::cout << "You chose the Barbarian!!\n\n";
				std::cout << "You get five more Strength: " << (mainChar->Strength += 5) << "\n";
				std::cout << "You get two more Dexterity: " << (mainChar->Dex += 2) << "\n";
				std::cout << "Your Intelligence stays the same.\n";
				std::cout << "Your Wisdom stays the same.\n";
				std::cout << "You get two more Agility: " << (mainChar->Agil += 2) << "\n";
				std::cout << "You get five more Constitution: " << (mainChar->Constitution += 5) << "\n";
				std::cout << "You get 20 Gold: " << (mainChar->Gold = 20) << "\n";
				mainChar->hpMax = (mainChar->Constitution * 4 / 3);
				mainChar->HP = mainChar->hpMax;
				mainChar->SP = mainChar->spMax;
				std::cout << "Your current HP is: " << mainChar->HP << "\nAnd you have a Max HP of: " << mainChar->hpMax << "\n\n";
				std::cout << "Your current SP is: " << mainChar->SP << "\nAnd you have a Max SP of: " << mainChar->spMax << "\n\n";
				sleep(5);
				
				mainChar->weaponName = "Dagger";
				mainChar->weapDmg = 4;
				mainChar->armorName = "Cloth";
				mainChar->armDef = 1;
				mainChar->shieldName = "None";
				mainChar->playerFlag = 5;
				mainChar->Atk = (((mainChar->Strength / mainChar->Dex) - (mainChar->Agil / mainChar->Dex)) + mainChar->weapDmg);
				mainChar->Dmg = mainChar->Atk + mainChar->weapDmg;
				choice = true;*/
				break;
			}
								
			default:
			{
				text_decor::setForegroundColor(175,0,0);
				std::cout << "That isn't a choice! Pick again: ";
				text_decor::reset();
			}
		}
	}
	
	Def = (Dex / armDef) + 3;
}

/* *************************************
 * ********* Monster Functions *********
 * *************************************
 */
void FSD_RPG_ENG::Monster::create(Monster *varMonst, int flag) // create(Monster *varMonst, int monstFlag)
{
	if (flag == 0)
	{
		varMonst->setName(varMonst, "Rat");
		varMonst->setHP(varMonst, 5);
		varMonst->setMP(varMonst, 0);
		varMonst->setAtk(varMonst, 7);
		varMonst->setDef(varMonst, 3);
		varMonst->setExp(varMonst, 3);
		varMonst->setGold(varMonst, 2);
		varMonst->setDmg(varMonst, 5);
	} else if (flag == 1)
		{
			varMonst->setName(varMonst, "Snake");
			varMonst->setHP(varMonst, 6);
			varMonst->setMP(varMonst, 0);
			varMonst->setAtk(varMonst, 9);
			varMonst->setDef(varMonst, 4);
			varMonst->setExp(varMonst, 16);
			varMonst->setGold(varMonst, 4);
		}
}

inline void FSD_RPG_ENG::Monster::setName(Monster *varMonst, std::string name)
{
	varMonst->Name = name;
}

inline void FSD_RPG_ENG::Monster::showName(Monster *varMonst)
{
	std::cout << varMonst->Name;;
}

inline int FSD_RPG_ENG::Monster::getHP(Monster *varMonst)
{
	return varMonst->HP;
}

inline int FSD_RPG_ENG::Monster::getDmg(Monster *varMonst)
{
	return varMonst->Dmg;
}

inline void FSD_RPG_ENG::Monster::showDmg(Monster *varMonst)
{
	std::cout << varMonst->Dmg;;
}

inline void FSD_RPG_ENG::Monster::showHP(Monster *varMonst)
{
	std::cout << varMonst->HP;
}

inline void FSD_RPG_ENG::Monster::setHP(Monster *varMonst, int amt)
{
	varMonst->HP = amt;
}

inline void FSD_RPG_ENG::Monster::minusHP(Monster *varMonst, int amt)
{
	varMonst->HP -= amt;
}

inline void FSD_RPG_ENG::Monster::setMP(Monster *varMonst, int amt)
{
	varMonst->MP = amt;
}

inline int FSD_RPG_ENG::Monster::getMP(Monster *varMonst)
{
	return varMonst->MP;
}

inline void FSD_RPG_ENG::Monster::showMP(Monster *varMonst)
{
	std::cout << varMonst->MP;
}

inline void FSD_RPG_ENG::Monster::setDef(Monster *varMonst, int amt)
{
	varMonst->Defense = amt;
}

inline void FSD_RPG_ENG::Monster::setDmg(Monster *varMonst, int amt)
{
	varMonst->Dmg = amt;
}

inline int FSD_RPG_ENG::Monster::getDef(Monster *varMonst)
{
	return varMonst->Defense;
}

inline void FSD_RPG_ENG::Monster::showDef(Monster *varMonst)
{
	std::cout << varMonst->Defense;
}

inline int FSD_RPG_ENG::Monster::getExp(Monster *varMonst)
{
	return varMonst->Exp;
}

inline void FSD_RPG_ENG::Monster::showExp(Monster *varMonst)
{
	std::cout << varMonst->Exp;
}

inline void FSD_RPG_ENG::Monster::setAtk(Monster *varMonst, int amt)
{
	varMonst->Atk = amt;
}

inline int FSD_RPG_ENG::Monster::getAtk(Monster *varMonst)
{
	return varMonst->Atk;
}

inline void FSD_RPG_ENG::Monster::showAtk(Monster *varMonst)
{
	std::cout << varMonst->Atk;
}

inline void FSD_RPG_ENG::Monster::setGold(Monster *varMonst, int amt)
{
	varMonst->Gold = amt;
}

inline int FSD_RPG_ENG::Monster::getGold(Monster *varMonst)
{
	return varMonst->Gold;
}

inline void FSD_RPG_ENG::Monster::showGold(Monster *varMonst)
{
	std::cout << varMonst->Gold;
}

inline void FSD_RPG_ENG::Monster::setExp(Monster *varMonst, int amt)
{
	varMonst->Exp = amt;
}

inline void FSD_RPG_ENG::Monster::setLvl(Monster *varMonst, int amt)
{
	varMonst->Level = amt;
}

inline void FSD_RPG_ENG::Monster::setResMag(Monster *varMonst, int amt)
{
	varMonst->ResMag = amt;
}

/* *********************************
 * ******** Game Functions *********
 * *********************************
 */

inline void FSD_RPG_ENG::Game::setTown(std::string name)
{
	townName = name;
}

inline void FSD_RPG_ENG::Game::showTown()
{
	text_decor::setAttribute(text_decor::underline); text_decor::setForegroundColor(186,206,0);
	std::cout << townName << "\n";
	text_decor::reset();
}

// ********* miscFunctions *********
int FSD_RPG_ENG::Game::Menu(Game *mainGame, Player *mainChar, Monster *varMonst, Files *vectFiles)
{
	int choice;
	
	menuGoto:
	
	text_decor::setForegroundColor(0,131,206);
	std::cout << "*****************************************\n";
	std::cout << "* ";
	text_decor::setAttribute(text_decor::underline);
	std::cout << "Quest For The Sword";
	text_decor::setAttribute(text_decor::offUnderline);
	std::cout << "                   *\n";
	std::cout << "* A Kelly Christus Production           *\n";
	std::cout << "* Presented and Published by            *\n";
	std::cout << "* Firestorm Productions                 *\n";
	std::cout << "*****************************************\n";
	std::cout << "*****************************************\n\n";
	std::cout << "*****************************************\n";
	std::cout << "*****************************************\n";
	std::cout << "** 1) Play Game                        **\n";
	std::cout << "** 2) Load Game                        **\n";
	std::cout << "** 3) Edit Game                        **\n";
	std::cout << "** 4) Change Log                       **\n";
	std::cout << "** 5) Exit Game                        **\n";
	std::cout << "*****************************************\n";
	std::cout << "*****************************************\n";
	text_decor::reset();

	std::cin >> choice;
	
	switch (choice)
	{
		case 1:
		{
			mainGame->strtgame = true; //Sets mainStart member variable strtgame to true, so game loop can begin
			mainGame->endgame = false; //sets mainEnd member variable endgame to false so game doesn't end suddenly
			text_decor::setForegroundColor(255,0,0);
			std::cout << "mainGame strtgame = true\n";
			std::cout << "mainGame endgame = false\n";
			
			if (mainGame->strtgame == true)
			{
				std::cout << "GAME STARTED.\n\n";
			} else
				std::cout << "GAME NOT STARTED! EXITING.\n\n";
				
			text_decor::reset();
			
			mainGame->Create(mainGame, mainChar, vectFiles);
			std::cout << "Going to Tarsus.\n";
		}
		break;
		
		case 2:
		{
			std::cout << "Under Construction.\n";
			goto menuGoto;
		}
		break;
		
		case 3:
		{
			std::cout << "Under Construction.\n";
			goto menuGoto;
		}
		break;
		
		case 4:
		{
			vectFiles->openChangeLog();
			goto menuGoto;
		}
		break;
		
		/* ********* Depreciated; was for testing file(s).  Keep, just in case, for Serialization *********
		case 5:
		{
			vectFiles->checkFiles(vectFiles);
			goto menuGoto;
		}
		break;
		*/
		
		case 5:
		{
			mainGame->EndGame(mainGame, mainChar, varMonst, vectFiles);
		}	
		break;
			
		default:
		{
			std::cout << "That is not a proper choice.\n";
			goto menuGoto;
		}
	}
	
	return 0;
}
	
void FSD_RPG_ENG::Game::Create(Game *mainGame, Player *mainChar, Files *vectFiles)
{
	text_decor::setForegroundColor(153,0,153);
	std::cout << "\nPut in your first and last name!\n";
	text_decor::reset();
	mainChar->createName();
	
	text_decor::setForegroundColor(153,0,153);
	std::cout << "\nExcellent, "; text_decor::setForegroundColor(0,204,102); mainChar->showName(); std::cout << ".\n"; text_decor::reset();
	std::cout << ".\n\n";
	mainChar->chooseRace(/*mainChar,*/ vectFiles);
	
	text_decor::setForegroundColor(153,0,153);
	std::cout << "\nWonderful! You're a ";
	text_decor::setForegroundColor(153,0,153); mainChar->showRace();
	std::cout << " ";
	text_decor::setForegroundColor(0,204,102); mainChar->showName();
	std::cout << ".\n\n";
	mainChar->chooseClass(vectFiles);
	
	std::cout << "\nSuch a wise decision to choose the "; mainChar->showClass(); std::cout << ". Let's view your character stats: \n\n";
	mainGame->setTown("None");
	mainChar->checkStats(vectFiles, mainGame);
//	std::cout << "You are in: "; mainGame->showTown(mainGame);
	std::cout << "\nVery wise decision. It seems as though we can now venture forth on our journey.\n\n";
	
	mainGame->setTown("Tarsus");
}
#endif

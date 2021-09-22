/*
*******************************************************************************
*******************************************************************************
*******************************************************************************
*
*	Project: Quest For The Sword
*	File: FSP_RPGEng_GameFuncts.cpp
*	Author: Kelly Christus
*	File Version: 1.00
*
*	Description:
*	This is the Header File containing all functions for gameplay functionality.
*
*	Created on: September 7, 2016 6:54 PM
*	Last updated on: September 22, 2021 2:23 PM
*
*******************************************************************************
*******************************************************************************
*******************************************************************************
*/
#ifndef FSD_RPGENG_GAMEFUNCTS_H
#define FSD_RPGENG_GAMEFUNCTS_H

// ********* Back-end Game Functions *********
int FSD_RPG_ENG::Game::gamePlay(Game *mainGame, Player *mainChar, Monster *varMonst, Files *vectFiles)
{
	while ((mainGame->strtgame == true) && (mainGame->endgame == false))
	{
		while ((mainGame->townName == "Tarsus") && (mainGame->endgame == false) && (mainGame->strtgame == true))
		{
			mainGame->enterTown(mainGame, mainChar, varMonst, vectFiles);
		}
		
		while ((mainGame->townName == "Insert City Here") && (mainGame->endgame == false) && (mainGame->strtgame == true))
		{
			mainGame->enterTown(mainGame, mainChar, varMonst, vectFiles);
		}
	}
	
	if ((mainGame->endgame == true) && (mainGame->strtgame == false))
	{
		mainGame->EndGame(mainGame, mainChar, varMonst, vectFiles);
		return EXIT_SUCCESS;
	}
	
	return EXIT_SUCCESS;
}

int FSD_RPG_ENG::Game::enterTown(Game *mainGame, Player *mainChar, Monster *varMonst, Files *vectFiles) //Enter Town Function
{	
	std::cout << "Welcome to " << mainGame->townName << " stranger!";
	std::cout << " How can we help? Choose a number from the list below:\n\n";
	std::cout << "1. Enter Battle.\t2. Rest at Inn.\t3. Inventory\t4. Check Stats.\t5. Buy Supplies.\t6. Crafting.\t7. Exit Game.\n";
	int choice;
	std::cin >> choice;
	switch (choice)
	{
		case 1:
		{
			mainGame->Battle(mainGame, mainChar, varMonst, vectFiles);
			std::cout << "\n";
			break;
		}
		
		case 2:
		{
			mainGame->Inn(mainGame, mainChar);
			std::cout << "\n";
			break;
		}
		
		case 3:
		{
			mainChar->Inventory();
			std::cout << "\n";
			break;
		}
		
		case 4:
		{
			mainChar->checkStats(vectFiles, mainGame);
			std::cout << "\n";
			break;
		}
		
		case 5:
		{
			mainGame->enterShop(mainGame, mainChar);
			std::cout << "\n";
			break;
		}
		
		case 6:
		{
			mainChar->craftMenu();
			std::cout << "Still under construction!\n";
			break;
		}
		
		case 7:
		{
			mainGame->endgame = true;
			mainGame->strtgame = false;
			std::cout << "\n";
			return 0;
		}
		
		default:
			std::cout << "That isn't an answer!\n";
	}

	if (mainChar->getHP() <= 0)
	{
		std::cout << "You have died.  Enjoy the afterlife!\n";
		mainGame->endgame = true;
		mainGame->strtgame = false;
		return 0;
	}
		
	return 0;
}

int FSD_RPG_ENG::Game::EndGame(Game *mainGame, Player *mainChar, Monster *varMonst, Files *vectFiles)
{
	std::cout << "Closing down Game!\nDeleting vectFile instance: ";
	delete vectFiles;
	std::cout << "vectFiles instance deleted!\n";
	std::cout << "Deleting mainGame instance: ";
	delete mainGame;
	std::cout << "mainGame instance deleted!\n";
	std::cout << "Deleting mainChar instance: ";
	delete mainChar;
	std::cout << "mainChar instance deleted!\n";
	std::cout << "Deleting varMonst instance: ";
	delete varMonst;
	std::cout << "varMonst instance deleted!\n";
	std::cout << "Exiting Game!\n";
	
	return 0;
}

// ********* Crafting *********
void FSD_RPG_ENG::Player::craftMenu()
{
	int choice;

	std::cout << "*******************\n";
	std::cout << "*******************\n";
	std::cout << "*     Crafting    *\n";
	std::cout << "*******************\n";
	std::cout << "*******************\n";
	std::cout << "** 1) Alchemy    **\n";
	std::cout << "** 2) Blacksmith **\n";
	std::cout << "** 3) Exit       **\n";
	std::cout << "*******************\n";
	std::cin >> choice;
	switch (choice)
	{
		case 1:
		{
			std::cout << "Alchemy!\n";
			Low_H_Pots = Low_H_Pots;
			std::cout << "Going back to Menu\n";
			break;
		}
		
		case 2:
		{
			std::cout << "Blacksmithing!\n";
			std::cout << "Going back to Menu\n";
			break;
		}
		
		case 3:
		{
			std::cout << "Leaving Crafting.\n";
			std::cout << "Going back to Menu\n";
			break;
		}
					
		default:
			std::cout << "That is not a proper choice.\n";
	}
}

// ********* Battle Functions *********
int FSD_RPG_ENG::Game::Battle(Game *mainGame, Player *mainChar, Monster *varMonst, Files *vectFiles)
{
	int monstFlag = 0; //Enable Randomization for random Monster
	std::cout << "\n----------------------------------------------------------------------";
	std::cout << "\n"; mainChar->showName(); std::cout << " entered the battle!\n";
	varMonst->create(varMonst, monstFlag);
	std::cout << "A "; varMonst->showName(varMonst); std::cout << " has entered the battle!\n";
	mainGame->setBattStart(mainGame);

	while (mainGame->batStart == true)
	{
		bool menuChoice;
		menuChoice = true;
		
		std::cout << "\nEnemy Name: "; varMonst->showName(varMonst); std::cout << "\nEnemy HP: "; varMonst->showHP(varMonst); std::cout << "\nEnemy MP: "; varMonst->showMP(varMonst); std::cout << "\nEnemy Def: "; varMonst->showDef(varMonst); std::cout << ".\n";
		std::cout << "\nYour HP: "; mainChar->showHP(); std::cout << "\tYour MP: "; mainChar->showMP(); std::cout << ".\n\n";
		std::cout << "What would you like to do?\n";
		std::cout << "1. Attack\t2. Use Magic/Skill\t3. Use Item\t4 See Stats\t5. Escape\n";
		
		if ((menuChoice) && (mainGame->batStart == true))
		{
			int choice;
			std::cin >> choice;
			switch (choice)
			{
				case 1:
				{
					mainChar->Attack(varMonst); // Make this a mainGame(Player *mainChar, Monster *varMonst) function
					break;
				}
				
				case 2:
				{
					/*
					if (mainChar->playerFlag == 1)
						mainChar->UseSkill(skills);	
											
						else if (mainChar->playerFlag == 2)
							mainChar->UseMagic(magic);
						
							else if (mainChar->playerFlag == 3)
								mainChar->UseThief(tskills);
						
					else
						std::cout << "\nWhat?\n\n";
					*/
					
					std::cout << "Under Construction.\n\n";
					break;
				}
				
				case 3:
				{
					std::cout << "Under Construction.\n\n";
					break;
				}
				
				case 4:
				{
					mainChar->checkStats(vectFiles, mainGame);
					break;
				}
				
				case 5:
				{
					std::cout << "You ran away!\n\n";
					mainGame->setBattEnd(mainGame);	
					break;
				}
				
				default:
					std::cout << "That isn't a choice!\n\n";
			}
		} else
			{
				std::cout << "ERROR IN PROGRAM, TERMINATED.";
				return 0;
			}

		int charHP = mainChar->getHP();
		if (charHP <= 0)
		{
			menuChoice = false;
			mainGame->setBattEnd(mainGame);
			std::cout << "You have died in battle.\n";
			return 0;
		}

		int monstHP = varMonst->getHP(varMonst);
		if (monstHP <= 0)
		{			
			menuChoice = false;
			endBattle(mainGame, mainChar, varMonst);
		}
	}

	int charExp = mainChar->getCurrExp();
	int charNxtLvl = mainChar->getExpLvl();
	if (charExp >= charNxtLvl)
	{
		mainGame->LevelUp(mainChar);
		return 0;
	}
	
	//charExp = 0;
	//charNxtLvl = 1;
			
	return 0;
}
	
void FSD_RPG_ENG::Player::Attack(Monster *varMonst) // Turn into ::Game::Attack(Player *mainChar, Monster *varMonst) function 
{
	int dmg = getDmg();
	int def = getDef(); std::cout << "Player Defense: "; showDef(); std::cout << ".\n";
	int monstDmg = varMonst->getDmg(varMonst);
	int monstDef = varMonst->getDef(varMonst);
	int atk = dmg - monstDef;
	int monstAtk = (((monstDmg - def) - 2) + varMonst->getAtk(varMonst));
	
	std::cout << "\nYou hit your enemy for: " << atk << ".";
	varMonst->minusHP(varMonst, atk);
	
	std::cout << "\nYour enemy attacks for: " << monstAtk << ".";
	minusHP(monstAtk);
	
	while (HP > hpMax)
	{
		HP = hpMax;
	}
}

void FSD_RPG_ENG::Player::UseSkill(Skill* Skill[10])
{
	std::cout << "Testing!\n\n";
}

void FSD_RPG_ENG::Game::LevelUp(Player *mainChar)
{
	int curLvl = mainChar->getLvl();
	int maxLvl = mainChar->getExpMax();
	if (curLvl == maxLvl)
	{
		std::cout << "\nYou've reached the max level.\n";
	} else {
		std::cout << "\nYou have Leveled Up! You get 2 in all Stats and full Rejuvination of HP and MP!\n\n";
		int str = 2; int dex = 2; int intell = 2; int wis = 2; int agi = 2; int consti = 2;
		int hpMax = (mainChar->getHPMax() + 5);
		int mpFlag = 0;
		int rejHP = mainChar->getHPMax();
		int mpMax = mainChar->getMPMax();
		//int spMax = mainChar->getSPMax(mainchar) + 4);		
		mainChar->setStr(str);
		mainChar->setDex(dex);
		mainChar->setIntell(intell);
		mainChar->setWis(wis);
		mainChar->setAgil(agi);
		mainChar->setConst(consti);
		mainChar->setHP(rejHP);
		mainChar->setHPMax(hpMax);
		mainChar->setMPMax(mpFlag);
		mainChar->setMP(mpMax);
		//mainChar->setSP(mainChar, spMax);
		mainChar->setLvl(1);
		std::cout << "Check your Stats to see the difference!\n";
	}
	
	int nextExp = mainChar->getCurrExp();
	int lvlExp = 0;
	mainChar->setNxtLvl(nextExp);
	mainChar->setLvlExp(lvlExp);
}

void FSD_RPG_ENG::Game::calcBatt(Game *mainGame, Player *mainChar, Monster *varMonst)
{
	int gold = varMonst->getGold(varMonst);
	
	std::cout << "\nYou have defeated your enemy! You gain "; varMonst->showExp(varMonst); std::cout << " experience points from battle.\n";
	std::cout << "You also gain " << gold << " Gold pieces.\n";
	
	int expAmt = varMonst->getExp(varMonst);
	int goldAmt = varMonst->getGold(varMonst);
	
	mainChar->setCurrExp(expAmt);
	mainChar->setGold(goldAmt);
	mainGame->setBattEnd(mainGame);
	std::cout << "------------------------------------------------------";
}

void FSD_RPG_ENG::Game::endBattle(Game *mainGame, Player *mainChar, Monster *varMonst)
{
	mainGame->calcBatt(mainGame, mainChar, varMonst);
}

void FSD_RPG_ENG::Game::setBattStart(Game *mainGame)
{
	mainGame->batStart = true;
}

void FSD_RPG_ENG::Game::setBattEnd(Game *mainGame)
{
	mainGame->batStart = false;
}

// ********* In-Town Functions (Shops) *********
void FSD_RPG_ENG::Game::enterShop(Game *mainGame, Player *mainChar) //Enter shop Function
{
	int choice;
	std::cout << "Welcome to the " << mainGame->townName << " General Shop! What can I do for ye?\n";
	
	if (mainGame->townFlag == 0)
	{
		std::cout << "1. Buy Items.\t2. Sell Items.\t3. Leave shop.\n";
		std::cin >> choice;
		switch (choice)
		{
			case 1:
			{
				int choice;
				std::cout << "\nWhat would you like to buy?\n\n";
				std::cout << "1. Short Sword - 10 Gold\t2. Buckler - 20 Gold\t3. Low Life Potion - 15 Gold\t4. Leather Armor - 35 Gold\t5. Cancel\n";
				std::cout << "\n";
				std::cin >> choice;
				switch (choice)
				{
					case 1:
					{
						std::cout << "Under construction!\n";
						break;
					}
					case 2:
					{
						std::cout << "Under construction!\n";
						break;
					}
					case 3:
					{
						int amt = 15;
						int flag = 3;
						mainChar->buyItem(mainGame, amt, flag);
						break;
					}
					case 4:
					{
						std::cout << "Under construction!\n";
						break;
					}
				}
				break;
			}
			case 2:
			{
				//int choice;
				std::cout << "\nUnder Construction.\n";
				//std::cout << "What would you like to sell?\n\n";
				/*cout << "1. Short Sword - 10 Gold\t2. Buckler - 20 Gold\t3. Life Potion - 5 Gold\t4. Leather Armor - 35 Gold\n";
				switch (choice)
				{
					case 1:
					{
					}
					case 2:
					{
					}
					case 3:
					{
					}
					case 4:
					{
					}
				}*/
			
				break;
			}	
			case 3:
			{
				std::cout << "\nThanks for stopping buy, come back again soon!";
				break;
			}
			default:
					std::cout << "That isn't an answer!\n";
		}
	} 
	else if (mainGame->townFlag == 1)
	{
		int choice;
		//std::cout << "Hekthal";
		std::cout << "Welcome to the " << mainGame->townName << " General Shop! What can I do for ye?\n";
		std::cout << "1. Buy Items.\t2. Sell Items.\t3. Leave shop.\n";
		std::cin >> choice;
		switch (choice)
		{
			case 1:
			{
				int choice1;
				std::cout << "\nWhat would you like to buy?\n\n";
				std::cout << "1. Short Sword - 10 Gold\t2. Buckler - 20 Gold\t3. Low Life Potion - 15 Gold\t4. Leather Armor - 35 Gold\n";
				std::cout << "\n";
				std::cin >> choice1;
				switch (choice1)
				{
					case 1:
					{
						std::cout << "Under construction!\n";
						break;
					}
					case 2:
					{
						std::cout << "Under construction!\n";
						break;
					}
					case 3:
					{
						std::cout << "Under construction!\n";
						break;
					}
					case 4:
					{
						std::cout << "Under construction!\n";
						break;
					}
					default:
						std::cout << "That isn't a choice!\n";
				}
				break;
			}
			case 2:
			{
				//int choice;
				std::cout << "\nUnder Construction.\n";
				//std::cout << "What would you like to sell?\n\n";
				/*cout << "1. Short Sword - 10 Gold\t2. Buckler - 20 Gold\t3. Life Potion - 5 Gold\t4. Leather Armor - 35 Gold\n";
				switch (choice)
				{
					case 1:
					{
					}
					case 2:
					{
					}
					case 3:
					{
					}
					case 4:
					{
					}
				}*/
				break;
			}
			case 3:
			{
				std::cout << "\nThanks for stopping buy, come back again soon!";
				break;
			}
			default:
				std::cout << "That isn't an answer!\n";
		}
	}
	else if (mainGame->townFlag == 2)
	{
		int choice;
		//std::cout << "Telengras";
		std::cout << "Welcome to the " << mainGame->townName << " General Shop! What can I do for ye?\n";
		std::cout << "1. Buy Items.\t2. Sell Items.\t3. Leave shop.\n";
		std::cin >> choice;
		switch (choice)
		{
			case 1:
			{
				int choice;
				std::cout << "\nWhat would you like to buy?\n\n";
				std::cout << "1. Short Sword - 10 Gold\t2. Buckler - 20 Gold\t3. Low Life Potion - 15 Gold\t4. Leather Armor - 35 Gold\n";
				std::cout << "\n";
				std::cin >> choice;
				switch (choice)
				{
					case 1:
					{
						std::cout << "Under construction!\n";
						break;
					}
					case 2:
					{
						std::cout << "Under construction!\n";
						break;
					}
					case 3:
					{
						std::cout << "Under construction!\n";
						break;
					}
					case 4:
					{
						std::cout << "Under construction!\n";
						break;
					}
					default:
						std::cout << "Not an answer!\n";
				}
				break;
			}
			
			case 2:
			{
				//int choice;
				std::cout << "\nUnder Construction.\n";
				//std::cout << "What would you like to sell?\n\n";
				/*cout << "1. Short Sword - 10 Gold\t2. Buckler - 20 Gold\t3. Life Potion - 5 Gold\t4. Leather Armor - 35 Gold\n";
				switch (choice)
				{
					case 1:
					{
					}
					case 2:
					{
					}
					case 3:
					{
					}
					case 4:
					{
					}
				}*/
			
				break;
			}	
			case 3:
			{
				std::cout << "\nThanks for stopping buy, come back again soon!";
				break;
			}
			default:
					std::cout << "That isn't a choice\n";
		}
	}
}

inline void FSD_RPG_ENG::Player::healInn()
{
	int hpMax = getHPMax();
	healHP(hpMax);
	int mpMax = getMPMax();
	healMP(mpMax);
}

void FSD_RPG_ENG::Game::Inn(Game *mainGame, Player *mainChar) //Enter inn Function
{	
	if (mainGame->townName == "Tarsus")
	{
//		char choice;
		
		if (mainChar->getGold() < 3)
		{
			std::cout << mainChar->getGold() << "/n/n";
			std::cout << "\nYou don't have enough gold!\n\n";
		} else if (mainChar->getGold() <= 0)
			std::cout << "\nAre you serious? You don't have any gold!\n\n";
			
		if (((mainChar->getHP() != mainChar->getHPMax())) || ((mainChar->getMP() != mainChar->getMPMax())) || ((mainChar->getHP() && mainChar->getMP()) != (mainChar->getHPMax() && mainChar->getMPMax())))
		{
			char choice;
			std::cout << "Welcome to the inn! Would you like to stay? Its three gold.\n\n";
			std::cout << "You have: "; mainChar->showGold(); std::cout << " Gold available. [y = yes; n = no]\n";
			std::cin >> choice;
			switch (choice)
				{
					case 'y':
					{
						std::cout << "\nYou have a great rest great Adventurer!\n*You give the innkeeper 3 *";
						int goldAmt = 3;
						mainChar->subGold(goldAmt);
						std::cout << "\nBlessings be upon thee in thy rest.\n\n";
						mainChar->healInn();
						break;
					}
					case 'n':
					{
						std::cout << "\nOkay then, have a great day!\n\n";
						break;
					}
					default:
						std::cout << "That isn't a choice!\n";
				}
		} else
			std::cout << "\nYou don't need any rest, have a great day!\n\n";
	}
}
#endif

/*
*******************************************************************************
*******************************************************************************
*******************************************************************************
*
*	Project: Quest For The Sword
*	File: FSP_RPGEng_Classes.h
*	Author: Kelly Christus
*	File Version: 1.00
*
*	Description:
*	This is the Header File containing all the classes for the engine.
*
*	Created on: September 7, 2016 6:54 PM
*	Last updated on: September 22, 2021 2:22 PM 
* 
*
*******************************************************************************
*******************************************************************************
*******************************************************************************
*/
#ifndef FSD_RPGENG_CLASSES_H
#define FSD_RPGENG_CLASSES_H

//class Abstract;
class Files;
class Game;
class Player;
class Monster;	

/* class Abstract
 * 	private:
 * 		void function(arg 1, arg 2);
 * 
 */

class Files
{
	private:
	//	std::vector<std::string> files;
	
	public:
		int checkFiles();
		void getFiles();
		void openClassesTxt();
		void openRacesTxt();
		void openChangeLog();
		void openMageSkills();
		void openMagics();
		void openThiefSkills();
		void openWarriorSkills();
};

class Monster
{
	private:
		std::string Name;
		std::string Weapon;
		std::string Skills[5];
		int HP;
		int MP;
		int Level;
		int Exp;
		int Gold;
		int Atk;
		int Dmg;
		float ResMag;
		int Defense;
		int WeapDmg;
		
	public:
		void initStats(Monster *varMonst);
		
		void setName(Monster *varMonst, std::string name);
		void showName(Monster *varMonst);
		
		void setResMag(Monster *varMonst, int amt);
		void getResMag(Monster *varMonst);
		void showResMag(Monster *varMonst);
		
		void setHP(Monster *varMonst, int amt);
		int getHP(Monster *varMonst);
		void showHP(Monster *varMonst);
		void minusHP(Monster *varMonst, int amt);
		
		void setMP(Monster *varMonst, int amt);
		int getMP(Monster *varMonst);
		void showMP(Monster *varMonst);
		
		void setDef(Monster *varMonst, int amt);
		int getDef(Monster *varMonst);
		void showDef(Monster *varMonst);
		
		void setExp(Monster *varMonst, int amt);
		int getExp(Monster *varMonst);
		void showExp(Monster *varMonst);
		
		void setGold(Monster *varMonst, int amt);
		int getGold(Monster *varMonst);
		void showGold(Monster *varMonst);
		
		void setAtk(Monster *varMonst, int amt);
		int getAtk(Monster *varMonst);
		void showAtk(Monster *varMonst);
		
		void setDmg(Monster *varMonst, int amt);
		int getDmg(Monster *varMonst);
		void showDmg(Monster *varMonst);
		
		void setLvl(Monster *varMonst, int amt);
		
		void create(Monster *varMonst, int flag);
		void Attack();
		void CastMagic();
		void RunAway();
		void Death();
		
		Monster();
		~Monster();
};

Monster::Monster() // Monster Constructor
{
	this->HP = 0;
	this->MP = 0;
	this->Level = 0;
	this->Exp = 0;
	this->Gold = 0;
	this->Atk = 0;
	this->ResMag = 0;
	this->Defense = 0;
	this->Dmg = 0;
	this->WeapDmg = 0;
	std::cout << "Monster Initialization Traced!\n";
}

Monster::~Monster() // Monster Deconstructor
{
}

/* class abstractObject -- To impliment Inheritance and Polymorphism later */
class Player
{
	private:
		/* Structs */
		struct Skill { int spCost; int damage; std::string skillName; std::string description; };
		struct Magic { int mpCost; int damage; std::string magicName; std::string description; };
		struct thiefSkill { int spCost; int damage; std::string skillName; std::string description; };
		
		/* Character Details */
		std::string Name;
		std::string Race;
		std::string Class;
		std::string weaponName;
		std::string armorName;
		std::string shieldName;
		int Level;
		int nextLvl;
		int Exp;
		int ExpNxtLvl;
		int ExpLvlMax;
		int Gold;
		
		/* Character Stats */
		int HP;
		int MP;
		int SP;
		int hpMax;
		int mpMax;
		int spMax;
		int Strength;
		int Intell;
		int Wisdom;
		int Constitution;
		int Agil;
		int Dex;
		int Def;
		int Atk;
		int Dmg;
		int weapDmg;
		int armDef;
		int shieldDef;
		
		/* Inventory */
		int Low_H_Pots;
		int Med_H_Pots;
		int High_H_Pots;
		int Low_M_Pots;
		int Med_M_Pots;
		int High_M_Pots;
		
		/* Misc. Variables */
		Skill* skills[10];
		Magic* magic[10];
		thiefSkill* tskills[10];
		int amt;
		int playerFlag;
				
		//static int numOfObjects;
			
	public:
		/* Character Name */
		void createName();
		inline void setName(std::string);
		inline void showName();
		
		/* Character Race */
		void chooseRace(Files *vectFiles);
		inline void setRace(std::string);
		inline void showRace();
		
		/* Character Class */
		void chooseClass(Files *vectFiles);
		inline void setClass(std::string);
		inline void showClass();
		
		/* HP (Health/Hit Points)*/
		void setHP(int amt);
		void setHPMax(int flag);
		int getHP();
		int getHPMax();
		void showHP();
		void showHpMax();
		
		/* MP (Magic Points) */
		void setMP(int amt);
		void setMPMax(int flag);

		/* SP (Skill Points) */
		void setSP(int amt);
		void setSPMax(int flag);
		void setDex(int amt);
		void setWis(int amt);
		void setAgi(int amt);
		void setWeap(std::string);
		void setArm(std::string);

		
		int getMP();
		int getMPMax();
		int getSP();
		int getSPMax();
		int getLvl();
		int getCurrExp();
		int getExpLvl();
		int getExpMax();
		int getDef();
		int getAtk();
		int getDmg();

		void showMP();
		void showMpMax();
		void showLvl();
		void showCurrExp();
		void showExpLvl();
		void showExpMax();
		void showExpNxtLvl();
		void showNxtExp();
		void showDef();
		void showAtk();
		void showDmg();
		void showPots();
		void showWeap();
		void showArm();
		void showShield();
				
		/* Strength */
		void setStr(int amt);
		void showStrength();
		void getStrength();
		
		/* Dexterity */
		
		/* Intelligence */
		void setIntell(int amt);
		
		/* Wisdom */
		
		/* Agility */
		void setAgil(int amt);
		
		/* Constitution */
		void setConst(int amt);
		
		/* Attack and Damage */
		void Attack(Monster *varMonst);
		void setAtk(int amt);
		void setWeapDmg(int amt);
		
		/* Defense */
		void setDef(int amt);
		void setArmDef(int amt);
		void setShieldDef(int amt);
				
		/* Skills */
		void UseSkill(Skill* skills[10]);
		//void UseSkill(Skill* skills[10]); Make abstract funct passing Files *vectFiles holding Skills Files; make if else to check Class and pass proper Skills
		void UseThief(thiefSkill* tskills[10]); // Eventually merge with abstract UseSkill funct
		
		/* Magic */
		void UseMagic(Magic* magic[10]);
		//void CastMagic();
		//void UseMagic(Magic* magic[10]); Make abstract funct passing Files *vectFiles holding Magic Files; make if else to check Class and pass proper Magic
		
		/* Items */
		void UseItem();
		void addItem(Game *mainGame, int item, int flag);
		void buyItem(Game *mainGame, int amt, int flag);
		
			/* Gold */
			void setGold(int amt);
			int getGold();
			void showGold();
			void subGold(int amt);
			
			/* Low Health Potion */
			void setLowHPot(int amt);
			void subLowHPot(int amt);
			void addLowHPot(int amt);
		
			/* Medium Health Potion */
			void setMedHPot(int amt);
			void subMedHPot(int amt);
			void addMedHPot(int amt);
		
			/* High Health Potion */
			void setHighHPots(int amt);
		
			/* Low Mana Potion */
			void setLowMPots(int amt);
		
			/* Medium Mana Potion */
			void setMedMPots(int amt);
		
			/* High Mana Potion */
			void setHighMPots(int amt);
			
			/* Shields */
			void setShield(std::string);
			
		/* Inventory */
		void checkStats(Files *vectFiles, Game *mainGame);
		void Inventory();
		
		/* Levels */
		void setLvl(int amt);
		void setNxtLvl(int amt);
		void setCurrExp(int amt);
		void setLvlExp(int amt);
		void setExpMax(int amt);
						
		/* Crafting */
		void craftMenu();
		void craftAlchemy();
		void craftBlacksmith();
		void craftingSkillAlchemy();
		void craftingSkillBlacksmith();
		void craftingSkill();
		void craftingSkillTotal();
		/* Later Editions.
		 * void craftCarpentry(Player *mainChar);
		 * void craftLeatherer(Player *mainChar);
		 * void craftTailor(Player *mainChar);
		 * void craftingSkillCarpentry(Player *mainChar);
		 * void craftingSkillLeatherer(Player *mainChar);
		 * void craftingSkillTailor(Player *mainChar);*/
		
		/* Misc Functions */
		void setPlayerFlag(int flag);
		void expCheck();
		void healHP(int amt);
		void healMP(int amt);
		void minusHP(int amt);

		void healInn();

		void Death();
		
		Player();
		~Player();
};

Player::Player() // Player Constructor
{
	setName("None");
	this->setRace("None");
	this->setClass("None");
	this->setWeap("None");
	this->setArm("None");
	this->setShield("None");
	this->setHP(0);
	this->setMP(0);
	this->SP = 0;
	this->setHPMax(0);
	setMPMax(0);
	this->spMax = 0;
	this->setLvl(0);
	this->setNxtLvl(0);
	this->setCurrExp(0);
	this->setExpMax(30);
	this->Strength = 0;
	this->Intell = 0;
	this->Wisdom = 0;
	this->Constitution = 0;
	this->Agil = 0;
	this->Dex = 0;
	this->Def = 0;
	this->Atk = 0;
	this->Gold = 0;
	this->weapDmg = 0;
	this->armDef = 0;
	this->shieldDef = 0;
	this->playerFlag = 0;
	this->Low_H_Pots = 0;
	this->Med_H_Pots = 0;
	this->High_H_Pots = 0;
	this->Low_M_Pots = 0;
	this->Med_M_Pots = 0;
	this->High_M_Pots = 0;
	std::cout << "Player Initialization Traced!\n";
//	this->numOfObjects += 1;
}

Player::~Player() // Player Deconstructor
{
}

class Game {
	private:
		std::string townName;
		bool strtgame;
		bool endgame;
		bool batStart;
		
	public:
		int townFlag;
	
		void initStats(Game *mainGame);
		
		void setTown(std::string);
		void showTown();

		int Menu(Game *mainGame, Player *mainChar, Monster *varMonst, Files *vectFiles);
		int gamePlay(Game *mainGame, Player *mainChar, Monster *varMonst, Files *vectFiles);
		void initGame(Game *mainGame, Player *mainChar, Monster *varMonst);
		void Create(Game *mainGame, Player *mainChar, Files *vectFiles);
		int enterTown(Game *mainGame, Player *mainChar, Monster *varMonst, Files *vectFiles);
		int EndGame(Game *mainGame, Player *mainChar, Monster *varMonst, Files *vectFiles);
		void enterShop(Game *mainGame, Player *mainChar);
		void Inn(Game *mainGame, Player *mainChar);
		
		int Battle(Game *mainGame, Player *mainChar, Monster *varMonst, Files *vectFiles);
		void endBattle(Game *mainGame, Player *mainChar, Monster *varMonst);
		void setBattStart(Game *mainGame);
		void setBattEnd(Game *mainGame);
		void calcBatt(Game *mainGame, Player *mainChar, Monster *varMonst);
		void LevelUp(Player *mainChar);
		
		Game();
		~Game();
};

Game::Game() // Game Constructor
{
	this->townFlag = 0;
	this->strtgame = false;
	this->endgame = false;
	this->batStart = 0;
	std::cout << "Game Initialization Traced!\n";
}

Game::~Game() // Game Deconstructor
{
}
#endif

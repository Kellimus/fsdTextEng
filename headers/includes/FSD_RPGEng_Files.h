/*
*******************************************************************************
*******************************************************************************
*******************************************************************************
*
*	Project: Quest For The Sword
*	File: FSP_RPGEng_FileFuncts.cpp
*	Author: Kelly Christus
*	File Version: 1.00
*
*	Description:
*	This is the Header File containing the File Functions called by the engine.
* 
*	Created on: September 7, 2016 6:54 PM
*	Last updated on: October 13, 2016 6:56 PM 
* 
* 	Change Log located at:
* 	http://mindfluxsociety.org/fsp/code/changelog/trpge/changelog.txt
*
*******************************************************************************
*******************************************************************************
*******************************************************************************
*/
#ifndef FSD_RPGENG_FILES_H
#define FSD_RPGENG_FILES_H

void FSD_RPG_ENG::Files::openRacesTxt()
{
	char rfTxt;
	std::ifstream rf("./text_files/races.txt");
	
	while(!rf.eof())
	{
		rf.get(rfTxt);
		std::cout << rfTxt;
	}

	rf.close();
}

void FSD_RPG_ENG::Files::openClassesTxt()
{
	char clsTxt;
	std::ifstream cls("./text_files/classes.txt");
	
	while(!cls.eof())
	{
		cls.get(clsTxt);
		std::cout << clsTxt;
	}

	cls.close();
}

void FSD_RPG_ENG::Files::openChangeLog()
{
	char chlTxt;
	std::ifstream chl("./text_files/changelog.txt");
	
	while(!chl.eof())
	{
		chl.get(chlTxt);
		std::cout << chlTxt;
	}

	chl.close();
}

void FSD_RPG_ENG::Files::openMageSkills()
{
	char mTxt;
	std::ifstream mgs("./text_files/mageSkills.txt");
	
	while(!mgs.eof())
	{
		mgs.get(mTxt);
		std::cout << mTxt;
	}

	mgs.close();
}

void FSD_RPG_ENG::Files::openMagics()
{
	char magTxt;
	std::ifstream mag("./text_files/magics.txt");
	
	while(!mag.eof())
	{
		mag.get(magTxt);
		std::cout << magTxt;
	}

	mag.close();
}

void FSD_RPG_ENG::Files::openThiefSkills()
{
	char thfTxt;
	std::ifstream thf("./text_files/thiefSkills.txt");
	
	while(!thf.eof())
	{
		thf.get(thfTxt);
		std::cout << thfTxt;
	}

	thf.close();
}

void FSD_RPG_ENG::Files::openWarriorSkills()
{
	char warTxt;
	std::ifstream war("./text_files/warriorSkills.txt");
	
	while(!war.eof())
	{
		war.get(warTxt);
		std::cout << warTxt;
	}

	war.close();
}

/* ********* Depreciated; was for testing file(s).  Keep, just in case, for Serialization *********
int FSD_RPG_ENG::Files::checkFiles(Files *vectFiles)
{
	// ********* races.txt File Handling *********
	char raceTxt;
	std::ifstream rf("./text_files/races.txt");
	
	if(!rf)
	{
		std::cout << "Error opening file.\n";
		return -1;
	}
	else
	{
		std::cout << "Races.txt file opened successfully!\n";
		for(int i = 0; (!rf.eof()); i++)
		{
			rf.get(raceTxt);
			std::cout << raceTxt;
		}
	}

	rf.close();
	
	// ********* classes.txt File Handling *********
	
	char classTxt;
	std::ifstream cf("./text_files/classes.txt");
	
	if(!cf)
	{
		std::cout << "Error opening file.\n";
		return -1;
	}
	else
	{
		std::cout << "Classes.txt file opened successfully!\n";
		for(int i = 0; !cf.eof(); i++)
		{
			cf.get(classTxt);
			std::cout << classTxt;
		}
	}
	
	cf.close();

	// ********* changelog.txt File Handling *********
	
	char chgTxt;
	std::ifstream cl("./text_files/changelog.txt");
	
	if(!cl)
	{
		std::cout << "Error opening file.\n";
		return -1;
	}
	else
	{
		std::cout << "Classes.txt file opened successfully!\n";
		for(int i = 0; !cl.eof(); i++)
		{
			cl.get(chgTxt);
			std::cout << chgTxt;
		}
	}
	
	cl.close();
	
	// ********* mageSkills.txt File Handling *********
	
	char mageTxt;
	std::ifstream ms("./text_files/mageSkills.txt");
	
	if(!ms)
	{
		std::cout << "Error opening file.\n";
		return -1;
	}
	else
	{
		std::cout << "MageSkills.txt file opened successfully!\n";
		for(int i = 0; !ms.eof(); i++)
		{
			ms.get(mageTxt);
			std::cout << mageTxt;
		}
	}
	
	ms.close();

	FILE* mgskillsCheck = std::fopen("./text_files/mageSkills.txt", "r");
	if (!mgskillsCheck)
	{
		std::perror("MageSkills.txt file opening failed!\n");
		return EXIT_FAILURE;
	} else
		std::cout << "MageSkills.txt file opened successfully!\n";
		int msc; // note: int, not char, required to handle EOF
	
	while ((msc = std::fgetc(mgskillsCheck)) != EOF)
	{ // standard C I/O file reading loop
		std::putchar(msc);
	}

	if (std::ferror(mgskillsCheck))
		std::puts("I/O error when reading.\n");
	else if (std::feof(mgskillsCheck))
		std::puts("End of file reached successfully.\n");
		
	std::fclose(mgskillsCheck);
	
	FILE* magicsCheck = std::fopen("./text_files/magics.txt", "r");
	if (!magicsCheck)
	{
		std::perror("Magics.txt file opening failed!\n");
		return EXIT_FAILURE;
	} else
		std::cout << "Magics.txt file opened successfully!\n";
		int magc; // note: int, not char, required to handle EOF
	
	while ((magc = std::fgetc(magicsCheck)) != EOF)
	{ // standard C I/O file reading loop
		std::putchar(magc);
	}

	if (std::ferror(magicsCheck))
		std::puts("I/O error when reading.\n");
	else if (std::feof(magicsCheck))
		std::puts("End of file reached successfully.\n");
		
	std::fclose(magicsCheck);
	
	FILE* thiefsCheck = std::fopen("./text_files/thiefSkills.txt", "r");
	if (!thiefsCheck)
	{
		std::perror("ThiefSkills.txt file opening failed!\n");
		return EXIT_FAILURE;
	} else
		std::cout << "ThiefSkills.txt file opened successfully!\n";
		int tsc; // note: int, not char, required to handle EOF
	
	while ((tsc = std::fgetc(thiefsCheck)) != EOF)
	{ // standard C I/O file reading loop
		std::putchar(tsc);
	}

	if (std::ferror(thiefsCheck))
		std::puts("I/O error when reading.\n");
	else if (std::feof(thiefsCheck))
		std::puts("End of file reached successfully.\n");
		
	std::fclose(thiefsCheck);

	FILE* warsCheck = std::fopen("./text_files/warriorSkills.txt", "r");
	if (!warsCheck)
	{
		std::perror("WarriorSkills.txt file opening failed!\n");
		return EXIT_FAILURE;
	} else
		std::cout << "WarriorSkills.txt file opened successfully!\n";
		int wsc; // note: int, not char, required to handle EOF
		
	while ((wsc = std::fgetc(warsCheck)) != EOF)
	{ // standard C I/O file reading loop
		std::putchar(wsc);
	}

	if (std::ferror(warsCheck))
		std::puts("I/O error when reading.\n");
	else if (std::feof(warsCheck))
		std::puts("End of file reached successfully.\n");
		
	std::fclose(warsCheck);
	
	FILE* barbCheck = std::fopen("./text_files/barbarianSkills.txt", "r");
	if(!barbCheck)
	{
		std::perror("BarbarianSkills.txt file opening failed!\n");
		return EXIT_FAILURE;
	} else
		std::cout << "BarbarianSkills.txt file opened successfully!\n";
		
	int barbc; // note: int, not char, required to handle EOF
	
	while ((barbc = std::fgetc(barbCheck)) != EOF)
	{ // standard C I/O file reading loop
		std::putchar(barbc);
	}

	if (std::ferror(barbCheck))
		std::puts("I/O error when reading.\n");
	else if (std::feof(barbCheck))
		std::puts("End of file reached successfully.\n");
		
	std::fclose(barbCheck);
	
	return EXIT_SUCCESS;
}
*/

#endif

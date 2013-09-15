#include "WordsDatabase.h"

WordsDatabase::WordsDatabase(GAMEDIFFICULTY pGameDifficulty)
{
	switch (pGameDifficulty)
	{
	case (eMEDIUM):
		break;
	case (eHARD):
		break;
	default:
		InitWords("Assets/Easy.txt");
		InitBosses("Assets/EasyBosses.txt");
		break;
	}
}


WordsDatabase::~WordsDatabase(void)
{
}

void WordsDatabase::InitWords(std::string pFileName)
{
	std::ifstream inf(pFileName);
	std::string tmp = "";

	if(!inf)
	{
		std::cerr << "File Read Error";
		exit(EXIT_FAILURE);
	}

	while(inf)
	{
		std::getline(inf, tmp);
		mWords.insert(mWords.end(), tmp);
	}

}

void WordsDatabase::InitPhrases(std::string pFileName)
{
	std::ifstream inf(pFileName);
	std::string tmp = "";

	if(!inf)
	{
		std::cerr << "File Read Error";
		exit(EXIT_FAILURE);
	}

	while(inf)
	{
		std::getline(inf, tmp, '#');
		mPhrases.insert(mPhrases.end(), tmp);
	}
	
}

void WordsDatabase::InitBosses(std::string pFileName)
{
	std::ifstream inf(pFileName);
	std::string tmp = "";

	if(!inf)
	{
		std::cerr << "File Read Error";
		exit(EXIT_FAILURE);
	}

	while(inf)
	{
		std::getline(inf, tmp, '#');
		mBosses.insert(mBosses.end(), tmp);
	}
	
}

std::string WordsDatabase::GetWord()
{
	return mWords[RandomInt(0,mWords.size()-1)];
}

std::string WordsDatabase::GetBoss()
{
	return mBosses[RandomInt(0,mBosses.size()-1)];
}

std::string WordsDatabase::GetPhrase()
{
	return mPhrases[RandomInt(0,mPhrases.size()-1)];
}
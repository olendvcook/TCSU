#pragma once

#include <vector>
#include "Enums.h"
#include <fstream>
#include <iostream>
#include <string>

class WordsDatabase
{
private:

	std::vector<std::string> mWords;
	std::vector<std::string> mBosses;

public:

	WordsDatabase(GAMEDIFFICULTY pGameDifficulty);
	virtual ~WordsDatabase(void);
	void InitWords(std::string pFileName);
	void InitBosses(std::string pFileName);
	std::string GetWord();
	std::string GetBoss();

};

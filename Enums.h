#pragma once

#include <SFML/Graphics.hpp>

enum GAMEDIFFICULTY { eEASY, eMEDIUM, eHARD };
enum GAMESTATE { eMENU, eGAME, ePAUSED, eGAMEOVER };

float RandomFloat(float pA, float pB);
int RandomInt (int pA, int pB);
#pragma once

#include <SFML/Graphics.hpp>

enum GAMEDIFFICULTY { eEASY, eMEDIUM, eHARD };
enum GAMESTATE { eMENU, eGAME, ePAUSED, eGAMEOVER };
const int WIDTH = 640;
const int HEIGHT = 480;

float RandomFloat(float pA, float pB);
int RandomInt (int pA, int pB);
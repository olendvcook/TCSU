#include "Enums.h"

float RandomFloat(float pA, float pB)
{
    float random = ((float) rand()) / (float) RAND_MAX;
    float diff = pB - pA;
    float r = random * diff;
    return pA + r;
}

int RandomInt (int pA, int pB)
{
    return pA + (rand() % (int)(pB - pA + 1));
}
#ifndef DEFINITIONS_HPP
#define DEFINITIONS_HPP 

#include <SFML/Graphics.hpp>

#define RESOLUTION_WIDTH    1280
#define RESOLUTION_HEIGHT   720

#define LOWER_BOUND_X       -50
#define UPPER_BOUND_X       RESOLUTION_WIDTH + 50

#define LOWER_BOUND_Y       -50
#define UPPER_BOUND_Y       RESOLUTION_HEIGHT + 50

#define PLAYER_ORIGIN_X     RESOLUTION_WIDTH/2
#define PLAYER_ORIGIN_Y     RESOLUTION_HEIGHT/2

bool inMap(float x, float y);
bool inMap(sf::Vector2f& pos);

float getRandom(float min, float max);

void normalize(sf::Vector2f& vec);

void snapPosition(sf::Vector2f& pos);

void rotateVec(sf::Vector2f& vec, float angle);

void applyPhysics(bool optInc, bool optDec, float& num, 
    float increase, float naturalDecrease, float maxNum, float minNum);

#endif
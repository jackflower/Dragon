//  ___________________________________
// | Player.cpp - class implementation |
// | SCI - April 2020                  |
// |___________________________________|
//

#include "Player.h"


//Konstruktor
Player::Player() :Character{}//konstruktor klasy bazowej
{
}

//Konstruktor kopiujący
Player::Player(const Player & copy)
:
	Character{ copy }//konstruktor kopiujący klasy bazowej
{
}

//Konstruktor parametryczny
Player::Player(float position_x, float position_y)
	: Character{ position_x, position_y }//przekazujemy dane do klasy bazowej
{
}

//Destruktor
Player::~Player()
{
}

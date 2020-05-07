//  ___________________________________
// | Dragon.cpp - class implementation |
// | SCI - April 2020                  |
// |___________________________________|
//

#include "Dragon.h"


//Konstruktor
Dragon::Dragon()
:
	Character{}//konstruktor klasy bazowej
{
}

//Konstruktor kopiujący
Dragon::Dragon(const Dragon & copy)
:
	Character{ copy }//konstruktor kopiujący klasy bazowej
{
}

//Konstruktor parametryczny
Dragon::Dragon(float position_x, float position_y)
	: Character{ position_x, position_y }//przekazujemy dane do klasy bazowej
{
}

//Destruktor
Dragon::~Dragon()
{
}

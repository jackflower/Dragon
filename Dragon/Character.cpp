//  ______________________________________
// | Character.cpp - class implementation |
// | SCI - April 2020                     |
// |______________________________________|
//

#include "Character.h"
#include <math.h>

//Konstruktor domyślny
Character::Character()
:
	position_x{ 0.0f },
	position_y{ 0.0f },
	m_distanceToTarget{ 0.0f }
{
}

//Konstruktor kopiujący
Character::Character(const Character & copy)
:
	position_x{ copy.position_x },
	position_y{ copy.position_y },
	m_distanceToTarget{ copy.m_distanceToTarget }
{
}

//Konstruktor parametryczny
Character::Character(float position_x, float position_y)
:
	position_x{ position_x },
	position_y{ position_y },
	m_distanceToTarget{ 0.0f }
{
}

//Destruktor wirtualny
Character::~Character()
{
	position_x = 0.0f;
	position_y = 0.0f;
	m_distanceToTarget = 0.0f;
}

//Metoda zwraca pozycję x postaci
const float Character::get_X() const
{
	return position_x;
}

//Metoda zwraca pozycję y postaci
const float Character::get_Y() const
{
	return position_y;
}

//Metoda ustawia pozycję postaci
void Character::setPosition(float new_x, float new_y)
{
	position_x = new_x;
	position_y = new_y;
}

//Metoda zwraca dystans od postaci do celu
const float Character::getDistanceToTarget(float target_x, float target_y)
{
	//dystans do celu obliczamy na podstawie twierdzenia Pitagorasa
	//
	// bok a przyprostokątnej:
	// a = target_x - x;
	//
	// bok b przyprostokątnej:
	// b = target_y - y;
	//
	//bok c - przeciwprostokątna

	//         _________________
	//     \  /
	// c =  \/ (a * a) + (b * b)

	m_distanceToTarget = sqrtf((target_x - position_x) * (target_x - position_x) + (target_y - position_y) * (target_y - position_x));

	return m_distanceToTarget;
}

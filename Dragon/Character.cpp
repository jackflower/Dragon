//  ______________________________________
// | Character.cpp - class implementation |
// | SCI - April 2020                     |
// |______________________________________|
//

#include "Character.h"
#include <math.h>

//Konstruktor domyślny
Character::Character() : x{ 0.0f }, y{ 0.0 }
{
}

//Destruktor wirtualny
Character::~Character()
{
	x = 0.0f;
	y = 0.0f;
	m_distanceToTarget = 0.0f;
}

//Metoda ustawia pozycję postaci
void Character::setPosition(float new_x, float new_y)
{
	x = new_x;
	y = new_y;
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

	m_distanceToTarget = sqrtf((target_x - x) * (target_x - x) + (target_y - y) * (target_y - y));

	return m_distanceToTarget;
}

//  ___________________________________
// | Player.h - class definition       |
// | SCI - April 2020                  |
// |___________________________________|
//


#include "Character.h"

///
///Klasa reprezentuje gracza - dziedziczy po klasie Character
///
class Player : public Character
{
public:

	///
	///Konstruktor
	///
	Player();

	///
	///Konstruktor kopiujący
	///
	///@param copy - stała referencja na obiekt klasy Player
	///
	Player(const Player & copy);

	///
	///Konstruktor parametryczny
	///
	///@param position_x - wartość współrzędnej x
	///
	///@param position_y - wartość współrzędnej y
	///
	Player(float position_x, float position_y);

	///
	///Destruktor
	///
	~Player();

protected:
private:
	
};

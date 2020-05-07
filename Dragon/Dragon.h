//  ___________________________________
// | Dragon.h - class definition       |
// | SCI - April 2020                  |
// |___________________________________|
//


#include "Character.h"

///
///Klasa reprezentuje smoka - dziedziczy po klasie Character
///
class Dragon : public Character
{
public:

	///
	///Konstruktor
	///
	Dragon();

	///
	///Konstruktor kopiujący
	///
	///@param copy - stała referencja na obiekt klasy Dragon
	///
	Dragon(const Dragon & copy);

	///
	///Konstruktor parametryczny
	///
	///@param position_x - wartość współrzędnej x
	///
	///@param position_y - wartość współrzędnej y
	///
	Dragon(float position_x, float position_y);

	///
	///Destruktor
	///
	~Dragon();

protected:
private:

};

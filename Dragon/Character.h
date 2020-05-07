//  ______________________________________
// | Character.h - class definition       |
// | SCI - April 2020                     |
// |______________________________________|
//


#ifndef H_CHARACTER_SCI
#define H_CHARACTER_SCI

#define x get_X()
#define y get_Y()

///
///Klasa reprezentuje postać
///
class Character
{
public:

	///
	///Konstruktor domyślny
	///
	Character();

	///
	///Konstruktor kopiujący
	///
	///@param copy - stała referencja na obiekt klasy Character
	///
	Character(const Character & copy);

	///
	///Konstruktor parametryczny
	///
	///@param position_x - wartość współrzędnej x
	///
	///@param position_y - wartość współrzędnej y
	///
	Character(float position_x, float position_y);

	///
	///Destruktor wirtualny
	///
	virtual ~Character();

	///
	///Metoda zwraca pozycję x postaci
	///
	const float get_X() const;

	///
	///Metoda zwraca pozycję y postaci
	///
	const float get_Y() const;

	///
	///Metoda ustawia pozycję postaci
	///
	///@param new_x - pozycja dla osi x
	///
	///@param new_y - pozycja dla osi y
	///
	void setPosition(float new_x, float new_y);

	///
	///Metoda zwraca dystans od postaci do celu
	///
	///@param target_x - pozycja celu dla osi x
	///
	///@param target_y - pozycja celu dla osi y
	///
	const float getDistanceToTarget(float target_x, float target_y);

protected:

	float position_x;//pozycja postaci - współrzędna osi x
	float position_y;//pozycja postaci - współrzędna osi y

private:

	float m_distanceToTarget;

};
#endif//H_CHARACTER_SCI

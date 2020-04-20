//  ______________________________________
// | Character.h - class definition       |
// | SCI - April 2020                     |
// |______________________________________|
//


#ifndef H_CHARACTER_SCI
#define H_CHARACTER_SCI

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
	///Destruktor wirtualny
	///
	virtual ~Character();

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

	float x;//pozycja postaci - współrzędna osi x
	float y;//pozycja postaci - współrzędna osi y

protected:

private:

	float m_distanceToTarget;

};
#endif//H_CHARACTER_SCI

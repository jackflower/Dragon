#include "Player.h"
#include "Dragon.h"
#include <vector>

int main()
{
	Player player;//gracz
	player.setPosition(100, 100);//ustawiamy pozycję gracza

	Dragon dragon;//smok
	dragon.setPosition(200, 200);//ustawiamy pozycję smoka


	//obliczamy dystans do smoka
	float distance_player_to_dragon = player.getDistanceToTarget(dragon.x, dragon.y);
	//wynik w kodzie:	141.421356
	

	//kopiujący...
	//Dragon smoczyca = dragon;

	// s o l u t i o n

	//std::vector<Dragon *> smoczki;
	//Dragon * ptr_dragon = nullptr;
	//ptr_dragon = new Dragon(11,11);
	//smoczki.push_back(ptr_dragon);
	//ptr_dragon = new Dragon(22, 22);
	//smoczki.push_back(ptr_dragon);
	//ptr_dragon = new Dragon(33, 33);
	//smoczki.push_back(ptr_dragon);
	//Dragon * ptr_smoczyca = new Dragon(44, 44);
	//ptr_smoczyca = ptr_dragon;
	//smoczki.push_back(ptr_smoczyca);
	//std::vector<Dragon *>::iterator it;

	//for (it = smoczki.begin(); it != smoczki.end(); it++)
	//{
	//	if (*it != nullptr)
	//		delete *it;
	//}
	//smoczki.clear();



	int jeden = 10;
	int dwa = 20;
	int trzy = 30;

	int & one = jeden;
	int & two = dwa;
	int & three = trzy;

	//std::vector<int> box;
	//box.push_back(jeden);
	//box.push_back(dwa);
	//box.push_back(trzy);
	//box.at(0) = 100;
	//dwa = 200;

	//std::vector<int*> referencje;
	//referencje.push_back(&one);
	//referencje.push_back(&two);
	//referencje.push_back(&three);
	////referencje.at(0) = &jeden;

	int test = 123;
	//referencje.at(0) = &test;

	int w = one;

	//
	int warta = 0;

	return 0;
}
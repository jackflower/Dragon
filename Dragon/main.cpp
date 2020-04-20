#include "Player.h"
#include "Dragon.h"

int main()
{
	Player player;//gracz
	player.setPosition(100, 100);//ustawiamy pozycję gracza

	Dragon dragon;//smok
	dragon.setPosition(200, 200);//ustawiamy pozycję smoka


	//obliczamy dystans do smoka
	float distance_player_to_dragon = player.getDistanceToTarget(dragon.x, dragon.y);
	//wynik w kodzie:	141.421356


	return 0;
}
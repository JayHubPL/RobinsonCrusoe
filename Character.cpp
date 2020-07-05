#include "Character.h"

enum NAME {
	Cook,
	Soldier,
	Carpenter,
	Explorer
};

Character::Character(int _type) {
	switch (_type) {
	case Cook:
		name = "Cook";

		break;
	case Soldier:
		name = "Soldier";
		break;
	case Carpenter:
		name = "Carpenter";
		break;
	case Explorer:
		name = "Explorer";
		break;
	}
}
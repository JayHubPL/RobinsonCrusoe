#pragma once
#include "CharacterAbility.h"
#include <string>
#include <vector>

class Character {
	std::string name;
	std::vector<CharacterAbility> vAbilities;
	Character(int _type);
};
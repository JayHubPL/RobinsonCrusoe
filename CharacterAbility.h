#pragma once
#include <vector>

class CharacterAbility {
	bool inactive;
	const int determinationCost;
	virtual bool checkAbilityRequirements() = 0;
	virtual void abilityEffect() = 0;
};
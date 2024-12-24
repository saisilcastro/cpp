#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.h"

class HumanB {
	public:
		HumanB(std::string name);
		void	setWeapon(Weapon &weapon);
		void	attack(void) const;
		~HumanB();
	private:
		std::string _name;
		Weapon *_weapon;
};

#endif // HUMANB_H
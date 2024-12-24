#include <cstdlib>
#include "ScravTrap.h"

void fight_till_die(ScravTrap & fucker, ScravTrap & sucker);

int	main(void) {
	ScravTrap scrav1("fucker");
	ScravTrap scrav2(scrav1);
	scrav2.setName("sucker");
	fight_till_die(scrav1, scrav2);
	return (0);
}

void fight_till_die(ScravTrap & fucker, ScravTrap & sucker) {
	bool damaged;
	srand(time(NULL));
	while (fucker.getHitPoint() && sucker.getHitPoint()) {
		fucker.attack(sucker.getName());
		damaged = rand() % 2;
		if (damaged) {
			sucker.takeDamage(fucker.getAttackDamage());
			sucker.beRepaired(std::rand() % 10);
		}
		else
			sucker.guardGate();
		sucker.attack(fucker.getName());
		damaged = rand() % 2;
		if (damaged) {
			fucker.takeDamage(sucker.getAttackDamage());
			fucker.beRepaired(std::rand() % 10);
		}
		else
			fucker.guardGate();
	}
}
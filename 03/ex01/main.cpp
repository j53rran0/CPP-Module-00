/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 13:53:20 by marvin            #+#    #+#             */
/*   Updated: 2021/02/12 13:53:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int		main(){

	FragTrap	bot("CL4P-TP");
	ScavTrap	bot2("bot's son");

	bot.rangedAttack("Your mom");
	bot.meleeAttack("Your sister");
	bot.takeDamage(50);
	bot.beRepaired(10);
	bot.show();

	bot2.rangedAttack("ME");
	bot2.meleeAttack("MY SON");
	bot2.takeDamage(50);
	bot2.beRepaired(10);
	for (int i = 0; i < 3; i++)
		bot2.challengeNewcomer();
	bot2.show();
}

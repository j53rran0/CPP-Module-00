/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 17:00:59 by marvin            #+#    #+#             */
/*   Updated: 2021/02/06 17:00:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

int main(){

	std::cout << "======CREATING OBJECTS=======" << std::endl;
	Pony stack = ponyOnTheStack();
	Pony *heap = ponyOnTheHeap();
	std::cout << "======FINISHED OBJECTS=======" << std::endl;

	std::cout << "======stack:" << std::endl;
	stack.show();

	std::cout << "======heap:" << std::endl;
	heap->show();

	std::cout << "free heap" << std::endl;
	delete heap;
	return 0;
}

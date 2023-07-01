/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 12:50:36 by jgo               #+#    #+#             */
/*   Updated: 2023/07/01 22:07:28 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

static inline void increaseBureaucrat(Bureaucrat& obj) {
	try {
		obj.incrGrade();
	} catch (const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}

static inline void decreaseBureaucrat(Bureaucrat& obj) {
	try {
		obj.decrGrade();
	} catch (const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}

int main(void) {
	Bureaucrat jgo("jgo", 1);
	Bureaucrat sanghwal("sanghwal", 150);

	return (0);
}

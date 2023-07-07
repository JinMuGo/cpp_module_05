/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 12:50:36 by jgo               #+#    #+#             */
/*   Updated: 2023/07/07 17:17:03 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

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
	Intern intern;
	Form* tree;
	Form* robo;
	Form* pres;

	tree = intern.makeForm("shrubberry creation", "shru_form");
	robo = intern.makeForm("robotomy request", "robo_form");
	pres = intern.makeForm("presidential pardon", "pres_form");

	try {
		intern.makeForm("jgo inner circle", "jgo_form");
	} catch (const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	increaseBureaucrat(jgo);
	decreaseBureaucrat(sanghwal);

	jgo.executeForm(*tree);
	jgo.signForm(*tree);
	jgo.executeForm(*tree);

	sanghwal.signForm(*robo);
	jgo.signForm(*robo);
	sanghwal.executeForm(*robo);
	jgo.executeForm(*robo);

	jgo.signForm(*pres);
	jgo.executeForm(*pres);

	std::cout << *tree;
	std::cout << *robo;
	std::cout << *pres;

	delete tree;
	delete robo;
	delete pres;

	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 12:50:36 by jgo               #+#    #+#             */
/*   Updated: 2023/07/02 21:34:01 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

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
	ShrubberyCreationForm tree("shru_form");
	RobotomyRequestForm	robo("robo_form");
	PresidentialPardonForm pres("pres_form");

	
	increaseBureaucrat(jgo);
	decreaseBureaucrat(sanghwal);

	jgo.executeForm(tree);
	jgo.signForm(tree);
	jgo.executeForm(tree);

	sanghwal.signForm(robo);
	jgo.signForm(robo);
	sanghwal.executeForm(robo);
	jgo.executeForm(robo);

	jgo.signForm(pres);
	jgo.executeForm(pres);

	std::cout << tree;
	std::cout << robo;
	std::cout << pres;

	return (0);
}

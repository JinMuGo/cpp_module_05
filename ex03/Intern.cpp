/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 15:54:36 by jgo               #+#    #+#             */
/*   Updated: 2023/07/07 17:16:45 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
	std::cout << INTERN_DFLT_CTOR << std::endl;
}
Intern::Intern(const Intern& obj) {
	std::cout << INTERN_CPY_CTOR << std::endl;
	*this = obj;
}
Intern::~Intern() {
	std::cout << INTERN_DTOR << std::endl;
}
Intern& Intern::operator=(const Intern& obj) {
	std::cout << INTERN_CPY_ASGMT_OP_CALL << std::endl;
	if (this != &obj)
		return *this;
	return *this;
}

const char* Intern::NoMatchFormException::what() const throw() {
	return this->_prompt.c_str();
}

Intern::NoMatchFormException::NoMatchFormException(const std::string form)
	: _prompt("No Matching Form with the name: " + form) {
	std::cout << NMF_CTOR << std::endl;
}

Intern::NoMatchFormException::~NoMatchFormException() throw() {
	std::cout << NMF_DTOR << std::endl;
}

Form* Intern::makeForm(const std::string name, const std::string target) {
	const std::string arr[3] = {"robotomy request", "presidential pardon", "shrubberry creation"};
	Form* form;
	int i = -1;

	while (++i < 3) {
		if (name.compare(arr[i]) == 0)
			break;
	}

	switch (i) {
		case 0:
			form = new RobotomyRequestForm(target);
			break;
		case 1:
			form = new PresidentialPardonForm(target);
			break;

		case 2:
			form = new ShrubberyCreationForm(target);
			break;

		default:
			throw Intern::NoMatchFormException(target);
			break;
	}
	std::cout << "Intern creates " << target << std::endl;
	return (form);
}
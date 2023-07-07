/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 20:31:44 by jgo               #+#    #+#             */
/*   Updated: 2023/07/02 21:09:36 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

void PresidentialPardonForm::execute(Bureaucrat const& executor) const {
	std::cout << PPF_CPY_ASGMT_OP_CALL << std::endl;
	this->checkExec(executor);
	std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm() : Form("RRF", 25, 5) {
	std::cout << PPF_DFLT_CTOR << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string name) : Form(name, 25, 5) {
	std::cout << PPF_CTOR << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj) : Form(obj) {
	std::cout << PPF_CPY_CTOR << std::endl;
}
PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << PPF_DTOR << std::endl;
}
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj) {
	std::cout << PPF_CPY_ASGMT_OP_CALL << std::endl;
	return (dynamic_cast<PresidentialPardonForm&>(Form::operator=(obj)));
}

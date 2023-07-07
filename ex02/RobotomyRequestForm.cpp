/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 20:31:44 by jgo               #+#    #+#             */
/*   Updated: 2023/07/07 17:17:37 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

// https://modoocode.com/304
void RobotomyRequestForm::execute(Bureaucrat const& executor) const {
	std::cout << RRF_CPY_ASGMT_OP_CALL << std::endl;
	this->checkExec(executor);
	std::srand(std::time(0));
	int rd_val = std::rand();
	double normal_val = static_cast<double>(rd_val) / RAND_MAX;

	std::cout << "TATATATATATATATATATA!!! " << this->getName();
	if (normal_val < 0.5) {
		std::cout << " are succesfully robotomized! yay!" << std::endl;
	} else {
		std::cout << " are failed robotomized :( this condition might be better..." << std::endl;
	}
}

RobotomyRequestForm::RobotomyRequestForm() : Form("RRF", 72, 45) {
	std::cout << RRF_DFLT_CTOR << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string name) : Form(name, 72, 45) {
	std::cout << RRF_CTOR << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj) : Form(obj) {
	std::cout << RRF_CPY_CTOR << std::endl;
}
RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << RRF_DTOR << std::endl;
}
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj) {
	std::cout << RRF_CPY_ASGMT_OP_CALL << std::endl;
	return (dynamic_cast<RobotomyRequestForm&>(Form::operator=(obj)));
}

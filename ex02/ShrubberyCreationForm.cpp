/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 19:46:56 by jgo               #+#    #+#             */
/*   Updated: 2023/07/01 19:53:33 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("SCF", 145, 137) {
	std::cout << SCF_DFLT_CTOR << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string name) : Form(name, 145, 137) {
	std::cout << SCF_CTOR << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj) {
	std::cout << SCF_CPY_CTOR << std::endl;
}
ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << SCF_DTOR << std::endl;
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj) {
	std::cout << SCF_CPY_ASGMT_OP_CALL << std::endl;
	std::cout << "ShrubberyCreationForm " << obj.getName() << " couldn't assign oprator form"
			  << std::endl;
	return (*this);
}

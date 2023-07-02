/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 19:46:56 by jgo               #+#    #+#             */
/*   Updated: 2023/07/02 20:43:30 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const {
	std::cout << SCF_MEMBER_FUNC_CALL << std::endl;
	this->checkExec(executor);
	std::ofstream outFile((this->getName() + "_shrubbery").c_str(), std::ofstream::trunc | std::ofstream::out);
	if (outFile.fail())
		throw ShrubberyCreationForm::FileOpenFail();
	std::string tree =
		"                     .o00o\n"
		"                   o000000oo\n"
		"                  00000000000o\n"
		"                 00000000000000\n"
		"              oooooo  00000000  o88o\n"
		"           ooOOOOOOOoo  ```''  888888\n"
		"         OOOOOOOOOOOO'.qQQQQq. `8888'\n"
		"        oOOOOOOOOOO'.QQQQQQQQQQ/.88'\n"
		"        OOOOOOOOOO'.QQQQQQQQQQ/ /q\n"
		"         OOOOOOOOO QQQQQQQQQQ/ /QQ\n"
		"           OOOOOOOOO `QQQQQQ/ /QQ'\n"
		"             OO:F_P:O `QQQ/  /Q'\n"
		"                \\\\. \\ |  // |\n"
		"                d\\ \\\\\\|_////\n"
		"                qP| \\\\ _' `|Ob\n"
		"                   \\  / \\  \\Op\n"
		"                   |  | O| |\n"
		"           _       /\\. \\_/ /\\\n"
		"            `---__/|_\\\\   //|  __\n"
		"                  `-'  `-'`-'-'\n";
	outFile << tree;
	outFile.close();
}

ShrubberyCreationForm::ShrubberyCreationForm() : Form("SCF", 145, 137) {
	std::cout << SCF_DFLT_CTOR << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string name) : Form(name, 145, 137) {
	std::cout << SCF_CTOR << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj) : Form(obj) {
	std::cout << SCF_CPY_CTOR << std::endl;
}
ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << SCF_DTOR << std::endl;
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj) {
	std::cout << SCF_CPY_ASGMT_OP_CALL << std::endl;
	return (dynamic_cast<ShrubberyCreationForm&>(Form::operator=(obj)));
}

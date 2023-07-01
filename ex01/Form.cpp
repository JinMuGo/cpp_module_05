/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:47:58 by jgo               #+#    #+#             */
/*   Updated: 2023/07/02 08:00:10 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void)
	: name_("default"),
	  sign_grade_(LOW_GRADE),
	  execute_grade_(LOW_GRADE),
	  signed_(false) {
	std::cout << FORM_DFLT_CTOR << std::endl;
}

Form::Form(const std::string name, const int sign_grade,
		   const int execute_grade)
	: name_(name),
	  sign_grade_(sign_grade),
	  execute_grade_(execute_grade),
	  signed_(false) {
	std::cout << FORM_CTOR << std::endl;
	this->checkGrade(sign_grade);
	this->checkGrade(execute_grade);
}

Form::Form(const Form& obj)
	: name_(obj.getName()),
	  sign_grade_(obj.getSignGrade()),
	  execute_grade_(obj.getExecuteGrade()),
	  signed_(obj.getSigned()) {
	std::cout << FORM_CPY_CTOR << std::endl;
}

Form::~Form(void) {
	std::cout << FORM_DTOR << std::endl;
}

Form& Form::operator=(const Form& obj) {
	std::cout << FORM_CPY_ASGMT_OP_CALL << std::endl;
	std::cout << "Form " << obj.getName() << " couldn't assign oprator form"
			  << std::endl;
	return (*this);
}

std::string Form::getName(void) const {
	return (this->name_);
}
bool Form::getSigned(void) const {
	return (this->signed_);
}
int Form::getSignGrade(void) const {
	return (this->sign_grade_);
}
int Form::getExecuteGrade(void) const {
	return (this->execute_grade_);
}

void Form::checkGrade(const int grade) const {
	if (grade < HIGH_GRADE)
		throw Form::GradeTooHighException();
	if (grade > LOW_GRADE)
		throw Form::GradeTooLowException();
}

void Form::beSigned(Bureaucrat& obj) {
	if (this->getSigned())
		throw Form::AlreadySigned();
	if (this->getSignGrade() < obj.getGrade())
		throw Form::GradeTooLowException();
	this->signed_ = true;
}

const char* Form::GradeTooHighException::what(void) const throw() {
	return "this Form Grade is Too High. range 1 ~ 150";
}

const char* Form::GradeTooLowException::what(void) const throw() {
	return "this Form Grade is Too Low. range 1 ~ 150";
}

const char* Form::AlreadySigned::what(void) const throw() {
	return "this Form Already Signed.";
}

std::ostream& operator<<(std::ostream& os, const Form& obj) {
	os << std::setw(17) << std::left << " --------- form --------"
	   << " \n"
	   << std::setw(17) << " Name: " << std::left << obj.getName() << " \n"
	   << std::setw(17) << " Sign_grade: " << std::left << obj.getSignGrade()
	   << " \n"
	   << std::setw(17) << " Execute_grade: " << std::left
	   << obj.getExecuteGrade() << " \n"
	   << std::setw(17) << " Signed: " << std::left
	   << (obj.getSigned() ? "yes" : "no") << " \n\n";

	return os;
}

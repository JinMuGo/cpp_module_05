/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:47:58 by jgo               #+#    #+#             */
/*   Updated: 2023/07/01 19:40:23 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

Form::Form()
	: name_("default"),
	  sign_grade_(LOW_GRADE),
	  execute_grade_(LOW_GRADE),
	  signed_(false) {
	std::cout << FORM_DFLT_CTOR << std::endl;
}

Form::Form(const std::string name, const std::int32_t sign_grade,
		   const std::int32_t execute_grade)
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

Form::~Form() {
	std::cout << FORM_DTOR << std::endl;
}

Form& Form::operator=(const Form& obj) {
	std::cout << FORM_CPY_ASGMT_OP_CALL << std::endl;
	std::cout << "Form " << obj.getName() << " couldn't assign oprator form"
			  << std::endl;
	return (*this);
}

std::string Form::getName() const {
	return (this->name_);
}
bool Form::getSigned() const {
	return (this->signed_);
}
std::int32_t Form::getSignGrade() const {
	return (this->sign_grade_);
}
std::int32_t Form::getExecuteGrade() const {
	return (this->execute_grade_);
}

void Form::checkGrade(const std::int32_t grade) const {
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

const char* Form::GradeTooHighException::what() const throw() {
	return "this Form Grade is Too High. range 1 ~ 150";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "this Form Grade is Too Low. range 1 ~ 150";
}

const char* Form::AlreadySigned::what() const throw() {
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 07:48:07 by jgo               #+#    #+#             */
/*   Updated: 2023/07/02 08:06:57 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(void) {
	std::cout << BURE_DFLT_CTOR << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj) : name_(obj.getName()), grade_(obj.getGrade()) {
	std::cout << BURE_CPY_CTOR << std::endl;
	this->checkGrade(this->grade_);
}

Bureaucrat::~Bureaucrat(void) {
	std::cout << BURE_DTOR << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, const int grade) : name_(name), grade_(grade) {
	std::cout << BURE_CTR << std::endl;
	this->checkGrade(grade);
}

void Bureaucrat::checkGrade(const int grade) const {
	if (grade < HIGH_GRADE)
		throw Bureaucrat::GradeTooHighException();
	if (grade > LOW_GRADE)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj) {
	std::cout << BURE_CPY_ASGMT_OP_CALL << std::endl;

	if (this != &obj) {
		*const_cast<std::string*>(&this->name_) = obj.getName();
		this->grade_ = obj.getGrade();
	}
	return *this;
}

void Bureaucrat::incrGrade(void) {
	this->checkGrade(this->grade_ - 1);
	--this->grade_;
}

void Bureaucrat::decrGrade(void) {
	this->checkGrade(this->grade_ + 1);
	++this->grade_;
}

std::string const& Bureaucrat::getName(void) const {
	return this->name_;
}
int const& Bureaucrat::getGrade(void) const {
	return this->grade_;
}

const char* Bureaucrat::GradeTooHighException::what(void) const throw() {
	return "Grade is Too High";
}

const char* Bureaucrat::GradeTooLowException::what(void) const throw() {
	return "Grade is Too Low";
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj) {
	return os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << "." << std::endl;
}

void Bureaucrat::signForm(Form& obj) {
	try {
		obj.beSigned(*this);
		std::cout << GREEN << this->getName() << RESET " signed " GREEN << obj.getName()
				  << RESET "\n";
	} catch (const std::exception& e) {
		std::cerr << RED << this->getName()  << RESET " couldn't sign " RED << obj.getName()
				  << RESET " because " << e.what() << '\n';
	}
}

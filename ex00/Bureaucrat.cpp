/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 07:48:07 by jgo               #+#    #+#             */
/*   Updated: 2023/07/01 22:06:52 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) {
	std::cout << BURE_DFLT_CTOR << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj): name_(obj.getName()) {
	std::cout << BURE_CPY_CTOR << std::endl;
	*this = obj;
}

Bureaucrat::~Bureaucrat(void) {
	std::cout << BURE_DTOR << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade)
	: name_(name) {
	std::cout << BURE_CTR << std::endl;
	this->checkGrade(grade);
	this->grade_ = grade;
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
		this->grade_ = obj.getGrade();
	}
	return *this;
}

void Bureaucrat::incrGrade() {
	this->checkGrade(this->grade_ - 1);
	--this->grade_;
}

void Bureaucrat::decrGrade() {
	this->checkGrade(this->grade_ + 1);
	++this->grade_;
}

std::string const& Bureaucrat::getName() const {
	return this->name_;
}
int const& Bureaucrat::getGrade() const {
	return this->grade_;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade is Too High";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade is Too Low";
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj) {
	return os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << "."
			  << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 07:48:07 by jgo               #+#    #+#             */
/*   Updated: 2023/07/01 08:57:21 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) {
	std::cout << BURE_DFLT_CTOR << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj) {}
Bureaucrat::~Bureaucrat(void) {}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj) {}

const std::string& Bureaucrat::getName() const {
	return (this->name_);
}
const std::uint8_t& Bureaucrat::getGrade() const {
	return (this->grade_);
}

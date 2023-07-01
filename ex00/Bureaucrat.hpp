/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 07:44:40 by jgo               #+#    #+#             */
/*   Updated: 2023/07/02 07:53:27 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "Bureaucrat.h"

class Bureaucrat {
   private:
	const std::string name_;
	int grade_;

   public:
	Bureaucrat(void);
	Bureaucrat(const Bureaucrat& obj);
	Bureaucrat(const std::string name, int grade);
	~Bureaucrat(void);
	Bureaucrat& operator=(const Bureaucrat& obj);
	std::string const& getName(void) const;
	int const& getGrade(void) const;
	void incrGrade(void);
	void decrGrade(void);
	void checkGrade(const int grade) const;

	class GradeTooHighException : public std::exception {
	   public:
		virtual const char* what(void) const throw();
	};

	class GradeTooLowException : public std::exception {
	   public:
		virtual const char* what(void) const throw();
	};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);

#endif

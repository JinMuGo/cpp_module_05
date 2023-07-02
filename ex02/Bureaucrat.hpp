/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 07:44:40 by jgo               #+#    #+#             */
/*   Updated: 2023/07/02 20:39:03 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "Bureaucrat.h"

class Form;

class Bureaucrat {
   private:
	const std::string name_;
	int grade_;

   public:
	Bureaucrat(void);
	Bureaucrat(const Bureaucrat& obj);
	Bureaucrat(const std::string name, int grade);
	~Bureaucrat();
	Bureaucrat& operator=(const Bureaucrat& obj);
	std::string const& getName() const;
	int const& getGrade() const;
	void	incrGrade();
	void	decrGrade();
	void	checkGrade(const int grade) const;
	void	signForm(Form& obj);

	class GradeTooHighException : public std::exception {
	   public:
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
	   public:
		virtual const char* what() const throw();
	};

};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);

#endif

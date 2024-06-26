/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:48:14 by jgo               #+#    #+#             */
/*   Updated: 2023/07/02 08:00:03 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Form.h"

class Bureaucrat;

class Form {
   private:
	const std::string name_;
	const int sign_grade_;
	const int execute_grade_;
	bool signed_;

   public:
	Form(void);
	Form(const Form& obj);
	Form(const std::string name, const int sign_grade, const int execute_grade);
	~Form(void);
	Form& operator=(const Form& obj);
	std::string getName(void) const;
	bool getSigned(void) const;
	int getSignGrade(void) const;
	int getExecuteGrade(void) const;
	void beSigned(Bureaucrat& obj);
	void checkGrade(const int grade) const;

	class GradeTooHighException : public std::exception {
	   public:
		virtual const char* what(void) const throw();
	};

	class GradeTooLowException : public std::exception {
	   public:
		virtual const char* what(void) const throw();
	};

	class AlreadySigned : public std::exception {
	   public:
		virtual const char* what(void) const throw();
	};
};

std::ostream& operator<<(std::ostream& os, const Form& obj);

#endif

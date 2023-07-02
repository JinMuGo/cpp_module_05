/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:48:14 by jgo               #+#    #+#             */
/*   Updated: 2023/07/02 20:36:59 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "AForm.h"

class Bureaucrat;

class Form {
   private:
	const std::string name_;
	const int sign_grade_;
	const int execute_grade_;
	bool signed_;

   public:
	Form();
	Form(const Form& obj);
	Form(const std::string name, const int sign_grade, const int execute_grade);
	virtual ~Form();
	Form& operator=(const Form& obj);
	std::string getName() const;
	bool getSigned() const;
	int getSignGrade() const;
	int getExecuteGrade() const;
	void beSigned(Bureaucrat& obj);
	void checkGrade(const int grade) const;
	void checkExec(Bureaucrat const& executor) const;
	virtual void execute(Bureaucrat const& executor) const = 0;

	class GradeTooHighException : public std::exception {
	   public:
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
	   public:
		virtual const char* what() const throw();
	};

	class AlreadySigned : public std::exception {
	   public:
		virtual const char* what() const throw();
	};

	class FileOpenFail : public std::exception {
	   public:
		virtual const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream& os, const Form& obj);

#endif

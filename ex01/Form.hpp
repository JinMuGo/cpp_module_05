/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:48:14 by jgo               #+#    #+#             */
/*   Updated: 2023/07/01 16:11:29 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Form.h"

class Bureaucrat;

class Form {
   private:
	const std::string name_;
	const std::int32_t sign_grade_;
	const std::int32_t execute_grade_;
	bool signed_;

   public:
	Form();
	Form(const Form& obj);
	Form(const std::string name, const std::int32_t sign_grade, const std::int32_t execute_grade);
	~Form();
	Form& operator=(const Form& obj);
	std::string getName() const;
	bool getSigned() const;
	std::int32_t getSignGrade() const;
	std::int32_t getExecuteGrade() const;
	void beSigned(Bureaucrat& obj);
	void checkGrade(const std::int32_t grade) const;


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


};

std::ostream& operator<<(std::ostream& os, const Form& obj);

#endif

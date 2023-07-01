/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 07:44:40 by jgo               #+#    #+#             */
/*   Updated: 2023/07/01 08:53:59 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "Bureaucrat.h"

class Bureaucrat {
   private:
	const std::string name_;
	std::int32_t grade_;

   public:
	Bureaucrat(void);
	Bureaucrat(const Bureaucrat& obj);
	~Bureaucrat();
	Bureaucrat& operator=(const Bureaucrat& obj);
	const std::string& getName() const;
	const std::uint8_t& getGrade() const;

	class GradeTooHighException : public std::exception {
	   public:
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
	   public:
		virtual const char* what() const throw();
	};
};

#endif

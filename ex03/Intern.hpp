/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 15:54:51 by jgo               #+#    #+#             */
/*   Updated: 2023/07/07 17:16:33 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Intern.h"

class Intern {
   public:
	Intern(void);
	Intern(const Intern& obj);
	~Intern(void);
	Intern& operator=(const Intern& obj);
	Form* makeForm(const std::string name, const std::string target);

	class NoMatchFormException : public std::exception {
	   private:
		std::string _prompt;

	   public:
		NoMatchFormException(const std::string form);
		virtual const char* what() const throw();
		virtual ~NoMatchFormException() throw();
	};
};

#endif
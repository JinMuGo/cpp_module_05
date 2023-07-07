/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 19:45:24 by jgo               #+#    #+#             */
/*   Updated: 2023/07/02 17:06:47 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "PresidentialPardonForm.h"

class PresidentialPardonForm : public Form {
   private:
   public:
	PresidentialPardonForm();
	PresidentialPardonForm(const std::string name);
	PresidentialPardonForm(const PresidentialPardonForm& obj);
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm& operator=(const PresidentialPardonForm& obj);
	virtual void execute(Bureaucrat const& executor) const;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 19:45:24 by jgo               #+#    #+#             */
/*   Updated: 2023/07/02 17:06:47 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "RobotomyRequestForm.h"

class RobotomyRequestForm : public Form {
   private:
   public:
	RobotomyRequestForm();
	RobotomyRequestForm(const std::string name);
	RobotomyRequestForm(const RobotomyRequestForm& obj);
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm& operator=(const RobotomyRequestForm& obj);
	virtual void execute(Bureaucrat const& executor) const;
};

#endif

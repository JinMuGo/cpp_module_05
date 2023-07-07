/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 15:54:38 by jgo               #+#    #+#             */
/*   Updated: 2023/07/07 17:18:24 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
#define INTERN_H

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#define INTERN_DFLT_CTOR GREEN "- intern: Default constructor called" RESET
#define INTERN_CTOR DARK_GREEN "- intern: constructor called" RESET
#define INTERN_CTR LIGHT_CYAN "- intern: constructor called" RESET
#define INTERN_CPY_CTOR CYAN "- intern: Copy constructor called" RESET
#define INTERN_CPY_ASGMT_OP_CALL DARK_CYAN "- intern: Copy assignment operator called" RESET
#define INTERN_DTOR ORANGE "- intern: Destructor called" RESET
#define INTERN_MEMBER_FUNC_CALL "- intern: member function called"


#define NMF_CTOR DARK_GREEN "- NoMatchFormException: constructor called" RESET
#define NMF_DTOR ORANGE "- NoMatchFormException: Destructor called" RESET

#endif
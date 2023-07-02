/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 19:44:33 by jgo               #+#    #+#             */
/*   Updated: 2023/07/02 21:08:39 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include <random>
#include "AForm.hpp"
#include "color.h"

#define RRF_DFLT_CTOR GREEN "- RobotomyRequestForm: Default constructor called" RESET
#define RRF_CTOR DARK_GREEN "- RobotomyRequestForm: constructor called" RESET
#define RRF_CTR LIGHT_CYAN "- RobotomyRequestForm: constructor called" RESET
#define RRF_CPY_CTOR CYAN "- RobotomyRequestForm: Copy constructor called" RESET
#define RRF_CPY_ASGMT_OP_CALL DARK_CYAN "- RobotomyRequestForm: Copy assignment operator called" RESET
#define RRF_DTOR ORANGE "- RobotomyRequestForm: Destructor called" RESET
#define RRF_MEMBER_FUNC_CALL MAGENTA "- RobotomyRequestForm: member function called" RESET

#endif

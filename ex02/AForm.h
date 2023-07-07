/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:48:03 by jgo               #+#    #+#             */
/*   Updated: 2023/07/01 17:15:32 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_H
#define AFORM_H

#include <fstream>
#include <iomanip>
#include <iostream>
#include "color.h"

#define AFORM_DFLT_CTOR GREEN "- AForm: Default constructor called" RESET
#define AFORM_CTOR DARK_GREEN "- AForm: constructor called" RESET
#define AFORM_CTR LIGHT_CYAN "- AForm: constructor called" RESET
#define AFORM_CPY_CTOR CYAN "- AForm: Copy constructor called" RESET
#define AFORM_CPY_ASGMT_OP_CALL DARK_CYAN "- AForm: Copy assignment operator called" RESET
#define AFORM_DTOR ORANGE "- AForm: Destructor called" RESET
#define AFORM_MEMBER_FUNC_CALL "- AForm: member function called"

#endif

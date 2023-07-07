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

#ifndef FORM_H
#define FORM_H

#include <fstream>
#include <iomanip>
#include <iostream>
#include "color.h"

#define FORM_DFLT_CTOR GREEN "- Form: Default constructor called" RESET
#define FORM_CTOR DARK_GREEN "- Form: constructor called" RESET
#define FORM_CTR LIGHT_CYAN "- Form: constructor called" RESET
#define FORM_CPY_CTOR CYAN "- Form: Copy constructor called" RESET
#define FORM_CPY_ASGMT_OP_CALL DARK_CYAN "- Form: Copy assignment operator called" RESET
#define FORM_DTOR ORANGE "- Form: Destructor called" RESET
#define FORM_MEMBER_FUNC_CALL "- Form: member function called"

#endif

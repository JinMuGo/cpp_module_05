/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 07:45:05 by jgo               #+#    #+#             */
/*   Updated: 2023/07/01 08:55:10 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include "color.h"

#define BURE_DFLT_CTOR GREEN "- Bureaucrat: Default constructor called" RESET
#define BURE_CTOR DARK_GREEN "- Bureaucrat: constructor called" RESET
#define BURE_CTR LIGHT_CYAN "- Bureaucrat: constructor called" RESET
#define BURE_CPY_CTOR CYAN "- Bureaucrat: Copy constructor called" RESET
#define BURE_CPY_ASGMT_OP_CALL \
	DARK_CYAN "- Bureaucrat: Copy assignment operator called" RESET
#define BURE_DTOR RED "- Bureaucrat: Destructor called" RESET
#define BURE_MEMBER_FUNC_CALL "- Bureaucrat: member function called"

#endif
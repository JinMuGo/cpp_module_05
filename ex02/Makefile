# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/07 19:34:14 by jgo               #+#    #+#              #
#    Updated: 2023/07/02 21:23:30 by jgo              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

include ../make_config/Rules.mk
include ../make_config/Color_Rules.mk

SRCS :=	Bureaucrat.cpp \
		AForm.cpp \
		ShrubberyCreationForm.cpp \
		PresidentialPardonForm.cpp \
		RobotomyRequestForm.cpp \
		main.cpp

NAME := No_you_need_form_28B_not_28C...

OBJS := $(SRCS:.cpp=.o)
DEPS := $(SRCS:.cpp=.d)
-include $(DEPS)

include ../make_config/Recipes.mk

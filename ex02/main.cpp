/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 12:50:36 by jgo               #+#    #+#             */
/*   Updated: 2023/07/01 19:36:24 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

static inline void increaseBureaucrat(Bureaucrat& obj) {
	try {
		obj.incrGrade();
	} catch (const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}

static inline void decreaseBureaucrat(Bureaucrat& obj) {
	try {
		obj.decrGrade();
	} catch (const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}

int main(void) {
	Bureaucrat jgo("jgo", 1);
	Bureaucrat sanghwal("sanghwal", 150);
	Form hi;
	Form very_important_form("vif", HIGH_GRADE, 42);

	try
	{
		Form test("test", 4242, 2424);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << hi;
	std::cout << very_important_form;

	sanghwal.signForm(very_important_form);
	decreaseBureaucrat(jgo);
	jgo.signForm(very_important_form);
	increaseBureaucrat(jgo);
	jgo.signForm(very_important_form);
	increaseBureaucrat(sanghwal);
	sanghwal.signForm(hi);
	sanghwal.signForm(hi);

	return (0);
}

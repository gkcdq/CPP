#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "\n----------------Presidential Pardon----------------" << std::endl;
	try
	{
		Bureaucrat alice("Alice", 30);
		Bureaucrat bob("Bob", 3);
		PresidentialPardonForm form("Nasdas");
		std::cout << "\n-- Tentative d'exécution sans signature --\n";
		try
		{
			form.execute(alice);
		}
		catch (std::exception &e)
		{
			std::cerr << "Erreur : " << e.what() << std::endl;
		}
		std::cout << "\n-- Tentative de signature avec grade trop bas --\n";
		try
		{
			form.beSigned(alice);
		}
		catch (std::exception &e)
		{
			std::cerr << "Erreur : " << e.what() << std::endl;
		}
		std::cout << "\n-- Signature par un bureaucrat avec grade suffisant --\n";
		bob.signForm(form);
		std::cout << "\n-- Tentative d'exécution avec grade trop bas --\n";
		try
		{
			form.execute(alice);
		}
		catch (std::exception &e)
		{
			std::cerr << "Erreur : " << e.what() << std::endl;
		}
		std::cout << "\n-- Exécution réussie par un bureaucrat avec grade suffisant --\n";
		bob.executeForm(form);
		std::cout << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Erreur fatale : " << e.what() << std::endl;
	}
	std::cout << "---------------------------------------------------\n\n" << std::endl;
	std::cout << "\n------------------Robotomy Request-----------------" << std::endl;
	srand(time(NULL));
	try
	{
		Bureaucrat thomas("Thomas", 73);
		Bureaucrat milin("Milin", 70);
		Bureaucrat olio("Olio", 2);
		RobotomyRequestForm robotform("Dall-E");
		std::cout << "\n-- Tentative d'exécution sans signature --\n";
		try
		{
			robotform.execute(thomas);
		}
		catch (const std::exception &e)
		{
			std::cerr << "Erreur : " << e.what() << std::endl;
		}
		std::cout << "\n-- Tentative de signature avec grade insuffisant --\n";
		try
		{
			robotform.beSigned(thomas);
		}
		catch (const std::exception &e)
		{
			std::cerr << "Erreur : " << e.what() << std::endl;
		}
		std::cout << "\n-- Signature avec grade suffisant --\n";
		try
		{
			robotform.beSigned(milin);
			std::cout << "Form signed by Milin.\n";
		}
		catch (const std::exception &e)
		{
			std::cerr << "Erreur : " << e.what() << std::endl;
		}
		std::cout << "\n-- Exécution avec grade insuffisant --\n";
		try
		{
			robotform.execute(milin);
		}
		catch (const std::exception &e)
		{
			std::cerr << "Erreur : " << e.what() << std::endl;
		}
		std::cout << "\n-- Exécution réussie --\n";
		try
		{
			robotform.execute(olio);
		}
		catch (const std::exception &e)
		{
			std::cerr << "Erreur : " << e.what() << std::endl;
		}
	}
	catch (const std::exception &e)
	{
		std::cerr << "Erreur fatale : " << e.what() << std::endl;
	}
	std::cout << "\n---------------------------------------------------\n\n" << std::endl;
	std::cout << "\n----------------Shrubbery Creation-----------------\n";
	try
	{
		Bureaucrat john("John", 150);
		Bureaucrat sara("Sara", 140);
		Bureaucrat elon("Elon", 130);
		ShrubberyCreationForm shrubForm("Garden");
		std::cout << "\n-- Tentative d'exécution sans signature --\n";
		try
		{
			shrubForm.execute(john);
		}
		catch (const std::exception &e)
		{
			std::cerr << "Erreur : " << e.what() << std::endl;
		}
		std::cout << "\n-- Tentative de signature avec grade insuffisant --\n";
		try
		{
			shrubForm.beSigned(john);
		}
		catch (const std::exception &e)
		{
			std::cerr << "Erreur : " << e.what() << std::endl;
		}
		std::cout << "\n-- Signature réussie --\n";
		try
		{
			shrubForm.beSigned(sara);
			std::cout << "Form signed by Sara." << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << "Erreur : " << e.what() << std::endl;
		}
		std::cout << "\n-- Tentative d'exécution avec grade trop bas --\n";
		try
		{
			shrubForm.execute(sara);
		}
		catch (const std::exception &e)
		{
			std::cerr << "Erreur : " << e.what() << std::endl;
		}
		std::cout << "\n-- Exécution réussie par un grade suffisant --\n";
		try
		{
			shrubForm.execute(elon);
			std::cout << "ShrubberyCreationForm executed successfully." << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << "Erreur : " << e.what() << std::endl;
		}
		std::ifstream file("Garden_shrubbery");
		if (file)
		{
			std::cout << "Fichier 'Garden_shrubbery' créé avec succès.\n";
			file.close();
		}
		else
			std::cerr << "Erreur : le fichier 'Garden_shrubbery' n'a pas été créé.\n";
	}
	catch (const std::exception &e)
	{
		std::cerr << "Erreur fatale : " << e.what() << std::endl;
	}
	std::cout << "\n---------------------------------------------------\n\n";
	std::cout << "\n---------------Intern Form Creation----------------\n\n";
	std::cout << "\n-- Intern creation de Robotmy Request Form --\n";
	{
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		delete rrf;
	}
	std::cout << "\n-- Intern creation de Presidential Pardon Request Form --\n";
	{
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
		delete rrf;
	}
	std::cout << "\n-- Intern creation de Shrubbery Creation Request Form --\n";
	{
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		delete rrf;
	}
	std::cout << "\n-- Intern creation de Wrong Request Form --\n";
	{
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("Hélicoptère d'attaque", "Bender");
		delete rrf;
	}
	std::cout << "\n---------------------------------------------------\n\n";
	return (0);
}

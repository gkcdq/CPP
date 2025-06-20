#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"
# include <iostream>
# include <stdio.h>
# include <stdlib.h>
# include <string>

class AMateria
{
  protected:
	std::string type;
	AMateria(std::string const &type);
	AMateria& operator=(const AMateria &other);

  public:
	AMateria();
	virtual ~AMateria();
	std::string const &getType() const;
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
};

class IMateriaSource
{
  public:
	IMateriaSource();
	virtual ~IMateriaSource(){}
	virtual void learnMateria(AMateria *) = 0;
	virtual AMateria *createMateria(std::string const &type) = 0;
};

// Ice and Cure

class Ice : AMateria
{
  public:
	Ice();
	Ice(const Ice &other);
	Ice& operator=(const Ice& other);
	~Ice();
	virtual AMateria *clone() const;
	virtual void use(ICharacter &target) ;
};

class Cure : AMateria
{
  public:
	Cure();
	Cure(const Cure &other);
	Cure& operator=(const Cure& other);
	~Cure();
	virtual AMateria *clone() const;
	virtual void use(ICharacter &target);
};

#endif
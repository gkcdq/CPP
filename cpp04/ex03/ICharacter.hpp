#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include "AMateria.hpp"

class ICharacter
{
  public:
	virtual ~ICharacter(){};
	virtual std::string const &getName() const = 0; //Retourne le nom du personnage
	virtual void equip(AMateria *m) = 0; //Ajoute une materia à l'inventaire
	virtual void unequip(int idx) = 0; //Retire une materia de l'inventaire sans la supprimer
	virtual void use(int idx, ICharacter &target) = 0; //Utilise la materia à l'index spécifié sur la cible
};

#endif
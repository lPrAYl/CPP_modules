#pragma once

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource {
private:
	AMateria*	container[4];

public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(MateriaSource const& other);

	void learnMateria(AMateria* materia);
	AMateria* createMateria(std::string const& type);

	MateriaSource const& operator=(MateriaSource const& other);
};

#endif //MATERIASOURCE_HPP

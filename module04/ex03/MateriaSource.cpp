#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; ++i)
		container[i] = NULL;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; ++i)
		delete container[i];
}

MateriaSource::MateriaSource(MateriaSource const& other) {
	for (int i = 0; i < 4; ++i)
		container[i] = other.container[i];
}

MateriaSource const& MateriaSource::operator=(const MateriaSource &other) {
	if (this == &other)
		return *this;
	for (int i = 0; i < 4; ++i) {
		delete container[i];
		container[i] = other.container[i];
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria *materia) {
	for (int i = 0; i < 4; ++i) {
		if (!container[i]) {
			std::cout << "Learned " << YELLOW << materia->getType() << RESET;
			std::cout << std::endl;
			container[i] = materia;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(const std::string &type) {
	for (int i = 0; i < 4; ++i) {
		if (container[i] && container[i]->getType() == type) {
			std::cout << CYAN << "Materia has been created!" << RESET << std::endl;
			return container[i]->clone();
		}
	}
	std::cout << RED << "Materia not found!" << RESET << std::endl;
	return NULL;
}

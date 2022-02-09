#pragma once

#ifndef BRAIN_HPP
#define BRAIN_HPP

# include <iostream>
# include <string>
# include "colors.hpp"

class	Brain {
private:
	std::string	_ideas[100];

public:
	Brain();
	~Brain();
	Brain(Brain const&);

	std::string const& getIdea(int);

	Brain const& operator=(Brain const&);
};

#endif //BRAIN_HPP

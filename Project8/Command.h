#ifndef COMMAND_H
#define COMMAND_H

#include"Animal.h"

class Command
{
	animals* animalss;
	int lastAnimalsIndex;

public:
	Command();
	~Command();

	void Addanimals(animals&);
	void Writeanimals();
	string GetMostPopularAnimal();

};

#endif 


#ifndef COMMANDSTORE_H
#define COMMANDSTORE_H

#include"Store.h"

class CommandStore
{
	NetPetShop* NetPetShopp;
	int lastPetIndex;

public:
	CommandStore();
	~CommandStore();

	void Addpetshop(NetPetShop&);
	void Writepetshop();
};

#endif 

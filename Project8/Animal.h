#ifndef ANIMALS_H
#define ANIMALS_H
#include"Reposutorii.h"
#include<string>
using namespace std;

class animals :Reposutorii
{
	string kinds;
	string model;
	string color;
	int amount;
	int pricee;
	string streets;

public:
	animals(string = "", string = "", string = "", int = 2,
		int = 100, string = "");

	virtual void Write();


	string Getkinds();
	string GetModel();
	string GetColor();
	int Getamount();
	int Getpricee();
	string Getstreet();
};

#endif 
#pragma once
#include<iostream>
#include"Devise.h"
using namespace std;
namespace Bank{
class Operation
{
public:
	Operation(Devise* m, string lib);
	void afficher();
private: 
	int numOp; 
	static int	cpt;
	Devise* montant; 
	string libelle;



};
}


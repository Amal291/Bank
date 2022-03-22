#pragma once
#include<iostream>
#include<vector>
#include"Compte.h"

using namespace std;

namespace Bank{
class Client
{
private: 
	int matricule; 
	static int cpt; 
	string nom; 
	string prenom; 
	string addresse; 
	vector<Compte*>MesComptes;

public: 
	Client(string n, string p, string add); 
	~Client();
	void afficher()const;
};

}
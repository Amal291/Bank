#pragma once
#include"Client.h"
#include<vector>
#include"Operation.h"
#include "Devise.h"
#include "Client.h"
#include <assert.h>
#include <iostream>


namespace Bank {
	class Compte
	{
	public: 
		Compte() ; // sans parametres
		Compte( Client* prop, Devise* solde);//avec parameteres
	virtual	bool retirerArgent(Devise *montant);
		void deposerArgent(Devise* montant);
		void consulterSolde() const;
		bool transfererArgent(Compte &c, Devise* montant);//?
		~Compte();
	private: 
		static int cpt;
		int numCompte;
		Client* Prop;
		vector<Operation> historique; // declaration
	protected:	Devise* solde;
	};

};
#pragma once
#include "Compte.h"
using namespace std;
namespace Bank {
class compte_payant :  virtual public Compte
{
    private:
        static double taux_payment;
    public: 
        compte_payant(Client* prop, Devise* solde);
        ~compte_payant();
        bool retirerArgent(Devise *montant) override;
};
}

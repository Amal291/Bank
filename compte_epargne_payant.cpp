#include "compte_epargne_payant.h"
using namespace std;
using namespace Bank;

compte_epargne_payant::compte_epargne_payant(Client* prop, Devise* solde,double taux)
    :Compte_Epargne(prop,solde,taux),compte_payant(prop,solde),Compte(prop,solde)
{

}

compte_epargne_payant::~compte_epargne_payant()
{
    
}
#include "compte_payant.h"
using namespace std;
using namespace Bank;
double compte_payant::taux_payment = 0.5;

compte_payant::compte_payant (client* prop, devise* solde)
    :compte(prop,solde)
{
}

bool compte_payant::retirerArgent(devise *montant)
{
    devise res = *montant + (*montant * this->taux_payment);
    if (*(this->solde) >= res)
    {
        return this->compte::retirer(&res);
    }
    return false;
}

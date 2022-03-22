#include "Client.h"
#include "Compte.h"

using namespace std;
using namespace Bank;

int Client::cpt=0;
Client::Client(string n, string p, string add)
    :matricule(++Client::cpt)
{
    this->nom = n;
    this->prenom = p;
    this->addresse = add;
}

Client::~Client()
{
    cout<<"destructeur de client"<<endl;
}

void Client::afficher()const
{
    cout<<"nom:"<<this->nom<<endl;
    cout<<"prenom"<<this->prenom<<endl;
    cout<<"adresse"<<this->addresse<<endl;
}
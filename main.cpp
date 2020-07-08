#include <iostream>

using namespace std;

class BankAccount
{
public:
    string nom;
    string adresse;
    string iban;
    int somme;

    void proprietaire()
    {
        cout<<"Le proprietaire est: "<<nom<<endl<<"Son adresse est: "<<adresse<<endl<<"L'IBAN est "<<iban<<endl;
    }

    void depot()
    {
        int i;

        cout<<"La somme que vous souhaitez ajouter: ";
        cin>>i;
        somme=somme+i;
        cout<<"La somme est modifiee avec succes!"<<endl<<"La somme est: "<<somme<<endl;
    }

    void retrait()
    {
        int i;

        cout<<"La somme que vous souhaitez retirer: ";
        cin>>i;
        somme=somme-i;
        cout<<"La somme est modifiee avec succes!"<<endl<<"La somme est: "<<somme<<endl;
    }
};

int main()
{
    BankAccount bac;
    bac.nom = "Ion Popescu";
    bac.adresse = "Strada Lujerului, bloc C12, etaj 3, apartament12";
    bac.iban = "xx637aa8826bb6374787";
    bac.somme = 100;
    int i;

    cout<<"1.Propretaire"<<endl<<"2.Depot"<<endl<<"3.Retrait"<<endl<<"4.STOP"<<endl;
    cin>>i;
    switch(i)
    {
    case 1:
        bac.proprietaire();
        break;
    case 2:
        bac.depot();
        break;
    case 3:
        bac.retrait();
        break;
    case 4:
        break;
    }

    return 0;
}

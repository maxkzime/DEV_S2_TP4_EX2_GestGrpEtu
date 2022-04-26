// TP4/EX2/main.cpp
// Exercice 1 : Site de vente
// BODIN Maxime C2
// 22/10/03

#include "student.h"


int main()
{

    Group * c = new Group("C");
    Group * b = new Group("B");

    Student * noah = new Student("Noah", "Philippe");
    Student * max = new Student("Max", "Bod");
    Student * nils = new Student("Nils", "Galloux");

    nils->setItsGroup(c);

    if(nils->belongsToAGroup())
        cout << "Nils belongs to a group !" << '\n';
    else
        cout << "Nils doesnt belong to a group !" << '\n';

    nils->removeItsGroup();

    if(nils->belongsToAGroup())
        cout << "Nils belongs to a group !" << '\n';
    else
        cout << "Nils doesnt belong to a group !" << '\n';

    nils->display();


    return 0;
}

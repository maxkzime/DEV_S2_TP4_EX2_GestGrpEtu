// TP4/EX2/main.cpp
// Exercice 2 : Gestion des groupes d’étudiants
// BODIN Maxime C2
// 22/10/03

#include "student.h"
#include "group.h"

int main()
{
    Group * lG = new Group("Looser group");
    Group * wG = new Group("Winner group");

    Student * noah = new Student("Noah", "Philippe");
    Student * max = new Student("Max", "Bod");
    Student * nils = new Student("Nils", "Galloux");

    nils->setItsGroup(lG);

    if(nils->belongsToAGroup())
        cout << "Nils belongs to a group !" << '\n';
    else
        cout << "Nils doesnt belong to a group !" << '\n';

    cout << "Le groupe de nils : " << nils->getItsGroup()->getItsGroupName();

    nils->removeItsGroup();


    if(nils->belongsToAGroup())
        cout << "Nils belongs to a group !" << '\n';
    else
        cout << "Nils doesnt belong to a group !" << '\n';

    cout << "Le groupe de nils : " << nils->getItsGroup()->getItsGroupName();

    nils->display();

    noah->setItsGroup(wG);
    max->setItsGroup(wG);
    wG->display();

    wG->addStudent(nils);
    wG->display();

    wG->removeStudent(nils);
    wG->display();

    lG->changeToThisGroup(max);
    lG->display();


    return 0;
}

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

    Student * noah = new Student("Noah", "Philippe",lG);
    Student * max = new Student("Max", "Bod",wG);
    Student * nils = new Student("Nils", "Galloux",lG);

    if(nils->belongsToAGroup())
        cout << "Nils belongs to a group !" << '\n';
    else
        cout << "Nils doesnt belongs to a group !" << '\n';

    cout << "Le groupe de nils : " << nils->getItsGroup()->getItsGroupName() << '\n';

    nils->removeItsGroup();

    if(nils->belongsToAGroup())
        cout << "Nils belongs to a group !" << '\n';
    else
        cout << "Nils doesnt belongs to a group !" << '\n';

    nils->display();

    wG->addStudent(nils);
    max->display();
    wG->addStudent(max);
    wG->display();

    wG->addStudent(noah);
    wG->display();

    wG->removeStudent(nils);
    wG->display();

    lG->changeToThisGroup(max);
    lG->display();
    wG->display();


    return 0;
}

// TP4/EX2/student.cpp
// Exercice 2 : Gestion des groupes d’étudiants
// BODIN Maxime C2
// 22/10/03

#include "student.h"
#include "group.h"


Student::Student(std::string forename,
                 std::string lastname)
    :
      itsForename(forename),
      itsLastname(lastname)
{}


bool Student::belongsToAGroup()
{
    bool itBelongToAGroup = false;

    if(itsGroup != nullptr)
        itBelongToAGroup = true;

    return itBelongToAGroup;
}


void Student::removeItsGroup()
{
    if(belongsToAGroup()){
        itsGroup->removeStudent(this);
        itsGroup = nullptr;
    }
}


void Student::display()
{
    cout << "---- Student ----" << '\n'
         << "Forename : " << getItsForename() << '\n'
         << "Lastname : " << getItsLastname() << '\n'
         << "Group : " << getItsGroup()->getItsGroupName() << "\n\n\n";
}



/* Getter + Setter */
const string &Student::getItsForename() const
{return itsForename;}

const string &Student::getItsLastname() const
{return itsLastname;}

Group *Student::getItsGroup()
{return itsGroup;}

void Student::setItsGroup(Group *group)
{
    itsGroup = group;
    group->addStudent(this);
}

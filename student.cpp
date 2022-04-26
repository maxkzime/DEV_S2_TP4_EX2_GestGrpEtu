// TP4/EX2/student.cpp
// Exercice 2 : Gestion des groupes d’étudiants
// BODIN Maxime C2
// 22/10/03

#include "student.h"
#include "group.h"


Student::Student(std::string forename,
                 std::string lastname,
                 Group *group)
    :
      itsForename(forename),
      itsLastname(lastname)
{group->addStudent(this);}


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
    }else
        cout << "Doesnt belongs to a group !\n";
}


void Student::display()
{
    cout << "\n---- Student ----\n"
         << "Forename : " << getItsForename() << '\n'
         << "Lastname : " << getItsLastname() << '\n';
    if(belongsToAGroup())
        cout << "Group : " << getItsGroup()->getItsGroupName() << "\n\n";
    else
        cout << "Doesnt belongs to a group." << "\n\n";
}



/* Getter + Setter */
const string &Student::getItsForename() const
{return itsForename;}

const string &Student::getItsLastname() const
{return itsLastname;}

Group *Student::getItsGroup()
{return itsGroup;}

void Student::setItsGroup(Group *group)
{itsGroup = group;}

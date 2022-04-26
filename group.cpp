// TP4/EX2/group.cpp
// Exercice 2 : Gestion des groupes d’étudiants
// BODIN Maxime C2
// 22/10/03

#include "group.h"
#include "student.h"

Group::Group(std::string groupName): itsGroupName(groupName)
{itsStudents = new list <Student*>;}


void Group::addStudent(Student *student)
{
    if(student->getItsGroup() != nullptr){
        if(student->getItsGroup() != this){
            student->getItsGroup()->removeStudent(student);
            itsStudents->push_back(student);
            student->setItsGroup(this);
        }else
            cout << "Student is already in this group !\n";
    }else{
        itsStudents->push_back(student);
        student->setItsGroup(this);
    }
}


void Group::removeStudent(Student *student)
{
    /*    list <Student*>::iterator it = std::find(itsStudents.begin(), itsStudents.end(), student);
     *    if (it != itsStudents.end())
     *        itsStudents.remove(it);
     */

    itsStudents->remove(student);
}

void Group::changeToThisGroup(Student *student)
{addStudent(student);}


void Group::display()
{
    cout << "\n---- Group ----\n"
         << "Name : " << getItsGroupName() << '\n';

    if(itsStudents->empty())
        cout << "Group is empty";
    else
        for (Student * x : *itsStudents)
            x->display();
}


/* Getter */
const string &Group::getItsGroupName() const
{return itsGroupName;}

list<Student *> *Group::getItsStudents()
{return itsStudents;}

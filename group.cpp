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
    bool found = (std::find(itsStudents->begin(), itsStudents->end(), student) != itsStudents->end());
    if(!found)
        itsStudents->push_back(student);
}


void Group::removeStudent(Student *student)
{
    //    list <Student*>::iterator it = std::find(itsStudents.begin(), itsStudents.end(), student);

    //    if (it != itsStudents.end())
    //    {
    //        itsStudents.remove(it);
    //    }

    itsStudents->remove(student);
}


void Group::changeToThisGroup(Student *student)
{
    //removeStudent(student);
    student->setItsGroup(this);
    addStudent(student);
}


void Group::display()
{
    cout << "---- Group ----" << '\n'
         << "Name : " << getItsGroupName() << '\n';

    for (Student* x : *itsStudents)
        x->display();
}


/* Getter */
const string &Group::getItsGroupName() const
{return itsGroupName;}

list<Student *> *Group::getItsStudents()
{return itsStudents;}

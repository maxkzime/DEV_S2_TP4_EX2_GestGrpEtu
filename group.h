// TP4/EX2/group.h
// Exercice 2 : Gestion des groupes d’étudiants
// BODIN Maxime C2
// 22/10/03

#ifndef GROUP_H
#define GROUP_H

#include <string>
#include <list>
#include <algorithm>
#include <iostream>

using std::string, std::list, std::cout;

class Student;

class Group
{

private:
    string itsGroupName;
    list <Student*> * itsStudents;

public:
    Group(string groupName);

    const string &getItsGroupName() const;
    list <Student*>* getItsStudents();
    void addStudent(Student* student);
    void removeStudent(Student* student);
    void changeToThisGroup(Student* student);
    void display();

};

#endif // GROUP_H

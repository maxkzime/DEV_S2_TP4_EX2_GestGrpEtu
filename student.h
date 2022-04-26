// TP4/EX2/student.h
// Exercice 2 : Gestion des groupes d’étudiants
// BODIN Maxime C2
// 22/10/03

#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Group;

using std::string;

class Student
{

private:
    string itsForename;
    string itsLastname;

    Group * itsGroup;

public:
    Student(string forename,
            string lastname);

    const string &getItsForename() const;
    const string &getItsLastname() const;
    Group * getItsGroup();
    void setItsGroup(Group* group);
    bool belongsToAGroup();
    void removeItsGroup();
    void display();
};

#endif // STUDENT_H

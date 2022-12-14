//
// Created by 10 on 12/12/2022.
//

#ifndef LEARNING_MANAGEMENT_SYSTEM_STUDENT_H
#define LEARNING_MANAGEMENT_SYSTEM_STUDENT_H
#include "course.h"
#include<string>
#include<map>
using namespace std;
class student {
private:
    string firstName;
    string lastName;
    string mobile;
    string email;
    double grade;
    int age;
    map<course,int>courses;

public:
    student(string&,string& ,string& ,string& ,double& ,int&);

    bool setFirstName(string & );

    bool setLastName(string &);

    bool setMobile(string & );

    bool setEmail(string & );

    bool setAge(int & );

    bool setGrade(double &);

    string getFirstName()const;

    string getLastName()const;

    string getMobile()const;

    string getEmail()const;

    double getGrade()const;

    int getAge()const;

    bool addCourse(course course,double grade);

    ~student();


};


#endif //LEARNING_MANAGEMENT_SYSTEM_STUDENT_H

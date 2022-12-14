//
// Created by 10 on 12/12/2022.
//

#include "student.h"
student::student(string &firstName, string &lastName, string &mobile, string &email, double &grade, int &age) {
    setFirstName(firstName);
    setLastName(lastName);
    setMobile(mobile);
    setEmail(email);
    setGrade(grade);
    setAge(age);
}

string student::getEmail() const {
    return email;
}

int student::getAge() const {
    return age;
}

string student::getFirstName() const {
    return firstName;
}

double student::getGrade() const {
    return grade;
}

string student::getLastName() const {
    return lastName;
}

string student::getMobile() const {
    return mobile;
}

bool student::setEmail(string &email) {
    this->email=email;
    return true;
}

bool student::setAge(int &age) {
    if(age>0&&age<120) {
        this->age = age;
        return true;
    }
    else
        return false;

}

bool  student::setFirstName(string &firstname) {
    bool valid =true;
    for (int i = 0; i < firstname.size(); ++i) {
        if(isalpha(firstname[i])){
            continue;
        }
        else {
            valid = false;
            break;
        }
    }
    if(valid) {
        this->firstName = firstname;
        return true;
    }
    return false;
}

bool  student::setLastName(string &lastname) {
    bool valid = true;
    for (int i = 0; i < lastname.size(); ++i) {
        if (isalpha(lastname[i])) {
            continue;
        } else {
            valid = false;
            break;
        }
    }
    if (valid) {
        this->lastName = lastname;
        return true;
    }
    return false;
}
 bool student::setMobile(string &mobile) {
     string allowedNumbers = "0123456789";
     bool valid = true;
     for (int i = 0; i < mobile.size(); ++i) {
         if (allowedNumbers.find(mobile[i]))
             continue;
         else
             valid = false;
     }
     if (valid) {
         this->mobile = mobile;
         return true;
     }
     return false;
 }

bool student::setGrade(double&grade) {
    if(grade<0||grade>100)
        return false;
    this->grade=grade;
    return true;
}

bool student::addCourse(course course, double grade) {
    if(courses.count(course) == 1){
        return false;
    }
    if(grade <0 || grade >100)
        return false;
    courses[course] = grade;
    return true;
}
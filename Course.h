//
// Created by 10 on 12/12/2022.
//

#ifndef LEARNING_MANAGEMENT_SYSTEM_COURSE_H
#define LEARNING_MANAGEMENT_SYSTEM_COURSE_H
#include"student.h"
#include <string>
#include <ctype.h>
using namespace std;
class course {
private:
    string name;
    string code;
    string lectureHall;
    string day;
    int hour;
public:
    course(string &,string &,string &,string &,int &);

    bool setName(string &);

    bool setCode(string &);

    bool setLectureHall(string &);

    bool setTime(string &,int&);

    string getName()const;

    string getCode()const;

    string getLectureHall()const;

    pair<string,int>getTime()const;

    ~course();


};


#endif //LEARNING_MANAGEMENT_SYSTEM_COURSE_H

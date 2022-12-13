//
// Created by 10 on 12/12/2022.
//

#ifndef LEARNING_MANAGEMENT_SYSTEM_PROFESSOR_H
#define LEARNING_MANAGEMENT_SYSTEM_PROFESSOR_H
#include <iostream>
using namespace std;

class professor { private:
    string Name;
    string Code;
    string LectureHall;
    string Time;
public:
    // Setter
    void setName(const string &name);


    void setCode(const string &code);

    void setLectureHall(const string &lectureHall) ;

    void setTime(const string &time) ;

    // Getter
    const string &getName() ;

    const string &getCode() ;
    const string &getLectureHall();

    const string &getTime() ;
};


#endif //LEARNING_MANAGEMENT_SYSTEM_PROFESSOR_H

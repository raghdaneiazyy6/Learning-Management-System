//
// Created by 10 on 12/12/2022.
//

#include "course.h"
course::course(string &name, string &code, string &lectureHall, string &day,int &hour) {
    setName(name);
    setCode(code);
    setTime(day,hour);
    setLectureHall(lectureHall);


}

string course::getName() const {
    return name;
}

string course::getCode() const {
    return code;
}

string course::getLectureHall() const {
    return lectureHall;
}

pair<string,int> course::getTime() const {
    return {day,hour};
}

bool course::setName(string &name) {
    bool valid =true;
    for (int i = 0; i < name.size(); ++i) {
        if(isalpha(name[i])){
            continue;
        }
        else {
            valid = false;
            break;
        }
    }
    if(valid) {
        this->name= name;
        return true;
    }
    return false;

}

bool course::setCode(string &code) {
    this->code=code;
    return true;
}

bool course::setLectureHall(string &lectureHall) {
    this->lectureHall=lectureHall;
}

bool course::setTime(string &d,int &h) {
    hour = (h >= 0 && h < 24) ? h : -1;
    string arr[] = {"saturday", "sunday", "monday", "tuesday", "wednesday", "thursday", "friday"};
    for (int i = 0; i < d.size(); ++i) {
        d[i] = tolower(d[i]);
    }
    bool valid = false;
    for (int i = 0; i < 7; ++i) {
        if (d == arr[i]) {
            valid = true;
            break;
        }
    }
    if (valid && hour != -1)
        return true;
    return false;
}

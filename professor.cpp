//
// Created by 10 on 12/12/2022.
//

#include "professor.h"
#include <iostream>
using namespace std;
void professor::setName(const string &name) {
        Name = name;
    }

void professor::setCode(const string &code) {
    Code=code;

}

void professor::setLectureHall(const string &lectureHall) {
        LectureHall = lectureHall;

}

void professor::setTime(const string &time) {
        Time = time;

}

const string &professor::getName() {

        return Name;

}

const string &professor::getCode() {
    return Code;
}

const string &professor::getLectureHall() {
    return LectureHall;
}

const string &professor::getTime() {
    return Time;
}

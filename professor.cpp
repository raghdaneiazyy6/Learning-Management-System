//
// Created by 10 on 12/12/2022.
//

#include "professor.h"
#include <iostream>
using namespace std;

void professor::setEmail(const string &email) {
    Email = email;
}

void professor::setTitle(const string &title) {
    professor::Title = title;
}

void professor::setFirstName(const string &firstName) {
    FirstName = firstName;
}

void professor::setLastName(const string &lastName) {
    LastName = lastName;
}

void professor::setAge(const string &age) {
    Age = age;
}

void professor::setMobile(const string &mobile) {
    Mobile = mobile;
}

const string &professor::getFirstName() const {
    return FirstName;
}

const string &professor::getLastName() const {
    return LastName;
}

const string &professor::getAge() const {
    return Age;
}

const string &professor::getMobile() const {
    return Mobile;
}

const string &professor::getEmail() const {
    return Email;
}

const string &professor::getTitle() const {
    return Title;
}

//
// Created by 10 on 12/12/2022.
//

#ifndef LEARNING_MANAGEMENT_SYSTEM_PROFESSOR_H
#define LEARNING_MANAGEMENT_SYSTEM_PROFESSOR_H
#include <iostream>
using namespace std;

class professor { private:
    string FirstName;
    string LastName;
    string Age;
    string Mobile;
    string Email;
    string Title;
public:
    // Setter

    void setFirstName(const string &firstName);

    void setLastName(const string &lastName);

    void setAge(const string &age);

    void setEmail(const string &email);

    void setTitle(const string &title);

    void setMobile(const string &mobile);

    // Getter
    const string &getFirstName() const;

    const string &getLastName() const;

    const string &getAge() const;

    const string &getMobile() const;

    const string &getEmail() const;

    const string &getTitle() const;
};


#endif //LEARNING_MANAGEMENT_SYSTEM_PROFESSOR_H

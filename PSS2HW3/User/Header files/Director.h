#ifndef PSS2HW2_DIRECTOR_H
#define PSS2HW2_DIRECTOR_H


#include "../User.h"

class Director: public User{
public:
    Director() = default;
    Director(const User& user) : User(user) {
        setAccessLevel(RED);
    }                                   // creates an object from the base class and copies the base class
    void sayFunnySentence();
};


#endif //PSS2HW2_DIRECTOR_H

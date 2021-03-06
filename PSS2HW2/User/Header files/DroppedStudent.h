#ifndef PSS2HW2_DROPPEDSTUDENT_H
#define PSS2HW2_DROPPEDSTUDENT_H


#include "../User.h"

class DroppedStudent: public User{
public:
    DroppedStudent() = default;
    DroppedStudent(const User& user) : User(user) {} // создает объект из базового класса и копирует базовый класс
    void cryInChat();
    void tryOpenRoom(Room* R) override;
    int group;
    string address;
};


#endif //PSS2HW2_DROPPEDSTUDENT_H

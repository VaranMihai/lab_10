//
// Created by 70000 on 5/9/2022.
//

#ifndef LAB_10_ENTITY_H
#define LAB_10_ENTITY_H

#include <iostream>
#include <fstream>

using namespace std;

class Entity {
private:
    char* id;
    int day;
    float price;
public:
    Entity();
    Entity(char* id, int d, float p);
    Entity(const Entity &e);
    ~Entity();
    void set_id(char* id);
    void set_day(int d);
    void set_price(float p);
    Entity& operator=(const Entity &e);
    char* get_id();
    int get_day();
    float get_price();
    friend istream& operator>>(istream& is, Entity& e);
    friend ostream& operator<<(ostream& out, Entity& e);
};

#endif //LAB_10_ENTITY_H

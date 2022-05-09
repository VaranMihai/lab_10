//
// Created by 70000 on 5/9/2022.
//

#include <iostream>

using namespace std;

#include "Entity.h"
#include <string.h>

Entity::Entity() {
    this->id = nullptr;
    this->day = 0;
    this->price = 0;
}

Entity::Entity(char* id, int d, float p) {
    this->id = new char[strlen(id) + 1];
    strcpy(this->id, id);
    this->day = d;
    this->price = p;
}

Entity::Entity(const Entity &e) {
    if (e.id != nullptr) {
        id = new char[strlen(e.id) + 1];
        strcpy(this->id, e.id);
        day = e.day;
        price = e.price;
    }
}

Entity::~Entity() {
    if (this->id) {
        delete[] this->id;
        this->id = nullptr;
        this->day = 0;
        this->price = 0;
    }
}

void Entity::set_id(char* id) {
    if (this->id != nullptr) {
        delete[] this->id;
    }
    if (id != nullptr) {
        this->id = new char[strlen(id) + 1];
        strcpy(this->id , id);
    }
}

void Entity::set_day(int d) {
    if (day != 0) {
        this->day = 0;
    }
    if (d != 0) {
        this->day = d;
    }
}

void Entity::set_price(float p) {
    if (price != 0) {
        this->price = 0;
    }
    if (p != 0) {
        this->price = p;
    }
}

Entity &Entity::operator=(const Entity &e) {
    if (this != &e) {
        set_id(e.id);
        set_day(e.day);
        set_price(e.price);
    }
    return *this;
}

char *Entity::get_id() {
    if(this->id != nullptr) {
        return this->id;
    }
}

int Entity::get_day() {
    return this->day;
}

float Entity::get_price() {
    return this->price;
}

istream &operator>>(istream &is, Entity &e) {
    char* s = new char[100];
    is >> s;
    char* next_token;
    char* aux = strtok_s(s, ";", &next_token);
    e.id = new char[strlen(aux) + 1];
    strcpy_s(e.id, strlen(aux) + 1, aux);
    aux = strtok_s(nullptr, ";", &next_token);
    e.day = atoi(aux);
    e.price = atof(aux);
    return is;


    /*
    if(e.id != nullptr) {
        cout << "Id: ";
        in >> e.id;
        cout << "Day: ";
        in >> e.day;
        cout << "Price: ";
        in >> e.price;
        return in;
    }
     */
}

ostream &operator<<(ostream &out, Entity &e) {
    if(e.id != nullptr) {
        out << "The id is: " << e.id << endl;
        out << "The day is: " << e.day << endl;
        out << "The price is: " << e.price << endl;
        return out;
    }
}
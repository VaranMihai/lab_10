//
// Created by 70000 on 5/9/2022.
//

#ifndef LAB_10_UI_H
#define LAB_10_UI_H

#include "../Service/Service.h"

class UI {
private:

    Service service;

    void print_options();

public:

    UI(const Service &service);

    void display_all_entities();

    void run_menu();
};

#endif //LAB_10_UI_H

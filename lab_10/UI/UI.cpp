//
// Created by 70000 on 5/9/2022.
//

#include "UI.h"

void UI::print_options() {
    cout << "1. Show all entities" << endl;
    cout << "0. Exit" << endl;
}

/*
UI::UI(const Service &service) {
    this->service = service;
}
 */

void UI::run_menu() {

    bool to_run = true;
    while (to_run) {
        int option;
        print_options();
        cout << "type option: ";
        cin >> option;

        switch (option) {
            case 0: {
                to_run = false;
                break;
            }
            case 1: {
                service.get_all();
                break;
            }
            default: {
                cout << "Invalid option, try again!";
                break;
            }
        }
    }
}

void UI::display_all_entities() {
    service.get_all();
}


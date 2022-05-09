//
// Created by 70000 on 5/9/2022.
//

#ifndef LAB_10_REPO_H
#define LAB_10_REPO_H

#include <iostream>
#include <vector>
#include "../Entity/Entity.h"

using namespace std;

class Repo{
public:

    virtual void create(Entity) = 0;

    virtual vector<Entity> get_all() = 0;
};

#endif //LAB_10_REPO_H

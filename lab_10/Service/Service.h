//
// Created by 70000 on 5/9/2022.
//

#ifndef LAB_10_SERVICE_H
#define LAB_10_SERVICE_H

#include "../RepoInFile/RepoInFile.h"

class Service {
private:
    RepoInFile repo;

public:

    Service(const RepoInFile &repo);

    void add_entity(Entity e);

    vector<Entity> get_all();
};

#endif //LAB_10_SERVICE_H

//
// Created by 70000 on 5/9/2022.
//

#ifndef LAB_10_REPOINFILE_H
#define LAB_10_REPOINFILE_H

#include "../Repo/Repo.h"
#include <fstream>
#include <iostream>

class RepoInFile: public Repo{
private:
    Entity v[10];
    int no_elems;

public:
    void create(Entity e) override;

    vector<Entity> get_all() override;

    ~RepoInFile();
};

#endif //LAB_10_REPOINFILE_H

//
// Created by 70000 on 5/9/2022.
//

#include "RepoInFile.h"

void RepoInFile::create(Entity e) {
    int nrEntities;
    cout << "Repo InMemory creates a new entity: "<< endl;
    ifstream myfileIn("data.in" , ios_base::in);
    myfileIn.open("C:\\Users\\70000\\CLionProjects\\lab_10\\RepoInFile\\data.in");
    if(!myfileIn) {
        cout << "no file";
    } else {
        myfileIn >> nrEntities;
        while (nrEntities > 0) {
            cout << nrEntities << endl;
            myfileIn >> e;
            nrEntities--;
            this->v[this->no_elems++] = e;
        }
    }\
    no_elems = 0;
    myfileIn.close();
}

vector<Entity> RepoInFile::get_all() {
    cout << "Repo InMemory returns entities from memory." << endl;
    vector<Entity> vec;
    for (Entity e: v) {
        if (e.get_id() != nullptr) {
            vec.push_back(e);
        }
    }
    return vec;
}

RepoInFile::~RepoInFile() {
}
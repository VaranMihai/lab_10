//
// Created by 70000 on 5/9/2022.
//

#include "Service.h"

Service::Service(const RepoInFile &repo) {
    this->repo = repo;
}

void Service::add_entity(Entity e) {
    repo.create(e);
}

vector<Entity> Service::get_all() {
    repo.get_all();
}


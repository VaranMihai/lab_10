#include <iostream>
#include <fstream>
#include "RepoInFile/RepoInFile.h"
#include "Service/Service.h"

using namespace std;

int main() {

    RepoInFile repo_in_file;

    Repo& repo = repo_in_file;
    Service service(repo_in_file);

    Entity e1;
    Entity e2;


    service.add_entity(e1);
    service.add_entity(e2);


    for (Entity e: service.get_all()) {
        cout << e << endl;
    }


    return 0;
}

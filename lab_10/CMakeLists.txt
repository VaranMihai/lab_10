cmake_minimum_required(VERSION 3.21)
project(lab_10)

set(CMAKE_CXX_STANDARD 14)

add_executable(lab_10 main.cpp Entity/Entity.h Entity/Entity.cpp Repo/Repo.h RepoInFile/RepoInFile.h RepoInFile/RepoInFile.cpp Service/Service.h Service/Service.cpp UI/UI.h UI/UI.cpp)

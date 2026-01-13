cmake_minimum_required(VERSION 3.28)
project(OLD_MAIDEN)

set(CXX_STANDARD 17)
add_executable(OLD_MAIDEN
    ./source/main.cpp
    ./source/card.cpp
)

target_include_directories(OLD_MAIDEN PRIVATE
    ./include
)
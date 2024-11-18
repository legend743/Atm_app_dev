cmake_minimum_required(VERSION 3.13)
project(ATMSystem)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(atm 
    src/main.cpp
    src/ATM.cpp
    src/Account.cpp
    src/Transaction.cpp
    src/Bank.cpp
    src/utils.cpp
)

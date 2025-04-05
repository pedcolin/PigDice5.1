cmake_minimum_required(VERSION 3.30)
project(PigDice5)

set(CMAKE_CXX_STANDARD 20)

add_executable(PigDice5 main.cpp
        Game.cpp
        Game.h
        Turn.cpp
        Turn.h
        Die.cpp
        Die.h
        Player.cpp
        Player.h
        Game2.cpp
        Game2.h
        )

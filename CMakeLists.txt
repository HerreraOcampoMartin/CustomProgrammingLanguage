cmake_minimum_required(VERSION 3.24)
project(LenguajeProgramacion)

set(CMAKE_CXX_STANDARD 17)

add_executable(LenguajeProgramacion main.cpp src/Reader.cpp src/Reader.h src/Structures/ListText.cpp src/Structures/ListText.h Execute.cpp Execute.h src/Constants.cpp src/Constants.h src/Errors/BaseError.cpp src/Errors/BaseError.h src/Commands/BaseCommand.cpp src/Commands/BaseCommand.h src/Commands/PrintCommand.cpp src/Commands/PrintCommand.h src/Structures/ListCommand.cpp src/Structures/ListCommand.h src/Structures/ListParams.cpp src/Structures/ListParams.h)

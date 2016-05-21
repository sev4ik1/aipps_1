cmake_minimum_required(VERSION 2.8)

project (AIPPS2)

set(SOURCE_EXE main.cpp)

file(GLOB HEADERS "*.h")

add_library(Facade STATIC Facade.cpp ${HEADERS})
add_library(Coder STATIC Coder.cpp ${HEADERS})

add_executable(main ${SOURCE_EXE})

target_link_libraries(main Facade Coder)

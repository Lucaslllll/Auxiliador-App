# arquivo CMakeLists.txt

cmake_minimum_required(VERSION 3.5)

project(teste VERSION 0.1 LANGUAGES CXX )



# flags de compilação, vc pode colocar aqui

# o addres sanitizer por exemplo

set ( CMAKE_CXX_FLAGS "-Wall" )



# configura o diretório contendo os .h, assim você pode incluílos apenas com include "arquivo.h"

include_directories( include )

# gtkmm
find_package(PkgConfig)
pkg_check_modules(GTKMM gtkmm-3.0)



# Cria um executável com nome "program" com base nos arquivos main.cpp e func.cpp

add_executable( program

                src/main.cpp

                src/Auxiliador.cpp )


# gtkmm
target_include_directories(program PRIVATE ${GTKMM_INCLUDE_DIRS})

target_link_directories(program PRIVATE ${GTKMM_LIBRARY_DIRS})

target_link_libraries(program PRIVATE ${GTKMM_LIBRARIES})
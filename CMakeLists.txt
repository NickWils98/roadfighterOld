cmake_minimum_required(VERSION 3.9)
project(roadfighter)

set(CMAKE_CXX_STANDARD 11)

add_executable(roadfighter main.cpp)
# Extend the CMake module path to find the FindSFML.cmake
# file in {project root}/cmake/Modules
SET(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${PROJECT_SOURCE_DIR}/cmake/Modules/")

# Look for SFML >= 2.0, with the specific subcomponents listed below
FIND_PACKAGE(SFML 2 COMPONENTS system window graphics)

# The source files to compile
SET(SRC main.cpp Game.cpp Game.h Entity.cpp Entity.h World.cpp World.h Car.cpp Car.h EnemyCar.cpp EnemyCar.h CarSFML.cpp CarSFML.h PlayerCar.cpp PlayerCar.h PlayerCarSFML.cpp PlayerCarSFML.h Collider.cpp Collider.h Bullet.cpp Bullet.h BulletSFML.cpp BulletSFML.h PassingCar.cpp PassingCar.h PassingCarSFML.cpp PassingCarSFML.h)

# Add include dirs for SFML
# (The SFML_INCLUDE_DIR variable is defined by FindSFML.cmake, if SFML was found)
INCLUDE_DIRECTORIES(${SFML_INCLUDE_DIR})

# The program we're compiling with the sources set above
ADD_EXECUTABLE(roadfighter_sfml ${SRC})

# Link target to SFML libs
# (The SFML_LIBRARIES variable is defined by FindSFML.cmake, if SFML was found)
TARGET_LINK_LIBRARIES(roadfighter_sfml ${SFML_LIBRARIES})

INSTALL(TARGETS roadfighter_sfml DESTINATION ${PROJECT_SOURCE_DIR}/bin)
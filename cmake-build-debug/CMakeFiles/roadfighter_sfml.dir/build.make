# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/nick/clion-2017.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/nick/clion-2017.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/nick/Desktop/roadfighter

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/nick/Desktop/roadfighter/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/roadfighter_sfml.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/roadfighter_sfml.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/roadfighter_sfml.dir/flags.make

CMakeFiles/roadfighter_sfml.dir/main.cpp.o: CMakeFiles/roadfighter_sfml.dir/flags.make
CMakeFiles/roadfighter_sfml.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nick/Desktop/roadfighter/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/roadfighter_sfml.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/roadfighter_sfml.dir/main.cpp.o -c /home/nick/Desktop/roadfighter/main.cpp

CMakeFiles/roadfighter_sfml.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/roadfighter_sfml.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nick/Desktop/roadfighter/main.cpp > CMakeFiles/roadfighter_sfml.dir/main.cpp.i

CMakeFiles/roadfighter_sfml.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/roadfighter_sfml.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nick/Desktop/roadfighter/main.cpp -o CMakeFiles/roadfighter_sfml.dir/main.cpp.s

CMakeFiles/roadfighter_sfml.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/roadfighter_sfml.dir/main.cpp.o.requires

CMakeFiles/roadfighter_sfml.dir/main.cpp.o.provides: CMakeFiles/roadfighter_sfml.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/roadfighter_sfml.dir/build.make CMakeFiles/roadfighter_sfml.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/roadfighter_sfml.dir/main.cpp.o.provides

CMakeFiles/roadfighter_sfml.dir/main.cpp.o.provides.build: CMakeFiles/roadfighter_sfml.dir/main.cpp.o


CMakeFiles/roadfighter_sfml.dir/Game.cpp.o: CMakeFiles/roadfighter_sfml.dir/flags.make
CMakeFiles/roadfighter_sfml.dir/Game.cpp.o: ../Game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nick/Desktop/roadfighter/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/roadfighter_sfml.dir/Game.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/roadfighter_sfml.dir/Game.cpp.o -c /home/nick/Desktop/roadfighter/Game.cpp

CMakeFiles/roadfighter_sfml.dir/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/roadfighter_sfml.dir/Game.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nick/Desktop/roadfighter/Game.cpp > CMakeFiles/roadfighter_sfml.dir/Game.cpp.i

CMakeFiles/roadfighter_sfml.dir/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/roadfighter_sfml.dir/Game.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nick/Desktop/roadfighter/Game.cpp -o CMakeFiles/roadfighter_sfml.dir/Game.cpp.s

CMakeFiles/roadfighter_sfml.dir/Game.cpp.o.requires:

.PHONY : CMakeFiles/roadfighter_sfml.dir/Game.cpp.o.requires

CMakeFiles/roadfighter_sfml.dir/Game.cpp.o.provides: CMakeFiles/roadfighter_sfml.dir/Game.cpp.o.requires
	$(MAKE) -f CMakeFiles/roadfighter_sfml.dir/build.make CMakeFiles/roadfighter_sfml.dir/Game.cpp.o.provides.build
.PHONY : CMakeFiles/roadfighter_sfml.dir/Game.cpp.o.provides

CMakeFiles/roadfighter_sfml.dir/Game.cpp.o.provides.build: CMakeFiles/roadfighter_sfml.dir/Game.cpp.o


CMakeFiles/roadfighter_sfml.dir/Entity.cpp.o: CMakeFiles/roadfighter_sfml.dir/flags.make
CMakeFiles/roadfighter_sfml.dir/Entity.cpp.o: ../Entity.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nick/Desktop/roadfighter/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/roadfighter_sfml.dir/Entity.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/roadfighter_sfml.dir/Entity.cpp.o -c /home/nick/Desktop/roadfighter/Entity.cpp

CMakeFiles/roadfighter_sfml.dir/Entity.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/roadfighter_sfml.dir/Entity.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nick/Desktop/roadfighter/Entity.cpp > CMakeFiles/roadfighter_sfml.dir/Entity.cpp.i

CMakeFiles/roadfighter_sfml.dir/Entity.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/roadfighter_sfml.dir/Entity.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nick/Desktop/roadfighter/Entity.cpp -o CMakeFiles/roadfighter_sfml.dir/Entity.cpp.s

CMakeFiles/roadfighter_sfml.dir/Entity.cpp.o.requires:

.PHONY : CMakeFiles/roadfighter_sfml.dir/Entity.cpp.o.requires

CMakeFiles/roadfighter_sfml.dir/Entity.cpp.o.provides: CMakeFiles/roadfighter_sfml.dir/Entity.cpp.o.requires
	$(MAKE) -f CMakeFiles/roadfighter_sfml.dir/build.make CMakeFiles/roadfighter_sfml.dir/Entity.cpp.o.provides.build
.PHONY : CMakeFiles/roadfighter_sfml.dir/Entity.cpp.o.provides

CMakeFiles/roadfighter_sfml.dir/Entity.cpp.o.provides.build: CMakeFiles/roadfighter_sfml.dir/Entity.cpp.o


CMakeFiles/roadfighter_sfml.dir/World.cpp.o: CMakeFiles/roadfighter_sfml.dir/flags.make
CMakeFiles/roadfighter_sfml.dir/World.cpp.o: ../World.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nick/Desktop/roadfighter/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/roadfighter_sfml.dir/World.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/roadfighter_sfml.dir/World.cpp.o -c /home/nick/Desktop/roadfighter/World.cpp

CMakeFiles/roadfighter_sfml.dir/World.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/roadfighter_sfml.dir/World.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nick/Desktop/roadfighter/World.cpp > CMakeFiles/roadfighter_sfml.dir/World.cpp.i

CMakeFiles/roadfighter_sfml.dir/World.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/roadfighter_sfml.dir/World.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nick/Desktop/roadfighter/World.cpp -o CMakeFiles/roadfighter_sfml.dir/World.cpp.s

CMakeFiles/roadfighter_sfml.dir/World.cpp.o.requires:

.PHONY : CMakeFiles/roadfighter_sfml.dir/World.cpp.o.requires

CMakeFiles/roadfighter_sfml.dir/World.cpp.o.provides: CMakeFiles/roadfighter_sfml.dir/World.cpp.o.requires
	$(MAKE) -f CMakeFiles/roadfighter_sfml.dir/build.make CMakeFiles/roadfighter_sfml.dir/World.cpp.o.provides.build
.PHONY : CMakeFiles/roadfighter_sfml.dir/World.cpp.o.provides

CMakeFiles/roadfighter_sfml.dir/World.cpp.o.provides.build: CMakeFiles/roadfighter_sfml.dir/World.cpp.o


CMakeFiles/roadfighter_sfml.dir/Car.cpp.o: CMakeFiles/roadfighter_sfml.dir/flags.make
CMakeFiles/roadfighter_sfml.dir/Car.cpp.o: ../Car.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nick/Desktop/roadfighter/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/roadfighter_sfml.dir/Car.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/roadfighter_sfml.dir/Car.cpp.o -c /home/nick/Desktop/roadfighter/Car.cpp

CMakeFiles/roadfighter_sfml.dir/Car.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/roadfighter_sfml.dir/Car.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nick/Desktop/roadfighter/Car.cpp > CMakeFiles/roadfighter_sfml.dir/Car.cpp.i

CMakeFiles/roadfighter_sfml.dir/Car.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/roadfighter_sfml.dir/Car.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nick/Desktop/roadfighter/Car.cpp -o CMakeFiles/roadfighter_sfml.dir/Car.cpp.s

CMakeFiles/roadfighter_sfml.dir/Car.cpp.o.requires:

.PHONY : CMakeFiles/roadfighter_sfml.dir/Car.cpp.o.requires

CMakeFiles/roadfighter_sfml.dir/Car.cpp.o.provides: CMakeFiles/roadfighter_sfml.dir/Car.cpp.o.requires
	$(MAKE) -f CMakeFiles/roadfighter_sfml.dir/build.make CMakeFiles/roadfighter_sfml.dir/Car.cpp.o.provides.build
.PHONY : CMakeFiles/roadfighter_sfml.dir/Car.cpp.o.provides

CMakeFiles/roadfighter_sfml.dir/Car.cpp.o.provides.build: CMakeFiles/roadfighter_sfml.dir/Car.cpp.o


CMakeFiles/roadfighter_sfml.dir/EnemyCar.cpp.o: CMakeFiles/roadfighter_sfml.dir/flags.make
CMakeFiles/roadfighter_sfml.dir/EnemyCar.cpp.o: ../EnemyCar.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nick/Desktop/roadfighter/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/roadfighter_sfml.dir/EnemyCar.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/roadfighter_sfml.dir/EnemyCar.cpp.o -c /home/nick/Desktop/roadfighter/EnemyCar.cpp

CMakeFiles/roadfighter_sfml.dir/EnemyCar.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/roadfighter_sfml.dir/EnemyCar.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nick/Desktop/roadfighter/EnemyCar.cpp > CMakeFiles/roadfighter_sfml.dir/EnemyCar.cpp.i

CMakeFiles/roadfighter_sfml.dir/EnemyCar.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/roadfighter_sfml.dir/EnemyCar.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nick/Desktop/roadfighter/EnemyCar.cpp -o CMakeFiles/roadfighter_sfml.dir/EnemyCar.cpp.s

CMakeFiles/roadfighter_sfml.dir/EnemyCar.cpp.o.requires:

.PHONY : CMakeFiles/roadfighter_sfml.dir/EnemyCar.cpp.o.requires

CMakeFiles/roadfighter_sfml.dir/EnemyCar.cpp.o.provides: CMakeFiles/roadfighter_sfml.dir/EnemyCar.cpp.o.requires
	$(MAKE) -f CMakeFiles/roadfighter_sfml.dir/build.make CMakeFiles/roadfighter_sfml.dir/EnemyCar.cpp.o.provides.build
.PHONY : CMakeFiles/roadfighter_sfml.dir/EnemyCar.cpp.o.provides

CMakeFiles/roadfighter_sfml.dir/EnemyCar.cpp.o.provides.build: CMakeFiles/roadfighter_sfml.dir/EnemyCar.cpp.o


CMakeFiles/roadfighter_sfml.dir/Player.cpp.o: CMakeFiles/roadfighter_sfml.dir/flags.make
CMakeFiles/roadfighter_sfml.dir/Player.cpp.o: ../Player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nick/Desktop/roadfighter/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/roadfighter_sfml.dir/Player.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/roadfighter_sfml.dir/Player.cpp.o -c /home/nick/Desktop/roadfighter/Player.cpp

CMakeFiles/roadfighter_sfml.dir/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/roadfighter_sfml.dir/Player.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nick/Desktop/roadfighter/Player.cpp > CMakeFiles/roadfighter_sfml.dir/Player.cpp.i

CMakeFiles/roadfighter_sfml.dir/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/roadfighter_sfml.dir/Player.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nick/Desktop/roadfighter/Player.cpp -o CMakeFiles/roadfighter_sfml.dir/Player.cpp.s

CMakeFiles/roadfighter_sfml.dir/Player.cpp.o.requires:

.PHONY : CMakeFiles/roadfighter_sfml.dir/Player.cpp.o.requires

CMakeFiles/roadfighter_sfml.dir/Player.cpp.o.provides: CMakeFiles/roadfighter_sfml.dir/Player.cpp.o.requires
	$(MAKE) -f CMakeFiles/roadfighter_sfml.dir/build.make CMakeFiles/roadfighter_sfml.dir/Player.cpp.o.provides.build
.PHONY : CMakeFiles/roadfighter_sfml.dir/Player.cpp.o.provides

CMakeFiles/roadfighter_sfml.dir/Player.cpp.o.provides.build: CMakeFiles/roadfighter_sfml.dir/Player.cpp.o


CMakeFiles/roadfighter_sfml.dir/CarSFML.cpp.o: CMakeFiles/roadfighter_sfml.dir/flags.make
CMakeFiles/roadfighter_sfml.dir/CarSFML.cpp.o: ../CarSFML.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nick/Desktop/roadfighter/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/roadfighter_sfml.dir/CarSFML.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/roadfighter_sfml.dir/CarSFML.cpp.o -c /home/nick/Desktop/roadfighter/CarSFML.cpp

CMakeFiles/roadfighter_sfml.dir/CarSFML.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/roadfighter_sfml.dir/CarSFML.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nick/Desktop/roadfighter/CarSFML.cpp > CMakeFiles/roadfighter_sfml.dir/CarSFML.cpp.i

CMakeFiles/roadfighter_sfml.dir/CarSFML.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/roadfighter_sfml.dir/CarSFML.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nick/Desktop/roadfighter/CarSFML.cpp -o CMakeFiles/roadfighter_sfml.dir/CarSFML.cpp.s

CMakeFiles/roadfighter_sfml.dir/CarSFML.cpp.o.requires:

.PHONY : CMakeFiles/roadfighter_sfml.dir/CarSFML.cpp.o.requires

CMakeFiles/roadfighter_sfml.dir/CarSFML.cpp.o.provides: CMakeFiles/roadfighter_sfml.dir/CarSFML.cpp.o.requires
	$(MAKE) -f CMakeFiles/roadfighter_sfml.dir/build.make CMakeFiles/roadfighter_sfml.dir/CarSFML.cpp.o.provides.build
.PHONY : CMakeFiles/roadfighter_sfml.dir/CarSFML.cpp.o.provides

CMakeFiles/roadfighter_sfml.dir/CarSFML.cpp.o.provides.build: CMakeFiles/roadfighter_sfml.dir/CarSFML.cpp.o


CMakeFiles/roadfighter_sfml.dir/PlayerCar.cpp.o: CMakeFiles/roadfighter_sfml.dir/flags.make
CMakeFiles/roadfighter_sfml.dir/PlayerCar.cpp.o: ../PlayerCar.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nick/Desktop/roadfighter/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/roadfighter_sfml.dir/PlayerCar.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/roadfighter_sfml.dir/PlayerCar.cpp.o -c /home/nick/Desktop/roadfighter/PlayerCar.cpp

CMakeFiles/roadfighter_sfml.dir/PlayerCar.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/roadfighter_sfml.dir/PlayerCar.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nick/Desktop/roadfighter/PlayerCar.cpp > CMakeFiles/roadfighter_sfml.dir/PlayerCar.cpp.i

CMakeFiles/roadfighter_sfml.dir/PlayerCar.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/roadfighter_sfml.dir/PlayerCar.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nick/Desktop/roadfighter/PlayerCar.cpp -o CMakeFiles/roadfighter_sfml.dir/PlayerCar.cpp.s

CMakeFiles/roadfighter_sfml.dir/PlayerCar.cpp.o.requires:

.PHONY : CMakeFiles/roadfighter_sfml.dir/PlayerCar.cpp.o.requires

CMakeFiles/roadfighter_sfml.dir/PlayerCar.cpp.o.provides: CMakeFiles/roadfighter_sfml.dir/PlayerCar.cpp.o.requires
	$(MAKE) -f CMakeFiles/roadfighter_sfml.dir/build.make CMakeFiles/roadfighter_sfml.dir/PlayerCar.cpp.o.provides.build
.PHONY : CMakeFiles/roadfighter_sfml.dir/PlayerCar.cpp.o.provides

CMakeFiles/roadfighter_sfml.dir/PlayerCar.cpp.o.provides.build: CMakeFiles/roadfighter_sfml.dir/PlayerCar.cpp.o


CMakeFiles/roadfighter_sfml.dir/PlayerCarSFML.cpp.o: CMakeFiles/roadfighter_sfml.dir/flags.make
CMakeFiles/roadfighter_sfml.dir/PlayerCarSFML.cpp.o: ../PlayerCarSFML.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nick/Desktop/roadfighter/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/roadfighter_sfml.dir/PlayerCarSFML.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/roadfighter_sfml.dir/PlayerCarSFML.cpp.o -c /home/nick/Desktop/roadfighter/PlayerCarSFML.cpp

CMakeFiles/roadfighter_sfml.dir/PlayerCarSFML.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/roadfighter_sfml.dir/PlayerCarSFML.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nick/Desktop/roadfighter/PlayerCarSFML.cpp > CMakeFiles/roadfighter_sfml.dir/PlayerCarSFML.cpp.i

CMakeFiles/roadfighter_sfml.dir/PlayerCarSFML.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/roadfighter_sfml.dir/PlayerCarSFML.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nick/Desktop/roadfighter/PlayerCarSFML.cpp -o CMakeFiles/roadfighter_sfml.dir/PlayerCarSFML.cpp.s

CMakeFiles/roadfighter_sfml.dir/PlayerCarSFML.cpp.o.requires:

.PHONY : CMakeFiles/roadfighter_sfml.dir/PlayerCarSFML.cpp.o.requires

CMakeFiles/roadfighter_sfml.dir/PlayerCarSFML.cpp.o.provides: CMakeFiles/roadfighter_sfml.dir/PlayerCarSFML.cpp.o.requires
	$(MAKE) -f CMakeFiles/roadfighter_sfml.dir/build.make CMakeFiles/roadfighter_sfml.dir/PlayerCarSFML.cpp.o.provides.build
.PHONY : CMakeFiles/roadfighter_sfml.dir/PlayerCarSFML.cpp.o.provides

CMakeFiles/roadfighter_sfml.dir/PlayerCarSFML.cpp.o.provides.build: CMakeFiles/roadfighter_sfml.dir/PlayerCarSFML.cpp.o


CMakeFiles/roadfighter_sfml.dir/Collider.cpp.o: CMakeFiles/roadfighter_sfml.dir/flags.make
CMakeFiles/roadfighter_sfml.dir/Collider.cpp.o: ../Collider.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nick/Desktop/roadfighter/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/roadfighter_sfml.dir/Collider.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/roadfighter_sfml.dir/Collider.cpp.o -c /home/nick/Desktop/roadfighter/Collider.cpp

CMakeFiles/roadfighter_sfml.dir/Collider.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/roadfighter_sfml.dir/Collider.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nick/Desktop/roadfighter/Collider.cpp > CMakeFiles/roadfighter_sfml.dir/Collider.cpp.i

CMakeFiles/roadfighter_sfml.dir/Collider.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/roadfighter_sfml.dir/Collider.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nick/Desktop/roadfighter/Collider.cpp -o CMakeFiles/roadfighter_sfml.dir/Collider.cpp.s

CMakeFiles/roadfighter_sfml.dir/Collider.cpp.o.requires:

.PHONY : CMakeFiles/roadfighter_sfml.dir/Collider.cpp.o.requires

CMakeFiles/roadfighter_sfml.dir/Collider.cpp.o.provides: CMakeFiles/roadfighter_sfml.dir/Collider.cpp.o.requires
	$(MAKE) -f CMakeFiles/roadfighter_sfml.dir/build.make CMakeFiles/roadfighter_sfml.dir/Collider.cpp.o.provides.build
.PHONY : CMakeFiles/roadfighter_sfml.dir/Collider.cpp.o.provides

CMakeFiles/roadfighter_sfml.dir/Collider.cpp.o.provides.build: CMakeFiles/roadfighter_sfml.dir/Collider.cpp.o


CMakeFiles/roadfighter_sfml.dir/RoadBarrier.cpp.o: CMakeFiles/roadfighter_sfml.dir/flags.make
CMakeFiles/roadfighter_sfml.dir/RoadBarrier.cpp.o: ../RoadBarrier.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nick/Desktop/roadfighter/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/roadfighter_sfml.dir/RoadBarrier.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/roadfighter_sfml.dir/RoadBarrier.cpp.o -c /home/nick/Desktop/roadfighter/RoadBarrier.cpp

CMakeFiles/roadfighter_sfml.dir/RoadBarrier.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/roadfighter_sfml.dir/RoadBarrier.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nick/Desktop/roadfighter/RoadBarrier.cpp > CMakeFiles/roadfighter_sfml.dir/RoadBarrier.cpp.i

CMakeFiles/roadfighter_sfml.dir/RoadBarrier.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/roadfighter_sfml.dir/RoadBarrier.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nick/Desktop/roadfighter/RoadBarrier.cpp -o CMakeFiles/roadfighter_sfml.dir/RoadBarrier.cpp.s

CMakeFiles/roadfighter_sfml.dir/RoadBarrier.cpp.o.requires:

.PHONY : CMakeFiles/roadfighter_sfml.dir/RoadBarrier.cpp.o.requires

CMakeFiles/roadfighter_sfml.dir/RoadBarrier.cpp.o.provides: CMakeFiles/roadfighter_sfml.dir/RoadBarrier.cpp.o.requires
	$(MAKE) -f CMakeFiles/roadfighter_sfml.dir/build.make CMakeFiles/roadfighter_sfml.dir/RoadBarrier.cpp.o.provides.build
.PHONY : CMakeFiles/roadfighter_sfml.dir/RoadBarrier.cpp.o.provides

CMakeFiles/roadfighter_sfml.dir/RoadBarrier.cpp.o.provides.build: CMakeFiles/roadfighter_sfml.dir/RoadBarrier.cpp.o


# Object files for target roadfighter_sfml
roadfighter_sfml_OBJECTS = \
"CMakeFiles/roadfighter_sfml.dir/main.cpp.o" \
"CMakeFiles/roadfighter_sfml.dir/Game.cpp.o" \
"CMakeFiles/roadfighter_sfml.dir/Entity.cpp.o" \
"CMakeFiles/roadfighter_sfml.dir/World.cpp.o" \
"CMakeFiles/roadfighter_sfml.dir/Car.cpp.o" \
"CMakeFiles/roadfighter_sfml.dir/EnemyCar.cpp.o" \
"CMakeFiles/roadfighter_sfml.dir/Player.cpp.o" \
"CMakeFiles/roadfighter_sfml.dir/CarSFML.cpp.o" \
"CMakeFiles/roadfighter_sfml.dir/PlayerCar.cpp.o" \
"CMakeFiles/roadfighter_sfml.dir/PlayerCarSFML.cpp.o" \
"CMakeFiles/roadfighter_sfml.dir/Collider.cpp.o" \
"CMakeFiles/roadfighter_sfml.dir/RoadBarrier.cpp.o"

# External object files for target roadfighter_sfml
roadfighter_sfml_EXTERNAL_OBJECTS =

roadfighter_sfml: CMakeFiles/roadfighter_sfml.dir/main.cpp.o
roadfighter_sfml: CMakeFiles/roadfighter_sfml.dir/Game.cpp.o
roadfighter_sfml: CMakeFiles/roadfighter_sfml.dir/Entity.cpp.o
roadfighter_sfml: CMakeFiles/roadfighter_sfml.dir/World.cpp.o
roadfighter_sfml: CMakeFiles/roadfighter_sfml.dir/Car.cpp.o
roadfighter_sfml: CMakeFiles/roadfighter_sfml.dir/EnemyCar.cpp.o
roadfighter_sfml: CMakeFiles/roadfighter_sfml.dir/Player.cpp.o
roadfighter_sfml: CMakeFiles/roadfighter_sfml.dir/CarSFML.cpp.o
roadfighter_sfml: CMakeFiles/roadfighter_sfml.dir/PlayerCar.cpp.o
roadfighter_sfml: CMakeFiles/roadfighter_sfml.dir/PlayerCarSFML.cpp.o
roadfighter_sfml: CMakeFiles/roadfighter_sfml.dir/Collider.cpp.o
roadfighter_sfml: CMakeFiles/roadfighter_sfml.dir/RoadBarrier.cpp.o
roadfighter_sfml: CMakeFiles/roadfighter_sfml.dir/build.make
roadfighter_sfml: /usr/lib/x86_64-linux-gnu/libsfml-system.so
roadfighter_sfml: /usr/lib/x86_64-linux-gnu/libsfml-window.so
roadfighter_sfml: /usr/lib/x86_64-linux-gnu/libsfml-graphics.so
roadfighter_sfml: CMakeFiles/roadfighter_sfml.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/nick/Desktop/roadfighter/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Linking CXX executable roadfighter_sfml"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/roadfighter_sfml.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/roadfighter_sfml.dir/build: roadfighter_sfml

.PHONY : CMakeFiles/roadfighter_sfml.dir/build

CMakeFiles/roadfighter_sfml.dir/requires: CMakeFiles/roadfighter_sfml.dir/main.cpp.o.requires
CMakeFiles/roadfighter_sfml.dir/requires: CMakeFiles/roadfighter_sfml.dir/Game.cpp.o.requires
CMakeFiles/roadfighter_sfml.dir/requires: CMakeFiles/roadfighter_sfml.dir/Entity.cpp.o.requires
CMakeFiles/roadfighter_sfml.dir/requires: CMakeFiles/roadfighter_sfml.dir/World.cpp.o.requires
CMakeFiles/roadfighter_sfml.dir/requires: CMakeFiles/roadfighter_sfml.dir/Car.cpp.o.requires
CMakeFiles/roadfighter_sfml.dir/requires: CMakeFiles/roadfighter_sfml.dir/EnemyCar.cpp.o.requires
CMakeFiles/roadfighter_sfml.dir/requires: CMakeFiles/roadfighter_sfml.dir/Player.cpp.o.requires
CMakeFiles/roadfighter_sfml.dir/requires: CMakeFiles/roadfighter_sfml.dir/CarSFML.cpp.o.requires
CMakeFiles/roadfighter_sfml.dir/requires: CMakeFiles/roadfighter_sfml.dir/PlayerCar.cpp.o.requires
CMakeFiles/roadfighter_sfml.dir/requires: CMakeFiles/roadfighter_sfml.dir/PlayerCarSFML.cpp.o.requires
CMakeFiles/roadfighter_sfml.dir/requires: CMakeFiles/roadfighter_sfml.dir/Collider.cpp.o.requires
CMakeFiles/roadfighter_sfml.dir/requires: CMakeFiles/roadfighter_sfml.dir/RoadBarrier.cpp.o.requires

.PHONY : CMakeFiles/roadfighter_sfml.dir/requires

CMakeFiles/roadfighter_sfml.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/roadfighter_sfml.dir/cmake_clean.cmake
.PHONY : CMakeFiles/roadfighter_sfml.dir/clean

CMakeFiles/roadfighter_sfml.dir/depend:
	cd /home/nick/Desktop/roadfighter/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nick/Desktop/roadfighter /home/nick/Desktop/roadfighter /home/nick/Desktop/roadfighter/cmake-build-debug /home/nick/Desktop/roadfighter/cmake-build-debug /home/nick/Desktop/roadfighter/cmake-build-debug/CMakeFiles/roadfighter_sfml.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/roadfighter_sfml.dir/depend


# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.21.1/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.21.1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/helloyeew/CLionProjects/algo-lab

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/helloyeew/CLionProjects/algo-lab/build

# Include any dependencies generated for this target.
include CMakeFiles/algo_lab.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/algo_lab.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/algo_lab.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/algo_lab.dir/flags.make

CMakeFiles/algo_lab.dir/main.cpp.o: CMakeFiles/algo_lab.dir/flags.make
CMakeFiles/algo_lab.dir/main.cpp.o: ../main.cpp
CMakeFiles/algo_lab.dir/main.cpp.o: CMakeFiles/algo_lab.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/helloyeew/CLionProjects/algo-lab/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/algo_lab.dir/main.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/algo_lab.dir/main.cpp.o -MF CMakeFiles/algo_lab.dir/main.cpp.o.d -o CMakeFiles/algo_lab.dir/main.cpp.o -c /Users/helloyeew/CLionProjects/algo-lab/main.cpp

CMakeFiles/algo_lab.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/algo_lab.dir/main.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/helloyeew/CLionProjects/algo-lab/main.cpp > CMakeFiles/algo_lab.dir/main.cpp.i

CMakeFiles/algo_lab.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/algo_lab.dir/main.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/helloyeew/CLionProjects/algo-lab/main.cpp -o CMakeFiles/algo_lab.dir/main.cpp.s

# Object files for target algo_lab
algo_lab_OBJECTS = \
"CMakeFiles/algo_lab.dir/main.cpp.o"

# External object files for target algo_lab
algo_lab_EXTERNAL_OBJECTS =

algo_lab: CMakeFiles/algo_lab.dir/main.cpp.o
algo_lab: CMakeFiles/algo_lab.dir/build.make
algo_lab: CMakeFiles/algo_lab.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/helloyeew/CLionProjects/algo-lab/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable algo_lab"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/algo_lab.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/algo_lab.dir/build: algo_lab
.PHONY : CMakeFiles/algo_lab.dir/build

CMakeFiles/algo_lab.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/algo_lab.dir/cmake_clean.cmake
.PHONY : CMakeFiles/algo_lab.dir/clean

CMakeFiles/algo_lab.dir/depend:
	cd /Users/helloyeew/CLionProjects/algo-lab/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/helloyeew/CLionProjects/algo-lab /Users/helloyeew/CLionProjects/algo-lab /Users/helloyeew/CLionProjects/algo-lab/build /Users/helloyeew/CLionProjects/algo-lab/build /Users/helloyeew/CLionProjects/algo-lab/build/CMakeFiles/algo_lab.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/algo_lab.dir/depend


# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/karen/Desktop/Hariprasath_R.S/MCA/4th Semester/Operating System/Lab/Scheduling Algorithms"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/karen/Desktop/Hariprasath_R.S/MCA/4th Semester/Operating System/Lab/Scheduling Algorithms/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Scheduling_Algorithms.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Scheduling_Algorithms.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Scheduling_Algorithms.dir/flags.make

CMakeFiles/Scheduling_Algorithms.dir/main.c.o: CMakeFiles/Scheduling_Algorithms.dir/flags.make
CMakeFiles/Scheduling_Algorithms.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/karen/Desktop/Hariprasath_R.S/MCA/4th Semester/Operating System/Lab/Scheduling Algorithms/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Scheduling_Algorithms.dir/main.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Scheduling_Algorithms.dir/main.c.o   -c "/Users/karen/Desktop/Hariprasath_R.S/MCA/4th Semester/Operating System/Lab/Scheduling Algorithms/main.c"

CMakeFiles/Scheduling_Algorithms.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Scheduling_Algorithms.dir/main.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/karen/Desktop/Hariprasath_R.S/MCA/4th Semester/Operating System/Lab/Scheduling Algorithms/main.c" > CMakeFiles/Scheduling_Algorithms.dir/main.c.i

CMakeFiles/Scheduling_Algorithms.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Scheduling_Algorithms.dir/main.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/karen/Desktop/Hariprasath_R.S/MCA/4th Semester/Operating System/Lab/Scheduling Algorithms/main.c" -o CMakeFiles/Scheduling_Algorithms.dir/main.c.s

# Object files for target Scheduling_Algorithms
Scheduling_Algorithms_OBJECTS = \
"CMakeFiles/Scheduling_Algorithms.dir/main.c.o"

# External object files for target Scheduling_Algorithms
Scheduling_Algorithms_EXTERNAL_OBJECTS =

Scheduling_Algorithms: CMakeFiles/Scheduling_Algorithms.dir/main.c.o
Scheduling_Algorithms: CMakeFiles/Scheduling_Algorithms.dir/build.make
Scheduling_Algorithms: CMakeFiles/Scheduling_Algorithms.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/karen/Desktop/Hariprasath_R.S/MCA/4th Semester/Operating System/Lab/Scheduling Algorithms/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Scheduling_Algorithms"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Scheduling_Algorithms.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Scheduling_Algorithms.dir/build: Scheduling_Algorithms

.PHONY : CMakeFiles/Scheduling_Algorithms.dir/build

CMakeFiles/Scheduling_Algorithms.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Scheduling_Algorithms.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Scheduling_Algorithms.dir/clean

CMakeFiles/Scheduling_Algorithms.dir/depend:
	cd "/Users/karen/Desktop/Hariprasath_R.S/MCA/4th Semester/Operating System/Lab/Scheduling Algorithms/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/karen/Desktop/Hariprasath_R.S/MCA/4th Semester/Operating System/Lab/Scheduling Algorithms" "/Users/karen/Desktop/Hariprasath_R.S/MCA/4th Semester/Operating System/Lab/Scheduling Algorithms" "/Users/karen/Desktop/Hariprasath_R.S/MCA/4th Semester/Operating System/Lab/Scheduling Algorithms/cmake-build-debug" "/Users/karen/Desktop/Hariprasath_R.S/MCA/4th Semester/Operating System/Lab/Scheduling Algorithms/cmake-build-debug" "/Users/karen/Desktop/Hariprasath_R.S/MCA/4th Semester/Operating System/Lab/Scheduling Algorithms/cmake-build-debug/CMakeFiles/Scheduling_Algorithms.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Scheduling_Algorithms.dir/depend

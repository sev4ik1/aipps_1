# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/misha/C++/AIPPS/AIPPS2.0

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/misha/C++/AIPPS/AIPPS2.0/tmp

# Include any dependencies generated for this target.
include CMakeFiles/State_Bi_f_L.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/State_Bi_f_L.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/State_Bi_f_L.dir/flags.make

CMakeFiles/State_Bi_f_L.dir/Coder.cpp.o: CMakeFiles/State_Bi_f_L.dir/flags.make
CMakeFiles/State_Bi_f_L.dir/Coder.cpp.o: ../Coder.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/misha/C++/AIPPS/AIPPS2.0/tmp/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/State_Bi_f_L.dir/Coder.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/State_Bi_f_L.dir/Coder.cpp.o -c /home/misha/C++/AIPPS/AIPPS2.0/Coder.cpp

CMakeFiles/State_Bi_f_L.dir/Coder.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/State_Bi_f_L.dir/Coder.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/misha/C++/AIPPS/AIPPS2.0/Coder.cpp > CMakeFiles/State_Bi_f_L.dir/Coder.cpp.i

CMakeFiles/State_Bi_f_L.dir/Coder.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/State_Bi_f_L.dir/Coder.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/misha/C++/AIPPS/AIPPS2.0/Coder.cpp -o CMakeFiles/State_Bi_f_L.dir/Coder.cpp.s

CMakeFiles/State_Bi_f_L.dir/Coder.cpp.o.requires:
.PHONY : CMakeFiles/State_Bi_f_L.dir/Coder.cpp.o.requires

CMakeFiles/State_Bi_f_L.dir/Coder.cpp.o.provides: CMakeFiles/State_Bi_f_L.dir/Coder.cpp.o.requires
	$(MAKE) -f CMakeFiles/State_Bi_f_L.dir/build.make CMakeFiles/State_Bi_f_L.dir/Coder.cpp.o.provides.build
.PHONY : CMakeFiles/State_Bi_f_L.dir/Coder.cpp.o.provides

CMakeFiles/State_Bi_f_L.dir/Coder.cpp.o.provides.build: CMakeFiles/State_Bi_f_L.dir/Coder.cpp.o

# Object files for target State_Bi_f_L
State_Bi_f_L_OBJECTS = \
"CMakeFiles/State_Bi_f_L.dir/Coder.cpp.o"

# External object files for target State_Bi_f_L
State_Bi_f_L_EXTERNAL_OBJECTS =

libState_Bi_f_L.a: CMakeFiles/State_Bi_f_L.dir/Coder.cpp.o
libState_Bi_f_L.a: CMakeFiles/State_Bi_f_L.dir/build.make
libState_Bi_f_L.a: CMakeFiles/State_Bi_f_L.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX static library libState_Bi_f_L.a"
	$(CMAKE_COMMAND) -P CMakeFiles/State_Bi_f_L.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/State_Bi_f_L.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/State_Bi_f_L.dir/build: libState_Bi_f_L.a
.PHONY : CMakeFiles/State_Bi_f_L.dir/build

CMakeFiles/State_Bi_f_L.dir/requires: CMakeFiles/State_Bi_f_L.dir/Coder.cpp.o.requires
.PHONY : CMakeFiles/State_Bi_f_L.dir/requires

CMakeFiles/State_Bi_f_L.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/State_Bi_f_L.dir/cmake_clean.cmake
.PHONY : CMakeFiles/State_Bi_f_L.dir/clean

CMakeFiles/State_Bi_f_L.dir/depend:
	cd /home/misha/C++/AIPPS/AIPPS2.0/tmp && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/misha/C++/AIPPS/AIPPS2.0 /home/misha/C++/AIPPS/AIPPS2.0 /home/misha/C++/AIPPS/AIPPS2.0/tmp /home/misha/C++/AIPPS/AIPPS2.0/tmp /home/misha/C++/AIPPS/AIPPS2.0/tmp/CMakeFiles/State_Bi_f_L.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/State_Bi_f_L.dir/depend


# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/andrey/Projects/CPP_modules

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/andrey/Projects/CPP_modules/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CPP_modules.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/CPP_modules.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CPP_modules.dir/flags.make

CMakeFiles/CPP_modules.dir/main.cpp.o: CMakeFiles/CPP_modules.dir/flags.make
CMakeFiles/CPP_modules.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/andrey/Projects/CPP_modules/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CPP_modules.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CPP_modules.dir/main.cpp.o -c /Users/andrey/Projects/CPP_modules/main.cpp

CMakeFiles/CPP_modules.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CPP_modules.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/andrey/Projects/CPP_modules/main.cpp > CMakeFiles/CPP_modules.dir/main.cpp.i

CMakeFiles/CPP_modules.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CPP_modules.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/andrey/Projects/CPP_modules/main.cpp -o CMakeFiles/CPP_modules.dir/main.cpp.s

# Object files for target CPP_modules
CPP_modules_OBJECTS = \
"CMakeFiles/CPP_modules.dir/main.cpp.o"

# External object files for target CPP_modules
CPP_modules_EXTERNAL_OBJECTS =

CPP_modules: CMakeFiles/CPP_modules.dir/main.cpp.o
CPP_modules: CMakeFiles/CPP_modules.dir/build.make
CPP_modules: CMakeFiles/CPP_modules.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/andrey/Projects/CPP_modules/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CPP_modules"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CPP_modules.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CPP_modules.dir/build: CPP_modules
.PHONY : CMakeFiles/CPP_modules.dir/build

CMakeFiles/CPP_modules.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CPP_modules.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CPP_modules.dir/clean

CMakeFiles/CPP_modules.dir/depend:
	cd /Users/andrey/Projects/CPP_modules/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/andrey/Projects/CPP_modules /Users/andrey/Projects/CPP_modules /Users/andrey/Projects/CPP_modules/cmake-build-debug /Users/andrey/Projects/CPP_modules/cmake-build-debug /Users/andrey/Projects/CPP_modules/cmake-build-debug/CMakeFiles/CPP_modules.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CPP_modules.dir/depend


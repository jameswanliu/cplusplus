# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\Program Files\JetBrains\CLion 2019.2.5\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Program Files\JetBrains\CLion 2019.2.5\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Users\kevin\cworkspace\c_plus\cplusplus

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Users\kevin\cworkspace\c_plus\cplusplus\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/friend.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/friend.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/friend.dir/flags.make

CMakeFiles/friend.dir/friend/friends.cpp.obj: CMakeFiles/friend.dir/flags.make
CMakeFiles/friend.dir/friend/friends.cpp.obj: ../friend/friends.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Users\kevin\cworkspace\c_plus\cplusplus\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/friend.dir/friend/friends.cpp.obj"
	"D:\Program Files\JetBrains\mingw64\bin\g++.exe"  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\friend.dir\friend\friends.cpp.obj -c D:\Users\kevin\cworkspace\c_plus\cplusplus\friend\friends.cpp

CMakeFiles/friend.dir/friend/friends.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/friend.dir/friend/friends.cpp.i"
	"D:\Program Files\JetBrains\mingw64\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Users\kevin\cworkspace\c_plus\cplusplus\friend\friends.cpp > CMakeFiles\friend.dir\friend\friends.cpp.i

CMakeFiles/friend.dir/friend/friends.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/friend.dir/friend/friends.cpp.s"
	"D:\Program Files\JetBrains\mingw64\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Users\kevin\cworkspace\c_plus\cplusplus\friend\friends.cpp -o CMakeFiles\friend.dir\friend\friends.cpp.s

# Object files for target friend
friend_OBJECTS = \
"CMakeFiles/friend.dir/friend/friends.cpp.obj"

# External object files for target friend
friend_EXTERNAL_OBJECTS =

friend.exe: CMakeFiles/friend.dir/friend/friends.cpp.obj
friend.exe: CMakeFiles/friend.dir/build.make
friend.exe: CMakeFiles/friend.dir/linklibs.rsp
friend.exe: CMakeFiles/friend.dir/objects1.rsp
friend.exe: CMakeFiles/friend.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Users\kevin\cworkspace\c_plus\cplusplus\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable friend.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\friend.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/friend.dir/build: friend.exe

.PHONY : CMakeFiles/friend.dir/build

CMakeFiles/friend.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\friend.dir\cmake_clean.cmake
.PHONY : CMakeFiles/friend.dir/clean

CMakeFiles/friend.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Users\kevin\cworkspace\c_plus\cplusplus D:\Users\kevin\cworkspace\c_plus\cplusplus D:\Users\kevin\cworkspace\c_plus\cplusplus\cmake-build-debug D:\Users\kevin\cworkspace\c_plus\cplusplus\cmake-build-debug D:\Users\kevin\cworkspace\c_plus\cplusplus\cmake-build-debug\CMakeFiles\friend.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/friend.dir/depend


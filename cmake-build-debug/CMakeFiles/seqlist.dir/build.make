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
include CMakeFiles/seqlist.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/seqlist.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/seqlist.dir/flags.make

CMakeFiles/seqlist.dir/Seqlist.cpp.obj: CMakeFiles/seqlist.dir/flags.make
CMakeFiles/seqlist.dir/Seqlist.cpp.obj: ../Seqlist.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Users\kevin\cworkspace\c_plus\cplusplus\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/seqlist.dir/Seqlist.cpp.obj"
	"D:\Program Files\JetBrains\mingw64\bin\g++.exe"  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\seqlist.dir\Seqlist.cpp.obj -c D:\Users\kevin\cworkspace\c_plus\cplusplus\Seqlist.cpp

CMakeFiles/seqlist.dir/Seqlist.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/seqlist.dir/Seqlist.cpp.i"
	"D:\Program Files\JetBrains\mingw64\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Users\kevin\cworkspace\c_plus\cplusplus\Seqlist.cpp > CMakeFiles\seqlist.dir\Seqlist.cpp.i

CMakeFiles/seqlist.dir/Seqlist.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/seqlist.dir/Seqlist.cpp.s"
	"D:\Program Files\JetBrains\mingw64\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Users\kevin\cworkspace\c_plus\cplusplus\Seqlist.cpp -o CMakeFiles\seqlist.dir\Seqlist.cpp.s

# Object files for target seqlist
seqlist_OBJECTS = \
"CMakeFiles/seqlist.dir/Seqlist.cpp.obj"

# External object files for target seqlist
seqlist_EXTERNAL_OBJECTS =

seqlist.exe: CMakeFiles/seqlist.dir/Seqlist.cpp.obj
seqlist.exe: CMakeFiles/seqlist.dir/build.make
seqlist.exe: CMakeFiles/seqlist.dir/linklibs.rsp
seqlist.exe: CMakeFiles/seqlist.dir/objects1.rsp
seqlist.exe: CMakeFiles/seqlist.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Users\kevin\cworkspace\c_plus\cplusplus\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable seqlist.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\seqlist.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/seqlist.dir/build: seqlist.exe

.PHONY : CMakeFiles/seqlist.dir/build

CMakeFiles/seqlist.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\seqlist.dir\cmake_clean.cmake
.PHONY : CMakeFiles/seqlist.dir/clean

CMakeFiles/seqlist.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Users\kevin\cworkspace\c_plus\cplusplus D:\Users\kevin\cworkspace\c_plus\cplusplus D:\Users\kevin\cworkspace\c_plus\cplusplus\cmake-build-debug D:\Users\kevin\cworkspace\c_plus\cplusplus\cmake-build-debug D:\Users\kevin\cworkspace\c_plus\cplusplus\cmake-build-debug\CMakeFiles\seqlist.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/seqlist.dir/depend


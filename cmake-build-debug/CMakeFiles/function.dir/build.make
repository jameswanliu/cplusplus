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
include CMakeFiles/function.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/function.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/function.dir/flags.make

CMakeFiles/function.dir/Funtion.cpp.obj: CMakeFiles/function.dir/flags.make
CMakeFiles/function.dir/Funtion.cpp.obj: ../Funtion.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Users\kevin\cworkspace\c_plus\cplusplus\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/function.dir/Funtion.cpp.obj"
	"D:\Program Files\JetBrains\mingw64\bin\g++.exe"  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\function.dir\Funtion.cpp.obj -c D:\Users\kevin\cworkspace\c_plus\cplusplus\Funtion.cpp

CMakeFiles/function.dir/Funtion.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/function.dir/Funtion.cpp.i"
	"D:\Program Files\JetBrains\mingw64\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Users\kevin\cworkspace\c_plus\cplusplus\Funtion.cpp > CMakeFiles\function.dir\Funtion.cpp.i

CMakeFiles/function.dir/Funtion.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/function.dir/Funtion.cpp.s"
	"D:\Program Files\JetBrains\mingw64\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Users\kevin\cworkspace\c_plus\cplusplus\Funtion.cpp -o CMakeFiles\function.dir\Funtion.cpp.s

# Object files for target function
function_OBJECTS = \
"CMakeFiles/function.dir/Funtion.cpp.obj"

# External object files for target function
function_EXTERNAL_OBJECTS =

function.exe: CMakeFiles/function.dir/Funtion.cpp.obj
function.exe: CMakeFiles/function.dir/build.make
function.exe: CMakeFiles/function.dir/linklibs.rsp
function.exe: CMakeFiles/function.dir/objects1.rsp
function.exe: CMakeFiles/function.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Users\kevin\cworkspace\c_plus\cplusplus\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable function.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\function.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/function.dir/build: function.exe

.PHONY : CMakeFiles/function.dir/build

CMakeFiles/function.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\function.dir\cmake_clean.cmake
.PHONY : CMakeFiles/function.dir/clean

CMakeFiles/function.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Users\kevin\cworkspace\c_plus\cplusplus D:\Users\kevin\cworkspace\c_plus\cplusplus D:\Users\kevin\cworkspace\c_plus\cplusplus\cmake-build-debug D:\Users\kevin\cworkspace\c_plus\cplusplus\cmake-build-debug D:\Users\kevin\cworkspace\c_plus\cplusplus\cmake-build-debug\CMakeFiles\function.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/function.dir/depend


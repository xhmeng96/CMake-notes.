cmake_minimum_required(VERSION 3.10)

# set cpp std version
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# project name and version
project(001, VERSION 1.0)

add_subdirectory(blah)
find_package(SFML 2 REQUIRED network audio graphics window system)

# find all .cpp files, as SRC_FILES
file(GLOB_RECURSE SRC_FILES src/*.cpp)
# add executable files to the build process
add_executable(001 main.cpp ${SRC_FILES})

# add include path
target_include_directories(001 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include ${SFML_INCLUDE_DIR})
# link libraries
target_link_libraries(001 PUBLIC blah ${SFML_LIBRARIES} ${SFML_DEPENDENCIES})
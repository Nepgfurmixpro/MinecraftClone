# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

project (mcclone)

find_package(glfw3 CONFIG REQUIRED)
target_link_libraries(mcclone PRIVATE glfw)

find_package(glm CONFIG REQUIRED)
target_link_libraries(mcclone PRIVATE glm::glm)

find_package(SFML COMPONENTS system window graphics CONFIG REQUIRED)
target_link_libraries(mcclone PRIVATE sfml-system-s sfml-graphics-s sfml-window-s)

file(GLOB SOURCES "./src/*.cpp")

include_directories("./src")

add_executable(mcclone ${SOURCES})
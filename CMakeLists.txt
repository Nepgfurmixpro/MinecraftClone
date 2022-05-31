cmake_minimum_required (VERSION 3.8)

project (mcclone)

find_package(glfw3 CONFIG REQUIRED)
find_package(glm CONFIG REQUIRED)
find_path(STB_INCLUDE_DIRS "stb_image.h")

find_package(SFML COMPONENTS system window CONFIG REQUIRED)

file(GLOB SRCS "${PROJECT_SOURCE_DIR}/src/*.cpp")
include_directories("./src")

add_executable(${PROJECT_NAME} ${SRCS} "src/renderer.hpp" "src/renderer.cpp")

target_link_libraries(${PROJECT_NAME} PRIVATE glfw)
target_link_libraries(${PROJECT_NAME} PRIVATE PRIVATE glm::glm)
target_link_libraries(${PROJECT_NAME} PRIVATE sfml-system sfml-window)

target_include_directories(${PROJECT_NAME} PRIVATE ${STB_INCLUDE_DIRS})
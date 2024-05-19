cmake_minimum_required(VERSION 3.22)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Set include paths for TemplateGenerator
set(TEMPLATE_INCLUDE_PATH
    ${CMAKE_CURRENT_SOURCE_DIR}/TemplateGenerator/templates/template.h)
set(TEMPLATE_SRC_PATH
    ${CMAKE_CURRENT_SOURCE_DIR}/TemplateGenerator/templates/template.cpp)
set(EASY_INCLUDE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/Problems/Easy/include)
set(MEDIUM_INCLUDE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/Problems/Medium/include)
set(HARD_INCLUDE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/Problems/Hard/include)
set(EASY_SRC_PATH ${CMAKE_CURRENT_SOURCE_DIR}/Problems/Easy/src)
set(MEDIUM_SRC_PATH ${CMAKE_CURRENT_SOURCE_DIR}/Problems/Medium/src)
set(HARD_SRC_PATH ${CMAKE_CURRENT_SOURCE_DIR}/Problems/Hard/src)

project(app)

add_subdirectory(Problems)
add_subdirectory(Tests)
add_subdirectory(TemplateGenerator)

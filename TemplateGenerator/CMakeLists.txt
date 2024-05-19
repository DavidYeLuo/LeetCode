project(TemplateGenerator)

add_executable(TemplateGenerator)

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/include/TemplateGenerator.h.in)
target_sources(TemplateGenerator
               PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp)
target_include_directories(TemplateGenerator
                           PUBLIC ${CMAKE_CURRENT_BINARY_DIR}/include/)

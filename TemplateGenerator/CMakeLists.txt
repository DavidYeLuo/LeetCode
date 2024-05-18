project(TemplateGenerator)

add_executable(TemplateGenerator)

target_sources(TemplateGenerator
               PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp)
target_include_directories(TemplateGenerator
                           PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include/)

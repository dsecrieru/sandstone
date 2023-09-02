project(sandstone VERSION 0.0.1 DESCRIPTION "sandstone game engine")

if (MSVC)
    set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
endif()

add_library(${PROJECT_NAME} SHARED)

set_target_properties(${PROJECT_NAME} PROPERTIES VERSION ${PROJECT_VERSION})
set_target_properties(${PROJECT_NAME} PROPERTIES SOVERSION ${PROJECT_VERSION_MAJOR})
target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_20)

add_subdirectory(src/sandstone/core)

install(TARGETS ${PROJECT_NAME} FILE_SET HEADERS)
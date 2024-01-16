project(sandstone VERSION 0.0.1 DESCRIPTION "sandstone game engine")

if (MSVC)
    set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
endif()

include(FetchContent)

FetchContent_Declare(
        spdlog
        GIT_REPOSITORY https://github.com/gabime/spdlog.git
        GIT_TAG v1.13.0
)
set(SPDLOG_BUILD_STATIC ON)
FetchContent_MakeAvailable(spdlog)

add_library(${PROJECT_NAME} SHARED)

set_target_properties(${PROJECT_NAME} PROPERTIES VERSION ${PROJECT_VERSION})
set_target_properties(${PROJECT_NAME} PROPERTIES SOVERSION ${PROJECT_VERSION_MAJOR})
target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_20)
target_include_directories(${PROJECT_NAME} PUBLIC ${spdlog_SOURCE_DIR}/include)
target_link_libraries(${PROJECT_NAME} PRIVATE spdlog::spdlog)

add_subdirectory(src/sandstone)

install(TARGETS ${PROJECT_NAME} FILE_SET HEADERS)
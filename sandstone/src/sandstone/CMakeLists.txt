target_sources(sandstone
        PUBLIC FILE_SET HEADERS
        BASE_DIRS ..
        FILES sandstone.hpp
)

add_subdirectory(core)
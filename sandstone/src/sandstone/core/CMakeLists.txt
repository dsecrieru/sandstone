target_sources(sandstone
        PRIVATE application.cpp
        PUBLIC FILE_SET HEADERS
        BASE_DIRS ../..
        FILES application.hpp entry_point.hpp
)
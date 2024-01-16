target_sources(sandstone
        PUBLIC application.cpp log.cpp
        PUBLIC FILE_SET HEADERS
        BASE_DIRS ../..
        FILES application.hpp entry_point.hpp log.hpp
)
add_executable(quarry
        src/quarry_app.cpp
)
target_compile_features(quarry PRIVATE cxx_std_20)
target_link_libraries(quarry PRIVATE sandstone)
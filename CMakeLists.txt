add_library(uwrt-mars-rover-hw-bridge STATIC)
target_sources(uwrt-mars-rover-hw-bridge PRIVATE src/hw_bridge.cpp)
target_include_directories(uwrt-mars-rover-hw-bridge PUBLIC include)

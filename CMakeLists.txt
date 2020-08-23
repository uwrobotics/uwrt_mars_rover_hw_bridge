add_library(uwrt-mars-rover-hw-bridge)
target_sources(uwrt-mars-rover-hw-bridge PRIVATE src/hw_bridge.cpp)
target_include_directories(uwrt-mars-rover-hw-bridge PUBLIC include)

# This needs to be here instead of in uwrt_mars_rover_hw_bridge ROS pkg because of older version of CMake included with Ubuntu 18.04
if(DEFINED CATKIN_GLOBAL_BIN_DESTINATION) # Detects if being built in a catkin context
    ## Mark libraries for installation
    install(TARGETS
            uwrt-mars-rover-hw-bridge
            ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
            LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
            RUNTIME DESTINATION ${CATKIN_GLOBAL_BIN_DESTINATION}
            )

    ## Mark cpp header files for installation
    install(DIRECTORY
            include/uwrt_mars_rover_hw_bridge/
            DESTINATION ${CATKIN_PACKAGE_INCLUDE_DESTINATION}
            FILES_MATCHING
            PATTERN "*.h"
            PATTERN "*.hpp"
            PATTERN ".svn" EXCLUDE
            )
endif()


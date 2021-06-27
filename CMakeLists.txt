add_library(uwrt-mars-rover-hw-bridge)
target_sources(uwrt-mars-rover-hw-bridge 
    PRIVATE 
    src/hw_bridge.cpp 
    can/CANMsgMap.cpp 
    can/generated/uwrt_mars_rover_can_wrapper.cpp
    can/generated/uwrt_mars_rover_can.c
    )

target_include_directories(uwrt-mars-rover-hw-bridge 
    PUBLIC 
    include 
    can 
    can/generated
    )

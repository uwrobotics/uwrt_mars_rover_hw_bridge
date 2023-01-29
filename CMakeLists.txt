cmake_minimum_required(VERSION 3.8)
project(uwrt_mars_rover_hw_bridge)

if ("$ENV{TARGET}" MATCHES "2021$")
set(YEAR 2021)
elseif ("ENV{TARGET}" MATCHES "2022$")
set(YEAR 2022)
else ()
set(YEAR 2021) # default year to 2021
endif ()

if(NOT CMAKE_CXX_STANDARD)
    set(CMAKE_CXX_STANDARD 20)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_components REQUIRED)

add_library(uwrt-mars-rover-hw-bridge
    src/hw_bridge.cpp
    can/CANMsgMap.cpp
    can/generated_${YEAR}/uwrt_mars_rover_can_wrapper.cpp
    can/generated_${YEAR}/uwrt_mars_rover_can.c
    )

install(TARGETS
    uwrt-mars-rover-hw-bridge
    DESTINATION lib/${PROJECT_NAME}
    )

target_include_directories(uwrt-mars-rover-hw-bridge PUBLIC
    include/uwrt_mars_rover_utils
    can
    can/generated_${YEAR}
    )

ament_package()

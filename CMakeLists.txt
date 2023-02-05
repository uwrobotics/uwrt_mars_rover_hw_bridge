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



add_library(${PROJECT_NAME}_lib)

target_sources(${PROJECT_NAME}_lib PRIVATE
    src/hw_bridge.cpp
    can/CANMsgMap.cpp
    # can/CANMsgMap.h
    can/generated_${YEAR}/uwrt_mars_rover_can_wrapper.cpp
    # can/generated_${YEAR}/uwrt_mars_rover_can_wrapper.h
    can/generated_${YEAR}/uwrt_mars_rover_can.c
    # can/generated_${YEAR}/uwrt_mars_rover_can.h
    # can/generated_${YEAR}/uwrt_mars_rover_can_enums.h
    )

target_include_directories(${PROJECT_NAME}_lib PUBLIC
    include/uwrt_mars_rover_utils
    can
    can/generated_${YEAR}
    )


ament_export_targets(${PROJECT_NAME}_lib HAS_LIBRARY_TARGET)

ament_export_include_directories(
    include
    include/uwrt_mars_rover_utils
    can
    can/generated_${YEAR}
)

# Install the include directories: can, can/generated_${YEAR}, include, include/uwrt_mars_rover_utils
# install(
#     DIRECTORY can
#     DESTINATION include
# )
# 
# install(
#     DIRECTORY include
#     DESTINATION include
# )
# 
# install(
#     DIRECTORY can/generated_${YEAR}
#     DESTINATION include
# )

install(TARGETS ${PROJECT_NAME}_lib
    EXPORT ${PROJECT_NAME}_lib
    RUNTIME DESTINATION lib
    ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib
    # INCLUDES DESTINATION include
    )


ament_package()

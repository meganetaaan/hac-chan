cmake_minimum_required(VERSION 3.10)

# set the project name and version
project(hac_chan VERSION 0.1)

# debug
set(CMAKE_VERBOSE_MAKEFILE TRUE)

# output directory
set(EXECUTABLE_OUTPUT_PATH ./bin)
set(LIBRARY_OUTPUT_PATH ./bin)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(max_e1_dir ./external/max_e1_apps/max_e1_lib/)
set(unitv2_framework_dir ./external/UnitV2Framework/)
set(dynamixel_lib_name dxl_sbc_cpp)

message("add directories")
include_directories(./include)
include_directories(${max_e1_dir}/include)
link_directories(${max_e1_dir}/build)

link_directories(${dynamixel_install_dir}/lib)

include_directories(${unitv2_framework_dir}/include)
link_directories(${unitv2_framework_dir}/lib)

message("add_executables")
add_executable(main src/main.cpp)
target_link_libraries(main max_e1 ${dynamixel_lib_name})
target_compile_options(main PRIVATE "-Wall")

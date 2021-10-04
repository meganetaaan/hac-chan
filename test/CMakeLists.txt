# requirement of cmake version
cmake_minimum_required(VERSION 3.5)

project(opencv_examples)

find_package(OpenCV REQUIRED)
include_directories(
    ${OpenCV_INCLUDE_DIRS}
)
 
##実行ファイル名を設定
add_executable(test_opencv ./src/test_opencv.cpp)
 
##リンクするライブラリを読み込む
target_link_libraries(
    test_opencv ${OpenCV_LIBRARIES}
)

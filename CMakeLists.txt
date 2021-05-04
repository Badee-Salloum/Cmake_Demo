cmake_minimum_required(VERSION 3.13)
project(cmake-demo)

# https://doc.qt.io/qt-5/cmake-get-started.html

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# process CMakeLists.txt file located in the AddLib directory
add_subdirectory(AddLib)


find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(cmake-demo WIN32 main.cpp resources.qrc)


set_target_properties(
    cmake-demo
    PROPERTIES
        AUTOMOC ON
        AUTORCC ON
        AUTOUIC ON
)

target_link_libraries(cmake-demo Qt5::Widgets add-lib)

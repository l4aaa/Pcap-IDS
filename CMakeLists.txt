cmake_minimum_required(VERSION 3.10)
project(MiniIDS)

set(CMAKE_CXX_STANDARD 11)

find_package(PcapPlusPlus REQUIRED)

add_executable(MiniIDS main.cpp)

target_link_libraries(MiniIDS PcapPlusPlus::PcapPlusPlus)
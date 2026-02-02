cmake_minimum_required(VERSION 3.10)
project(Pcap-IDS)

# Use C++11 for PcapPlusPlus compatibility
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 1. Define the Homebrew directory we found earlier
set(HOMEBREW_PREFIX "/home/linuxbrew/.linuxbrew")
set(PCPP_VERSION "25.05") # Match the version from your 'find' command

# 2. Tell CMake where to look for the PcapPlusPlus Config
list(APPEND CMAKE_PREFIX_PATH "${HOMEBREW_PREFIX}")

# 3. Find the required packages
find_package(PcapPlusPlus REQUIRED)

# 4. Define the executable
add_executable(Pcap-IDS main.cpp)

# 5. Fix the Header/Include issue
# We point to the specific Cellar directory you found to resolve the 'fatal error'
target_include_directories(Pcap-IDS PRIVATE 
    "${HOMEBREW_PREFIX}/Cellar/pcapplusplus/${PCPP_VERSION}/include/pcapplusplus"
    "${PcapPlusPlus_INCLUDE_DIRS}"
)

# 6. Link libraries
# This includes PcapPlusPlus and its dependency, libpcap
target_link_libraries(Pcap-IDS 
    "${HOMEBREW_PREFIX}/lib/libPcap++.a"
    "${HOMEBREW_PREFIX}/lib/libPacket++.a"
    "${HOMEBREW_PREFIX}/lib/libCommon++.a"
    pcap 
    pthread
)

# 7. Print status (Helpful for debugging)
message(STATUS "PcapPlusPlus include dirs: ${PcapPlusPlus_INCLUDE_DIRS}")
message(STATUS "PcapPlusPlus libraries: ${PcapPlusPlus_LIBRARIES}")
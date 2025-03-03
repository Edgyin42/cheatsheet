cmake_minimum_required(VERSION 3.10)

project(Bomberman)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

# Find SFML 3 (pre-release/development version)
find_package(SFML 3 REQUIRED COMPONENTS Graphics Audio Network)  # Correct version number!

# Add the executable
add_executable(Bomberman main.cpp game.cpp map.cpp)

# Link using imported targets (best practice)
target_link_libraries(Bomberman PRIVATE SFML::Graphics SFML::Audio SFML::Network)
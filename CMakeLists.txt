cmake_minimum_required (VERSION 3.8)
set (This Algorithms)
project($(This) C CXX)
set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)
enable_testing()
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
#add_subdirectory (googletest)
add_subdirectory (Algorithms)

# Add source to this project's executable.
add_executable ( main main.cpp)

#target_link_libraries(main BackTracking BranchAndBound BruteForce DivideAndCoquer DynamicProgramming GreedyApproach PruneAndSearch)
target_link_libraries(main BinarySearch)

# TODO: Add tests and install targets if needed.
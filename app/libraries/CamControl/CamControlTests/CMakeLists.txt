#--------------------------------------------------------
# CMake for generating CamControlLib Testing Suite
#
# @author: Wild Boar
#
# Date Created: 2024-05-22
#--------------------------------------------------------

# Add Google Test to the test group
find_package(GTest REQUIRED)

# Add include directory
include_directories( "../" )

# Create the executable
add_executable (CamControlTests
	Tests/SheenCam_Tests.cpp
)

target_link_libraries(CamControlTests CamControlLib GTest::Main)

# Find the associated unit tests
gtest_discover_tests(CamControlTests)
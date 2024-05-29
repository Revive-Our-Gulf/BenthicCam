#--------------------------------------------------------
# CMake for generating the CamControlLib
#
# @author: Wild Boar
#
# Date Created: 2024-05-22
#--------------------------------------------------------

# Create Library
add_library (CamControlLib SHARED
	SheenCam.cpp
	CameraFactory.cpp
)


# Add link libraries
target_link_libraries(CamControlLib cpp-httplib)

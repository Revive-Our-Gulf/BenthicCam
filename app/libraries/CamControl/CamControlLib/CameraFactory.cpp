//--------------------------------------------------
// Implementation of class CameraFactory
//
// @author: Wild Boar
//
// @date: 2024-05-22
//--------------------------------------------------

#include "CameraFactory.h"
using namespace NVL_App;

//--------------------------------------------------
// Factory
//--------------------------------------------------

/**
 * @brief Create a camera controller for my given camera
 * @param name The name of the camera that we want
 * @return Camera * Returns a Camera *
 */
Camera * CameraFactory::Create(const string& name)
{
	if (name == "sheen") return new SheenCam();
	throw runtime_error("Unknown Camera: " + name);
}
//--------------------------------------------------
// Retrieves the camera controller for the given camera
//
// @author: Wild Boar
//
// @date: 2024-05-22
//--------------------------------------------------

#pragma once

#include <iostream>
using namespace std;

#include "Camera.h"
#include "SheenCam.h"

namespace NVL_App
{
	class CameraFactory
	{
		static Camera * Create(const string& name);
	};
}
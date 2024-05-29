//--------------------------------------------------
// A base class for abstracting cameras
//
// @author: Wild Boar
//
// @date: 2024-05-22
//--------------------------------------------------

#pragma once

#include <iostream>
using namespace std;

namespace NVL_App
{
	class Camera
	{
	public:
		Camera() {}

		virtual bool StartRecord() = 0;
		virtual bool StopRecord() = 0;
		virtual bool IsRecording() = 0;

		virtual void SetTime(const string& dateString) = 0;
		
		virtual void SaveState(const string& path) = 0;
	};
}

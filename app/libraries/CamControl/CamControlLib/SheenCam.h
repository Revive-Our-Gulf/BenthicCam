//--------------------------------------------------
// A wrapper for the Sheen Camera system
//
// @author: Wild Boar
//
// @date: 2024-05-22
//--------------------------------------------------

#pragma once

#include <chrono>
#include <iostream>
using namespace std;

#define CPPHTTPLIB_OPENSSL_SUPPORT
#include <httplib.h>

#include "Camera.h"

namespace NVL_App
{
	class SheenCam : public Camera
	{
	public:
		SheenCam();

		virtual bool StartRecord() override;
		virtual bool StopRecord() override;
		virtual bool IsRecording() override;

		virtual void SetTime(const string& dateString) override;

		virtual void SaveState(const string& path) override;
	};
}

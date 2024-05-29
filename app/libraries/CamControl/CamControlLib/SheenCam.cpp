//--------------------------------------------------
// Implementation of class SheenCam
//
// @author: Wild Boar
//
// @date: 2024-05-22
//--------------------------------------------------

#include "SheenCam.h"
using namespace NVL_App;

//--------------------------------------------------
// Constructors and Terminators
//--------------------------------------------------

/**
 * @brief Default Constructor
 */
SheenCam::SheenCam()
{
	throw runtime_error("Not implemented");
}

//--------------------------------------------------
// Recording
//--------------------------------------------------

/**
 * @brief Tells the camera to start recording
 * @return bool Returns a bool
 */
bool SheenCam::StartRecord()
{
	throw runtime_error("Not implemented");
}

/**
 * @brief Tells the camera to start recording
 * @return bool Returns a bool
 */
bool SheenCam::StopRecord()
{
	throw runtime_error("Not implemented");
}

/**
 * @brief Retrieve the recording status
 * @return bool Returns a bool
 */
bool SheenCam::IsRecording()
{
	throw runtime_error("Not implemented");
}

//--------------------------------------------------
// Set the time
//--------------------------------------------------

/**
 * Set the time on the camera
 * @param dateString The date string that we are using
*/
void SheenCam::SetTime(const string& dateString) 
{
	throw runtime_error("Not Implemented");
}

//--------------------------------------------------
// Logging
//--------------------------------------------------

/**
 * @brief Write elements of the camera state to disk
 * @param path The path that we are writing to
 */
void SheenCam::SaveState(const string& path)
{
	throw runtime_error("Not implemented");
}

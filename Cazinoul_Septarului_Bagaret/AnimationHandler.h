#pragma once
#include <iostream>
#include <windows.h>
#include "GlobalVariables.h"

using namespace std;

extern void IntroAnimation(int Iterations, int FirstFrameDelay, int FirstFrameTransitionDelay, int GeneralFrameDelay, int GeneralFrameTransitionDelay, int LastFrameDelay, int LastTransitionDelay, int ForeGroundColorIndex, int BackGroundColorIndex);
extern void LoadingAnimation(int Iterations, int delayFrames, int ForeGroundColorIndex, int BackGroundColorIndex);
extern void MatrixCreationAnimation(int Iterations, int delayFrames, int TransitionDelay);

class AnimationHandler
{
	
	//...
	
};


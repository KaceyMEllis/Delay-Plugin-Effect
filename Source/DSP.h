/*
  ==============================================================================

    DSP.h
    Created: 20 Aug 2026 12:05:32pm
    Author:  Kacey Ellis

  ==============================================================================
*/

//This file is to hold the panning DSP formula
#pragma once

#include <cmath>

inline void panningEqualPower(float panning, float& left, float& right)
{
    // Long number is pi/4
    float x  = 0.7853981633974483f * (panning + 1.0f);
    left = std::cos(x);
    right = std::sin(x);
}

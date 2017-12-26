#include "stdafx.h"
#include "Vessel.h"


Vessel::Vessel()
{
}

Vessel::Vessel(int volume)
{
	// check volume makes sense
	if (checkVolume(volume)) { m_volume = volume; }
}

int Vessel::getVolume()
{
	return m_volume;
}

void Vessel::setVolume(int volume)
{
	if (checkVolume(volume))
	{
		m_volume = volume;
	}
}


Vessel::~Vessel()
{
}

bool checkVolume(int volume)
{
	// check volume makes sense
	return volume > 0;
}
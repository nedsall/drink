#pragma once
class Vessel
{
public:
	Vessel();
	Vessel(int volume);
	int getVolume();
	void setVolume(int volume);
	~Vessel();

private:
	int m_volume; // volume in millilitres
};


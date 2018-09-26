#pragma once
#include "StageObject.h"
class Grass :
	public StageObject
{
private:
	int grassimg;
public:
	Grass();
	~Grass();

	void Draw();
	void Update();
	const char* GetTag();
};


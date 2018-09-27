#pragma once
#include "StageObject.h"
class Wood :
	public StageObject
{
private:
	int woodimg;
public:
	Wood();
	~Wood();

	void Draw();
	void Update();
	const char* GetTag();
};


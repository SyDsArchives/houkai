#pragma once
#include "Scene.h"
#include "Vector2D.h"

class GamePlayingScene :
	public Scene
{
private:
	int playerimg;
	Position2f playerpos;

	void Draw();
public:
	GamePlayingScene();
	~GamePlayingScene();
	void Update();
};


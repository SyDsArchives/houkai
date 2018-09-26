#include "GamePlayingScene.h"
#include "DxLib.h"
#include "Grass.h"



GamePlayingScene::GamePlayingScene():playerpos(400,300)
{
	playerimg = DxLib::LoadGraph(L"resource/charchipimg/player.png");
}


GamePlayingScene::~GamePlayingScene()
{
}

void GamePlayingScene::Draw()
{
	DrawRectRotaGraph2(playerpos.x, playerpos.y, 0, 0, 32, 32, 0, 0, 1, 0.f, playerimg, true, false, false);
}

void GamePlayingScene::Update()
{
	Grass g;
	g.Update();

	Draw();
}

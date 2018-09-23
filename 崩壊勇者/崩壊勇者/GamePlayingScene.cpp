#include "GamePlayingScene.h"
#include "DxLib.h"



GamePlayingScene::GamePlayingScene():playerpos(400,300)
{
	playerimg = DxLib::LoadGraph(L"resource/charchip/player.png");
}


GamePlayingScene::~GamePlayingScene()
{
}

void GamePlayingScene::Draw()
{
	DrawRectRotaGraph2(playerpos.x, playerpos.y, 0, 0, 32, 32, 0, 0, 1, 0.f, 
		playerimg, true, false, false);
}

void GamePlayingScene::Update()
{
	Draw();
}

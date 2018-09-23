#include "GameSystem.h"
#include "DxLib.h"
#include "Scene.h"

#include "GamePlayingScene.h"

const int window_width = 800;
const int window_height = 600;

GameSystem::GameSystem()
{
}


GameSystem::~GameSystem()
{
}

void GameSystem::ChangeScene(Scene* _scene)
{
	scene.reset(_scene);
}


void GameSystem::Run()
{
	DxLib::ChangeWindowMode(true);
	DxLib::SetGraphMode(window_width, window_height, 32);
	if (DxLib::DxLib_Init() == -1)
	{
		return;
	}
	SetWindowText(_T("•ö‰ó—EŽÒ"));
	SetDrawScreen(DX_SCREEN_BACK);

	//std::shared_ptr<Peripheral> peripheral;
	//peripheral = std::make_shared<Peripheral>();

	ChangeScene(new GamePlayingScene());



	while (DxLib::ProcessMessage() == 0)
	{
		ClearDrawScreen();
		if (CheckHitKey(KEY_INPUT_ESCAPE))
		{
			break;
		}

		//ŠO•”“ü—Íî•ñ‚ÌXV
		//peripheral->Update();

		scene->Update(/**peripheral*/);


		DxLib::ScreenFlip();
	}

}

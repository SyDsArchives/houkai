#include "Grass.h"
#include "DxLib.h"

const int imgposX = 0;
const int imgposY = 0;
const char* tag = "GRASS";

Grass::Grass()
{
	grassimg = DxLib::LoadGraph(L"resource/mapchipimg/mapchip.png");
}


Grass::~Grass()
{
}

void Grass::Draw()
{
	DxLib::DrawRectRotaGraph2(380, 300, imgposX, imgposY, 16, 16, 16, 16, 2.f, 0.f, grassimg, true, false, false);
}

void Grass::Update()
{
	Draw();
}

const char* Grass::GetTag()
{
	return tag;
}

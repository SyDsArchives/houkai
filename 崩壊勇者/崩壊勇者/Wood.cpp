#include "Wood.h"
#include "DxLib.h"

const int imgposX = 32;
const int imgposY = 32;
const char* tag = "WOOD";


Wood::Wood()
{
	woodimg = DxLib::LoadGraph(L"resource/mapchipimg/mapchip.png");
}


Wood::~Wood()
{
}

void Wood::Draw()
{
	DxLib::DrawRectRotaGraph2(420, 300, imgposX, imgposY, 16, 16, 16, 16, 2.f, 0.f, woodimg, true, false, false);
}

void Wood::Update()
{

}

const char* Wood::GetTag()
{
	return tag;
}
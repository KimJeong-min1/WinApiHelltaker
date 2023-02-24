#include "yaplayBG.h"
#include "yaTime.h"
#include "yaSceneManager.h"
#include "yaInput.h"
#include "yaResources.h"


namespace ya
{
	playBG::playBG()
	{
	}
	playBG::~playBG()
	{
	}
	void playBG::Initialize()
	{
		mImage = Resources::Load<Image>(L"BG", L"..\\Resource\\bmp\\chapterBG0001.bmp");
		GameObject::Initialize();
	}
	void playBG::Update()
	{
		GameObject::Update();	
	}
	void playBG::Render(HDC hdc)
	{
		GameObject::Render(hdc);

		BitBlt(hdc, mPos.x, mPos.y, mImage->GetWidth(), mImage->GetHeight(), mImage->GetHdc(), 0, 0, SRCCOPY);
	}
	void playBG::Release()
	{
		GameObject::Release();

	}
}

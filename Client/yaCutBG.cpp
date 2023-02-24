#include "yaCutBG.h"
#include "yaTime.h"
#include "yaSceneManager.h"
#include "yaInput.h"
#include "yaResources.h"
#include "yaTransform.h"


namespace ya
{
	CutBG::CutBG()
	{
	}
	CutBG::~CutBG()
	{
	}
	void CutBG::Initialize()
	{
		mImage = Resources::Load<Image>(L"Cut", L"..\\Resource\\bmp\\CutScene0000.bmp");
		GameObject::Initialize();
	}
	void CutBG::Update()
	{
		GameObject::Update();
	}
	void CutBG::Render(HDC hdc)
	{
		GameObject::Render(hdc);
		Transform* tr = GetComponent<Transform>();
		Vector2 pos = tr->GetPos();
		BitBlt(hdc, pos.x, pos.y, mImage->GetWidth(), mImage->GetHeight(), mImage->GetHdc(), 0, 0, SRCCOPY);
	}
	void CutBG::Release()
	{
		GameObject::Release();

	}
}

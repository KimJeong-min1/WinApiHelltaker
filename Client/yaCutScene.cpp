#include "yaCutScene.h"
#include "yaInput.h"
#include "yaSceneManager.h"
#include "yaCutBG.h"

namespace ya
{
	CutScene::CutScene()
	{
	}
	CutScene::~CutScene()
	{
	}
	void CutScene::Initialize()
	{
		CutBG* cutbg = new CutBG();
		cutbg->SetName(L"CutScene1");
		AddGameObeject(cutbg, eLayerType::CutScene);

		Scene::Initialize();
	}
	void CutScene::Update()
	{
		if (Input::GetKeyState(eKeyCode::N) == eKeyState::Down)
		{
			SceneManager::LoadScene(eSceneType::Play);
		}
	}
	void CutScene::Render(HDC hdc)
	{
		Scene::Render(hdc);
	}
	void CutScene::Release()
	{
		Scene::Release();
	}
	void CutScene::OnEnter()
	{
	}
	void CutScene::OnExit()
	{
	}
}
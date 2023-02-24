#include "yaPlayeScene.h"
#include "yaHelltaker.h"
#include "yaplayBG.h"
#include "yaInput.h"
#include "yaSceneManager.h"

ya::PlayeScene::PlayeScene()
{
}

ya::PlayeScene::~PlayeScene()
{
}

void ya::PlayeScene::Initialize()
{
	Helltaker* helltaker = new Helltaker();
	helltaker->SetName(L"Player");
	AddGameObeject(helltaker, eLayerType::Player);
	playBG* playbg = new playBG();
	playbg->SetName(L"BG");
	AddGameObeject(playbg, eLayerType::BG);

	Scene::Initialize();
}

void ya::PlayeScene::Update()
{
	if (Input::GetKeyState(eKeyCode::N) == eKeyState::Down)
	{
		SceneManager::LoadScene(eSceneType::Cut);
	}

	Scene::Update();
}

void ya::PlayeScene::Render(HDC hdc)
{
	Scene::Render(hdc);
}

void ya::PlayeScene::Release()
{
	Scene::Release();
}

void ya::PlayeScene::OnEnter()
{
}

void ya::PlayeScene::OnExit()
{
}

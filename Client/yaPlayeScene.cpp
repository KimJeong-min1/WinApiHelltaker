#include "yaPlayeScene.h"
#include "yaHelltaker.h"

namespace ya
{
	PlayeScene::PlayeScene()
	{
	}

	PlayeScene::~PlayeScene()
	{
	}

	void PlayeScene::Initialize()
	{
		Helltaker* helltaker = new Helltaker();
		helltaker->SetName(L"Player");
		AddGameObeject(helltaker, eLayerType::Player);

		Scene::Initialize();
	}

	void PlayeScene::Update()
	{
		Scene::Update();
	}

	void PlayeScene::Render(HDC hdc)
	{
		//Super::Tick();
		Scene::Render(hdc);
	}

	void PlayeScene::Release()
	{
		Scene::Release();
	}
}

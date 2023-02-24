#pragma once
#include "yaGameObject.h"
#include "yaImage.h"

namespace ya
{
	class playBG : public GameObject
	{
	public:
		playBG();
		~playBG();

		virtual void Initialize() override;
		virtual void Update() override;
		virtual void Render(HDC hdc) override;
		virtual void Release() override;

	private:
		Image* mImage;
	};
}

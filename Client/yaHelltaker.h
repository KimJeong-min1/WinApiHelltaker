#pragma once
#include "yaGameObject.h"

namespace ya
{
	class Helltaker : public GameObject
	{
	public:
		Helltaker();
		~Helltaker();

		virtual void Initialize() override;
		virtual void Update() override;
		virtual void Render(HDC hdc) override;
		virtual void Release() override;
		
	private:
	};
}

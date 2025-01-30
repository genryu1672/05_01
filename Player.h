#pragma once
#include "Vector2.h"
#include <Novice.h>

class Player
{
public:
	Player();

	void Init();
	void Update();
	void Draw();

	//メンバ関数
	void MoveRight();
	void MoveLeft();

private:
	Vector2 position_{};

	float speed_ = 3.0f;
};


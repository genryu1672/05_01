#include "Scene.h"

Scene::Scene() {}

void Scene::Init(){
	inputHandler_ = new /*★*/;

	inputHandler_->/*長い名前の関数その１★*/();
	inputHandler_->/*長い名前の関数その２★*/();

	player_ = new Player();
	player_->Init();
}

void Scene::Update(){
	iCommand_ = inputHandler_->HandleInput();

	if (/*★iCommandがNullでなければ*/_) {
		iCommand_->/*コマンドを実行★*/(*player_);
	}

	player_->Update();
}

void Scene::Draw(){
	player_->Draw();
}

#include "Scene.h"

Scene::Scene() {}

void Scene::Init(){
	inputHandler_ = new InputHandler()/*★*/;

	inputHandler_->AssignMoveLeft2PressKeyA();/*長い名前の関数その１★*/
	inputHandler_->AssignMoveRight2PressKeyD();/*長い名前の関数その２★*/

	//NewPlayer
	player_ = new Player();
	player_->Init();
}

void Scene::Update(){
	iCommand_ = inputHandler_->HandleInput();

	if (this->iCommand_) {/*★iCommandがNullでなければ*/
		iCommand_->Exec(*player_);/*コマンドを実行★*/
	}

	player_->Update();
}

void Scene::Draw(){
	player_->Draw();
}

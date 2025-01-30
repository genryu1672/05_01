#include "Player.h"

Player::Player() {}

void Player::Init() {
	position_ = { 400, 400 };
}

void Player::Update() {
}

void Player::Draw() {
	Novice::DrawBox((int)position_.x, (int)position_.y, 50, 50, 0, WHITE, kFillModeSolid);
}

void Player::MoveRight() {
	this->position_.x += speed_;
}

void Player::MoveLeft() {
	this->position_.x -= speed_;
}

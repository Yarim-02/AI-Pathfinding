#include "Background.h"

Background::Background()
{
	TextureManager::Instance()->load("../Assets/textures/Background.png", "background");

	auto size = TextureManager::Instance()->getTextureSize("background");
	setWidth(size.x);
	setHeight(size.y);


	getTransform()->position = glm::vec2(0.0f, 0.0f);
	getRigidBody()->velocity = glm::vec2(0.0f, 0.0f);
	getRigidBody()->acceleration = glm::vec2(0.0f, 0.0f);
	getRigidBody()->isColliding = false;
}

Background::~Background()
{
}

void Background::draw()
{
	TextureManager::Instance()->draw("background",
		getTransform()->position.x, getTransform()->position.y, 0, 255, false);
}

void Background::update()
{
}

void Background::clean()
{
}

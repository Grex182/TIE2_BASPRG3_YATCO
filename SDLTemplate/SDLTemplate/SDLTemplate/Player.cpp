#include "Player.h"

void Player::start()
{
	// Load texture
	texture = loadTexture("gfx/player.png");

	// Initialize to avoid garbage values
	x = 250;
	y = 350;
	width = 0;
	height = 0;

	// Query the texture to set our with and height
	SDL_QueryTexture(texture, NULL, NULL, &width, &height);
}

void Player::update()
{
	if (app.keyboard[SDL_SCANCODE_W])
	{
		y -= 4;
	}

	if (app.keyboard[SDL_SCANCODE_S])
	{
		y += 4;
	}

	if (app.keyboard[SDL_SCANCODE_A])
	{
		x -= 4;
	}

	if (app.keyboard[SDL_SCANCODE_D])
	{
		x += 4;
	}
}

void Player::draw()
{
	blit(texture, x, y);
}

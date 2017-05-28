#include "GameObject.h"

GameObject::GameObject(Vector2 size, Vector2 p)
{
	rigidbody = new Rigidbody;
	collider = new RectangleCollider(Vector2(100.0f, 100.0f), Vector2(0.0f, 0.0f), rigidbody);
	aabb = AABB(Vector2(0.0f, 0.0f), Vector2(0.0f, 0.0f));
}

void GameObject::SetPos(Vector2 newPos)
{
	position = newPos;
	rigidbody->SetPos(position);
	collider->setOffset(position);
	aabb.setCenter(position);
	rect.setPosition(position);
}

Vector2 GameObject::getPos()
{
	return position;
}

void GameObject::SetColor(sf::Color color)
{
	rect.setFillColor(color);
}

// Draw ?

void GameObject::draw(sf::RenderWindow& window)
{
	window.draw(rect);
}

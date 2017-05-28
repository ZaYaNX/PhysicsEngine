#ifndef GameObject
#define GameObject.h

#include "Collider.h"
#include "AABB.h"
#include "Rigidbody.h"

class GameObject
{
private:
	Vector2 Size;
	Vector2 position;

public:
	GameObject(Vector2 size, Vector2 position);
	sf::RectangleShape rect;

};
#endif


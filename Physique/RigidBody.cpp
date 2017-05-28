#include "Rigidbody.h"
#include "Vector2.h"
#include "iostream"
#include "AABB.h"
#include "World.h"

// Speed + SetPos

Vector2 Rigidbody::Addforce(Vector2 newAcceleration)
{
	force.x = mass * newAcceleration.x;
	force.y = mass * newAcceleration.y;

	SetAcceleration();
	return force;
}

Vector2 Rigidbody::SetAcceleration()
{
	acceleration.x = force.x / mass;
	acceleration.y = force.y / mass;

	return acceleration;
}

Vector2 Rigidbody::GetPosition()
{
	return position;
}

void Rigidbody::SetMass(float m)
{
	mass = m;
}

void Rigidbody::SetPos(Vector2 newPos)
{
	position = newPos;
	aabb.center = position;
}

void Rigidbody::SetSpeed(Vector2 newSpeed)
{
	speed = newSpeed;
}

}

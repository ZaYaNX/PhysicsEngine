
#ifndef World.h
#define World.h
#include <list>
#include "Rigidbody.h"
#include "AABB.h"

class World
{

private:

	std::list <Rigidbody*>;
	AABB aabb;


#endif
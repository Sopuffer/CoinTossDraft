#include "EntityManager.h"
#include "Entity.h"
#include "../Collision/Collider.h"
EntityManager::EntityManager()
{
	entity = new Entity();
	collider = new Collider();
}
EntityManager::~EntityManager()
{

}
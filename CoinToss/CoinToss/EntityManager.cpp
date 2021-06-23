#include "EntityManager.h"
#include "Entity.h"
#include "Collider.h"
EntityManager::EntityManager()
{
	entity = new Entity();
	collider = new Collider();
}
EntityManager::~EntityManager()
{

}
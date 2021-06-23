#pragma once
class Entity;
class Collider;
class EntityManager
{
	Collider* collider;
	Entity* entity;
	EntityManager();
	~EntityManager();
};
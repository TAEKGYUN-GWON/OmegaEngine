#include "stdafx.h"
#include "PhysicsManager.h"
#include "Object.h"
#include "Collider.h"
PhysicsManager::PhysicsManager()
{
}

PhysicsManager * PhysicsManager::GetInstance()
{
	static PhysicsManager* instance = new PhysicsManager();
	return instance;
}

b2World * PhysicsManager::GetWorld()
{
	return _world;
}

void PhysicsManager::SetWorld(b2World * world)
{
	_world = world;
}

void PhysicsManager::BeginContact(b2Contact * contacts)
{
	auto a = (Object*) contacts->GetFixtureA()->GetBody()->GetUserData();
	auto b = (Object*) contacts->GetFixtureB()->GetBody()->GetUserData();
	//cout << "충돌" << endl;
	if (!a || !b) return;

	a->GetComponent<Collider>()->CollisionBegin(b);
	b->GetComponent<Collider>()->CollisionBegin(a);

}

void PhysicsManager::PreSolve(b2Contact * contacts, const b2Manifold * oldManifold)
{
	auto a = (Object*)contacts->GetFixtureA()->GetBody()->GetUserData();
	auto b = (Object*)contacts->GetFixtureB()->GetBody()->GetUserData();
	//cout << "충돌" << endl;
	if (!a || !b) return;

	a->GetComponent<Collider>()->CollisionStay(b);
	b->GetComponent<Collider>()->CollisionStay(a);
}

void PhysicsManager::EndContact(b2Contact * contacts)
{
	auto a = (Object*)contacts->GetFixtureA()->GetBody()->GetUserData();
	auto b = (Object*)contacts->GetFixtureB()->GetBody()->GetUserData();
	//cout << "충돌" << endl;
	if (!a || !b) return;

	a->GetComponent<Collider>()->CollisionEnd(b);
	b->GetComponent<Collider>()->CollisionEnd(a);
}
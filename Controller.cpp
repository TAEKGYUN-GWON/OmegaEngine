#include "stdafx.h"
#include "Controller.h"

void Controller::Init()
{
	Script::Init();
	rb = _object->GetComponent<PhysicsBody>();
}

void Controller::Update()
{
	Move();
}

void Controller::CollisionBegin(void* obj)
{
	cout << "test" << endl;
}

void Controller::Move()
{
	Vector2 dir;

	if (KEYMANAGER->isStayKeyDown(VK_LEFT)) dir += Vector2::left;
	if (KEYMANAGER->isStayKeyDown(VK_RIGHT)) dir += Vector2::right;
	if (KEYMANAGER->isStayKeyDown(VK_UP)) dir += Vector2::up;
	if (KEYMANAGER->isStayKeyDown(VK_DOWN)) dir += Vector2::down;

	dir = dir.Nomalized();

	rb->ApplyForce(b2Vec2(dir.x,dir.y) * moveSpeed * TIMEMANAGER->getElapsedTime());
}

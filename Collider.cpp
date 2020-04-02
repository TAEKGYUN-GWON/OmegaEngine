#include "stdafx.h"
#include "Collider.h"


Collider::Collider()
{
	_name = "Collider";
}


Collider::~Collider()
{
}

void Collider::CollisionBegin(void* obj)
{
	for (auto s : _object->GetComponents<Script>())
		s->CollisionBegin(obj);
}

void Collider::CollisionStay(void* obj)
{
	for (auto s : _object->GetComponents<Script>())
		s->CollisionStay(obj);
}

void Collider::CollisionEnd(void* obj)
{
	for (auto s : _object->GetComponents<Script>())
		s->CollisionEnd(obj);
}

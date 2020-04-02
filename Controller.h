#pragma once
#include "Script.h"
class Controller : public Script
{
private:
	float moveSpeed = 50;

private:
	PhysicsBody* rb;
public:
	virtual void Init();
	virtual void Update();

	virtual void CollisionBegin(void* obj);
private:
	void Move();
};


#pragma once
#include "Component.h"
class Script :	public Component
{
public:
	Script() {};
	~Script() {};
	//�浹�� ����
	virtual void CollisionBegin(void* obj) {};
	//�浹��
	virtual void CollisionPreSolve(void* obj) {};
	//�浹 ���� ����
	virtual void CollisionEnd(void* obj) {};
};


#pragma once
#include "Component.h"
class Script :	public Component
{
protected:
	Transform* transform;
public:
	virtual void Awake() { transform = _object->GetTrans(); }
	//�浹�� ����
	virtual void CollisionBegin(void* obj) {};
	//�浹��
	virtual void CollisionPreSolve(void* obj) {};
	//�浹 ���� ����
	virtual void CollisionEnd(void* obj) {};
};


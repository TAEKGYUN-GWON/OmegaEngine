#pragma once
#include "Component.h"
class Script :	public Component
{
protected:
	Transform* transform;
public:
	virtual void Awake() { transform = _object->GetTrans(); }
	//충돌한 직후
	virtual void CollisionBegin(void* obj) {};
	//충돌중
	virtual void CollisionStay(void* obj) {};
	//충돌 끝난 시점
	virtual void CollisionEnd(void* obj) {};
};


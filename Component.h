#pragma once

class Object;

class Component abstract
{
protected:
	Object* _object;
	string _name;
public:
	virtual ~Component() {};
	virtual void Awake() {};
	virtual void Init() {};
	virtual void FixedUpdate() {};
	virtual void LateUpdate() {};
	virtual void Update() {};
	virtual void Release() { };
	inline void setGameObject(Object* obj) { _object = obj; }
	inline Object* GetGameObject() { return _object; }
	inline string GetName() { return _name; }
};


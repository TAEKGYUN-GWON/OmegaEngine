#include "stdafx.h"
#include "StartScene.h"
#include "Controller.h"
void StartScene::Init()
{
	//F2�� ������ ����� ��ο� ��Ʈ�� �׷���
	Scene::Init();
	Object* obj = Object::CreateObject<Object>();
	obj->GetTrans()->SetPos(WINSIZE / 2);
	obj->GetTrans()->SetScale(100, 100);
	obj->AddComponent<PhysicsBody>()->Init(BodyType::DYNAMIC, 1);
	obj->AddComponent<Controller>();
	obj->AddComponent<Sprite>();
	obj->GetComponent<Sprite>()->SetPosition(obj->GetTrans()->GetPos());

	Object* tt = Object::CreateObject<Object>();
	obj->GetTrans()->SetPos(WINSIZE / 2 + Vector2::left * 200);
	obj->GetTrans()->SetScale(100, 100);
	obj->AddComponent<PhysicsBody>()->Init(BodyType::DYNAMIC, 1);
	obj->AddComponent<Sprite>();
	obj->GetComponent<Sprite>()->SetPosition(obj->GetTrans()->GetPos());
}

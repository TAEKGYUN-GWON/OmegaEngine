#include "stdafx.h"
#include "MousePointer.h"


Vector2 MousePointer::GetMouseWorldPositionForDesignResolution()
{
	_pos = _ptMouse;

	Vector3 mousePosition_V3(_pos.x, _pos.y, 1);

	Vector3 mouseWorldPosition = Matrix3x3::Mul(mousePosition_V3, CAMERA->GetMatrix3x3().GetInverseMatrix());

	Vector2 _pos(mouseWorldPosition.GetX(), mouseWorldPosition.GetY());

	return _pos * (DesignResolution / WINSIZE);
}

Vector2 MousePointer::GetMouseWorldPosition()
{

	_pos = _ptMouse;

	Vector3 mousePosition_V3(_pos.x, _pos.y, 1);

	Vector3 mouseWorldPosition = Matrix3x3::Mul(mousePosition_V3, CAMERA->GetMatrix3x3().GetInverseMatrix());

	Vector2 _pos(mouseWorldPosition.GetX(), mouseWorldPosition.GetY());

	return _pos;
}

Vector2 MousePointer::GetMouseLocalPositionForDesignResolution()
{
	return _ptMouse * (DesignResolution / WINSIZE);
}


Vector2 MousePointer::GetMouseLocalPosition()
{
	return _ptMouse;
}

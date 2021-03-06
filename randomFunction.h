#pragma once
#include <time.h>

class randomFunction 
{
private:
	randomFunction()
	{
		srand(GetTickCount());
	}
public:
	static randomFunction* GetInstance();
	~randomFunction()
	{

	}

	//===============  정수형 난수 =======================

	//          0 ~ 매개변수에 넣은 숫자 - 1 만큼 범위 랜덤
	inline int getInt(int num) { return rand() % num; }

	//        정수와 정수 사이 범위에서 랜덤한 수를 뽑는 함수
	inline int getFromIntTo(int fromNum, int toNum)
	{
		return rand() % (toNum - fromNum) + fromNum;
	}

	//================== 실수형 난수 ============================
	float getFloat() { return (float)rand() / (float)RAND_MAX; }
	float getFloat(float num) { return ((float)rand() / (float)RAND_MAX) * num; }

	inline float getFromFloatTo(float fromNum, float toNum)
	{
		float rnd = (float)rand() / (float)RAND_MAX;

		return (rnd * (toNum - fromNum) + fromNum);
	}



};


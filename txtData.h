#pragma once
#include <vector>

class txtData 
{
private:
	txtData();
public:
	~txtData();
	static txtData* GetInstance();
	HRESULT init();
	void release();

	void txtSave(const char* saveFileName, vector<string> vStr);
	char* vectorArrayCombine(vector<string> vArray);

	vector<string> txtLoad(const char* loadFileName);
	vector<string> charArraySeparation(char charArray[]);

};


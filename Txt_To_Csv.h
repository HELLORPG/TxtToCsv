#pragma once
#include "Define.h"

class Change
{
private:
	FILE *data_file;
	FILE *save_file;//�ֱ��������ԭ�ļ��Ͳ������ļ�

public:
	Change();
	~Change();
	void Start();
};
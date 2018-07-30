#pragma once
#include "Define.h"

class Change
{
private:
	FILE *data_file;
	FILE *save_file;//分别用来标记原文件和产生的文件

public:
	Change();
	~Change();
	void Start();
};
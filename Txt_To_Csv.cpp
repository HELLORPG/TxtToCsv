#include "Txt_To_Csv.h"

using std::cout;
using std::endl;

Change::Change()
{
	data_file = NULL;
	save_file = NULL;
}

Change::~Change()
{

}

void Change::Start()
{
	cout << "    欢迎使用格式化表格转储程序    [1.0]" << endl;
	return;
}
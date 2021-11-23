#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義

#include "../include/lib_func.h"

// バブルソート(引数が不適切であればfalseを返す)
bool bubble_sort(item* begin, const item* end)
{
	if (begin ==NULL) return false;
	if (begin > end) return false;
	int i, j;
	item tmp;
	for (i = 0; begin + i < end; i++)
	{
		if (begin[i].value[strlen(begin[i].value) + 1] != begin[i].value[sizeof(begin[i].value) - 1]) return false;
		for (j = i + 1; begin + j < end; j++)
		{
			if (begin[i].key > begin[j].key)
			{
				tmp = begin[i];
				begin[i] = begin[j];
				begin[j] = tmp;
			}
		}
		if(begin + j > end) return false;
	}
}

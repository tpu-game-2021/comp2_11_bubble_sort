#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義

#include "../include/lib_func.h"

// バブルソート(引数が不適切であればfalseを返す)
bool bubble_sort(item* begin, const item* end)
{
	if (begin == NULL || end == NULL || end < begin)
	{
		return false;
	}

	int i, j;
	int num = end - begin;
	item tmp;

	for (i = 0; i < num; i++)
	{
		for (j = i + 1; j < num; j++)
		{
			if (begin[i].key > begin[j].key)
			{
				tmp = begin[i];
				begin[i] = begin[j];
				begin[j] = tmp;
			}
		}
	}

	return true;
}    

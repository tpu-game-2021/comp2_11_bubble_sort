#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義

#include "../include/lib_func.h"

// バブルソート(引数が不適切であればfalseを返す)
bool bubble_sort(item* begin, const item* end)
{
	int i, j;
	item temp;

	if (begin == NULL)
	{
		return false;
	}
	if (begin > end)
	{
		return false;
	}

	for (i = 0; begin + i < end; i++)
	{
		for (j = i + 1; begin + j < end; j++)
		{
			if (begin[i].key > begin[j].key)
			{
				temp = begin[i];
				begin[i] = begin[j];
				begin[j] = temp;
			}
		}
	}
}

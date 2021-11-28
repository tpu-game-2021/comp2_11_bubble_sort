#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義

#include "../include/lib_func.h"

// バブルソート(引数が不適切であればfalseを返す)
bool bubble_sort(item* begin, const item* end)
{
	if(begin == NULL|| end == NULL)
	return false;
	
	if (end < begin)
		return false;

	int a, z;
	int tnum = end - begin;
	item tmp;

	for (a = 0; a < tnum; a++)
	{
		for (z = a + 1; z < tnum; z++)
		{
			if (begin[a].key > begin[z].key)
			{
				tmp = begin[a];
				begin[a] = begin[z];
				begin[z] = tmp;
			}
		}
	}
	return true;
}

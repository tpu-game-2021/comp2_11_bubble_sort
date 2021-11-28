#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義

#include "../include/lib_func.h"

// バブルソート(引数が不適切であればfalseを返す)
bool bubble_sort(item* begin, const item* end)
{
	int i, j,tmp;

	//key=int型　value=cher型　
	//begin,end=item 型？ const

	for (i = 0; i < end; i++)
	{
		for (j =end + 1; j <end; j++)
		{
			if (begin.key[i] < begin.key[j])
			{
				tmp = begin[i];
				begin[i] = begin[j];
				begin[j] = tmp;

			}
		}
	}

	return false;
}

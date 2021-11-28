#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義

#include "../include/lib_func.h"

// バブルソート(引数が不適切であればfalseを返す)
bool bubble_sort(item* begin, const item* end)
{
	item keep;
	for (int i = 0; i < 4; i++)
	{
		if (begin->key < end->key)
		{
			return true;
		}
		else if (end->key < begin->key)
		{
			item keep = end->value[i];
			end->value[i] = begin->value[i];
			begin->value = keep;
			return false;
		}
		else
		{
			return false;
		}
	}
}

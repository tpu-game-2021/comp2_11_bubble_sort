#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義

#include "../include/lib_func.h"

// バブルソート(引数が不適切であればfalseを返す)
bool bubble_sort(item* begin, const item* end)
{
	if (begin == NULL || end == NULL)return false;
	if (end < begin)return false;
	int num = end - begin;
	if (begin + num != end)return false;
	
	for (item* p = begin; p < end; p++) {
		for (item* p = begin; p < end-1; p++) {
			if (p->key > (p + 1)->key)
			{
				item temp = *p;
				*p = *(p + 1);
				*(p + 1) = temp;
			}
		}
	}
	return true;
	
}

#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義

#include "../include/lib_func.h"

// バブルソート(引数が不適切であればfalseを返す)
bool bubble_sort(item* begin, const item* end)
{
	if (begin == NULL || end == NULL) return false;
	if (begin > end) return false;
	int a = end - begin, n = 1;
	item t;
	if (begin + a != end)return false;

	for (item* p = begin; p < end; p++) {
		for (item* p = begin; p < end - n; p++) {
			if (p->key > (p + n)->key)
			{
				t = *p;
				*p = *(p + n);
				*(p + n) = t;
			}
		}
	}
	return true;
}

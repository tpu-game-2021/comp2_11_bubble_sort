#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義

#include "../include/lib_func.h"

// バブルソート(引数が不適切であればfalseを返す)
bool bubble_sort(item* begin, const item* end)
{
	if (begin == NULL || end == NULL) return false;
	if (end < begin) return false;
	if ((3 & (unsigned int)begin) != 0) return false;
	if ((3 & (unsigned int)end)   != 0) return false;

	for (item* it = begin; it != end; it++) {
		for (item* it2 = it + 1; it2 != end; it2++) {
			if (it2->key < it->key) {
				item tmp = *it;
				*it = *it2;
				*it2 = tmp;
			}
		}
	}

	return true;
}

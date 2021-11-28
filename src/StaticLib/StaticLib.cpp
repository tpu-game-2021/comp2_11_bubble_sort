#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義

#include "../include/lib_func.h"

// バブルソート(引数が不適切であればfalseを返す)
bool bubble_sort(item* begin, const item* end)
{
	if (begin == NULL || end == NULL) {
		return false;
	}

	if (end < begin) {
		return false;
	}

	for (int i = 0; i < end - begin; i++) {

		for (int j = i + 1; j < end - begin; j++) {
			if (begin[i].key > begin[j].key) {

				item temp = begin[i];
				begin[i] = begin[j];
				begin[j] = temp;
			}
		}
	}
	return true;
}

#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義

#include "../include/lib_func.h"

// バブルソート(引数が不適切であればfalseを返す)
bool bubble_sort(item* begin, const item* end)
{
	int i=0;
	int count = 0;
	item tmp;
	if (begin == NULL || end == NULL)return false;
	if (end - begin <= 0)return false;

	while (1)
	{
		for (i = 0; i < (end-begin)-1; i++) {
			if (begin[i].key > begin[i+1].key){
				tmp = begin[i];
				begin[i] = begin[i + 1];
				begin[i + 1] = tmp;
				count++;
			}
		}
		if (count == 0)return true;
		count = 0;
	}

	return false;
}

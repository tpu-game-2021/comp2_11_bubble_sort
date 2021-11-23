#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義

#include "../include/lib_func.h"

// バブルソート(引数が不適切であればfalseを返す)
bool bubble_sort(item* begin, const item* end)
{
	
	if (begin == NULL || end == NULL)return false;
	if (begin > end)return false;
	//beginのひとつ前のポインタを確認
	//endのひとつ後のポインタを確認
	
	for (int i = 0; i < ((int)end-int(begin))/sizeof(item) - 1; i++) {
		for (int j = ((int)end - int(begin)) / sizeof(item) - 1; j > i;j--) {
			if (begin[j-1].key > begin[j].key) {
				item temp = begin[j];
				begin[j] = begin[j - 1];
				begin[j - 1] = temp;
			}
		}
	}
	return true;
}

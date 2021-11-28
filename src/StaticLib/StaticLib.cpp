#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義

#include "../include/lib_func.h"

// バブルソート(引数が不適切であればfalseを返す)
bool bubble_sort(item* begin, const item* end)
{
	if (begin == NULL || end == NULL || begin > end) return false;
	int kazu;
	char moji[256];
	if(begin->key > end->key)
	{
		kazu = begin->key;
		begin->key = end->key;
		end->key = kazu;//endをいじらずに入れ替える方法がわからない
		for (int i = 0; i < 255; i++) 
		{
			moji[i] = begin->value[i];
			begin->value[i] = end->value[i];
			end->value[i] = moji[i];
		}
	}
	return true;
}

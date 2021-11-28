#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義

#include "../include/lib_func.h"

// バブルソート(引数が不適切であればfalseを返す)
bool bubble_sort(item* begin, const item* end)
{
	if (begin == NULL || end == NULL) return false;
	//if (begin > end)return false;
	int n = (end - begin) / sizeof(item);

	if (begin->key > end->key)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (begin[i].key > begin[j].key)
				{
					int tnp = begin[i].key;
					begin[i].key = begin[j].key;
					begin[j].key = tnp;
				}
			}
		}
		return true;
	}
	else if (begin < end) return false;
	else return false;

	/*if (begin->key < end->key)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (begin[i].key > begin[j].key)
				{
					int tnp = begin[i].key;
					begin[i].key = begin[j].key;
					begin[j].key = tnp;
				}
			}
		}
		return true;
	}*/
	//else return false;
}

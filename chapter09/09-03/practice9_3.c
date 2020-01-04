/**
 * @file practice9_3.c
 * @brief 『スッキリわかるC言語入門』練習問題9-3
 * @author nafuka11
 * @date 2019-12-30
 * @details int型ポインタが指す内容を表示
 */
#include <stdio.h>

void printIntByAddress(int* intAddr);

/**
 * @brief main関数
 * @return int 終了コード
 */
int main(void)
{
  int num = 100;
  printIntByAddress(&num);
}

/**
 * @brief 引数で指定したアドレスの内容を表示する
 * @param intAddr int型変数のアドレス
 */
void printIntByAddress(int* intAddr)
{
  printf("内容：%d\n", *intAddr);
}

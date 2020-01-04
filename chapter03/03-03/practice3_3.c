/**
 * @file practice3_3.c
 * @brief 『スッキリわかるC言語入門』練習問題3-3
 * @author nafuka11
 * @date 2019-12-28
 * @details 暗証番号を生成し、表示する
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * @brief main関数
 * @return int 終了コード
 */
int main(void)
{
  printf("4桁の暗証番号を生成します\n");
  srand((unsigned)time(0UL));
  int a = rand() % 10;
  int b = rand() % 10;
  int c = rand() % 10;
  int d = rand() % 10;
  printf("暗証番号: %d%d%d%d\n", a, b, c, d);
  return 0;
 }

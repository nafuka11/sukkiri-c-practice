/**
 * @file practice2_3.c
 * @brief 『スッキリわかるC言語入門』練習問題2-3
 * @author nafuka11
 * @date 2019-12-28
 * @details 岬くんの年齢表示
 *
 */
#include <stdio.h>

/**
 * @brief main関数
 * @return int 終了コード
 */
int main(void)
{
  int age = 22;
  int year = 2018 - age;
  printf("%d年生まれの岬くんは今年で%d歳です\n", year, age);
  return 0;
}
/**
 * @file practice8_2.c
 * @brief 『スッキリわかるC言語入門』練習問題8-2
 * @author nafuka11
 * @date 2019-12-30
 * @details うるう年の判定
 */
#include <stdio.h>
#include <stdbool.h>

bool isLeapYear(int year);

/**
 * @brief うるう年判定の表示
 * @return int 終了コード
 */
int main(void)
{
  int year = 2000;
  printf("%d年は、うるう年%s\n",
         year,
         isLeapYear(year) ? "です。" : "ではありません。");
  return 0;
}

/**
 * @brief うるう年の判定
 * @param year 西暦
 * @return true うるう年
 * @return false うるう年でない
 */
bool isLeapYear(int year)
{
  if (year % 400 == 0) {
    return true;
  }
  return (year % 4 == 0) && (year % 100);
}
/**
 * @file practice7_2.c
 * @brief 『スッキリわかるC言語入門』練習問題7-2
 * @author nafuka11
 * @date 2019-12-29
 * @details 試験結果の表示（最高点、最低点、平均点）
 */
#include <stdio.h>

/**
 * @brief main関数
 * @return int 終了コード
 */
int main(void)
{
  enum {LEN = 5};
  int scores[LEN] = {88, 61, 90, 75, 93};

  int sum = 0;
  int min = scores[0];
  int max = scores[0];
  for (int i = 0; i < LEN; i++) {
    sum += scores[i];
    if (scores[i] < min) {
      min = scores[i];
    }
    if (scores[i] > max) {
      max = scores[i];
    }
  }
  printf("試験の最高点: %d 最低点: %d 平均点: %.2f\n", max, min, sum / 5.0);
}
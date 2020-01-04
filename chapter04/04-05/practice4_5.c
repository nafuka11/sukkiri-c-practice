/**
 * @file practice4_5.c
 * @brief 『スッキリわかるC言語入門』練習問題4-5
 * @author nafuka11
 * @date 2019-12-28
 * @details 温度調整プログラム
 *
 */
#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

/**
 * @brief main関数
 * @return int 終了コード
 */
int main(void) {
  int temp = 30;
  int answer = 1;
  String answerStr;
  while (answer == 1) {
    printf("現在の設定温度: %d\n", temp);
    printf("暑いですか？ Yes=1 No=0\n");
    scanf("%s", answerStr);
    answer = atoi(answerStr);
    if (answer == 1) {
      temp--;
    }
  }
  printf("設定を終了します\n");
  return 0;
}
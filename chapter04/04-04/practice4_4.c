/**
 * @file practice4_4.c
 * @brief 『スッキリわかるC言語入門』練習問題4-4
 * @author nafuka11
 * @date 2019-12-28
 * @details バナナを食べる
 */
#include <stdio.h>
#include <stdbool.h>

/**
 * @brief main関数
 * @return int 終了コード
 */
int main(void) {
  printf("いただきます\nバナナを食べます\n");
  bool more = false;
  if (more) {
    printf("おかわりをください\n");
  } else {
    printf("お腹がいっぱいです\n");
  }
  printf("ごちそうさまでした\n");
  return 0;
}
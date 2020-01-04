/**
 * @file main.c
 * @brief 『スッキリわかるC言語入門』練習問題13-2
 * @author nafuka11
 * @date 2020-01-02
 * @details ランダムなメッセージの表示
 */
#include <stdio.h>
#include "sub.h"

/**
 * @brief main関数
 * @return int 終了コード
 */
int main(void)
{
  printf("%s\n", selectMsg(createRand(MAX_MESSAGE)));
  return 0;
}

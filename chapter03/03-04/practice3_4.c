/**
 * @file practice3_4.c
 * @brief 『スッキリわかるC言語入門』練習問題3-4
 * @author nafuka11
 * @version 0.1
 * @date 2019-12-28
 * @details カレンダーから選んだ数字当てゲーム
 */
#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

/**
 * @brief main関数
 * @return int 終了コード
 */
int main(void)
{
  String inputStr;

  printf("カレンダーから縦に並んだ数字を3つ選び、その合計を入力してください\n");
  scanf("%s", inputStr);
  int inputNum = atoi(inputStr) / 3;
  printf("選んだ数字は%dと%dと%dですね？\n", inputNum - 7, inputNum, inputNum + 7);

  return 0;
}
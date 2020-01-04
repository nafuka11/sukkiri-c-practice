/**
 * @file practice5_5.c
 * @brief 『スッキリわかるC言語入門』練習問題5-5
 * @author nafuka11
 * @date 2019-12-28
 * @details 数当てゲーム（レベル1）
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef char String[1024];

/**
 * @brief main関数
 * @return int 終了コード
 */
int main(void)
{
  const int MAX_ANSWER = 4;
  srand((unsigned)time(0UL));
  int answer = rand() % 10;
  int input = 0;
  String inputStr;

  printf("*** 数当てゲーム（レベル1）***\n");
  printf("回答のチャンスは%d回までです\n", MAX_ANSWER);

  for (int i = 1; i <= MAX_ANSWER; i++) {
    printf("1桁の数を入力してください: ");
    scanf("%s", inputStr);
    input = atoi(inputStr);
    if (input == answer) {
      printf("当たりです！%d回目の入力で正解しました！\n", i);
      break;
    }
    printf("残念！");
    if (input < answer) {
      printf("%dより大きい数です！\n", input);
    } else {
      printf("%dより小さい数です！\n", input);
    }
  }
  if (answer != input) {
    printf("答えは%dでした！\n", answer);
  }
  return 0;
}
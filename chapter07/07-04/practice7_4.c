/**
 * @file practice7_4.c
 * @brief 『スッキリわかるC言語入門』練習問題7-4
 * @author nafuka11
 * @date 2019-12-29
 * @details 数当てゲーム（レベル2）
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
  const int DIGIT = 3;

  printf("*** 数当てゲーム（レベル2）***\n");
  printf("3桁の数を当ててください！\n");

  // 正解と入力用変数の初期化
  int answer[DIGIT];
  int input[DIGIT];
  srand((unsigned)time(0UL));
  for (int i = 0; i < DIGIT; i++) {
    answer[i] = rand() % 10;
  }

  // 数当てループ
  int continueInput = 1;
  while (continueInput) {
    for (int i = 0; i < DIGIT; i++) {
      printf("%d桁目の予想を0〜9の数字で入力してください: ", i + 1);
      String inputStr;
      scanf("%s", inputStr);
      input[i] = atoi(inputStr);
    }

    // 結果計算・表示
    int hit = 0;
    int blow = 0;
    for (int i = 0; i < DIGIT; i++) {
      if (answer[i] == input[i]) {
        hit++;
      } else if (input[i] == answer[(i+1)%DIGIT] || input[i] == answer[(i+2)%DIGIT]) {
        blow++;
      }
    }
    printf("%dヒット！%dブロー！\n", hit, blow);
    if (hit == DIGIT) {
      printf("正解です！\n");
      break;
    }
    printf("続けますか？（1:続ける 0:終了）\n");
    String inputStr;
    scanf("%s", inputStr);
    continueInput = atoi(inputStr);
    if (continueInput == 0) {
      printf("正解は");
      for (int i = 0; i < DIGIT; i++) {
        printf("%d", answer[i]);
      }
      printf("でした！\n");
    }
  }
  return 0;
}

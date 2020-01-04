/**
 * @file practice8_4.c
 * @brief 『スッキリわかるC言語入門』練習問題8-4
 * @author nafuka11
 * @date 2019-12-30
 * @details 割り勘プログラム
 */
#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

int iscanf(void);
int calcPayment(int amount, int people);
void showPayment(int pay, int payorg, int people);

/**
 * @brief main関数
 * @return int 終了コード
 */
int main(void)
{
  // 計算データの入力
  printf("支払総額を入力してください：");
  int amount = iscanf();
  printf("参加人数を入力してください：");
  int people = iscanf();

  // 割り勘の計算
  int pay = calcPayment(amount, people);
  // 幹事の支払額を計算
  int payorg = amount - pay * (people - 1);

  // 結果の表示
  showPayment(pay, payorg, people);

  return 0;
}

/**
 * @brief 入力値をintに変換し返す
 * @return int 入力値
 */
int iscanf(void)
{
  String inputStr;
  scanf("%s", inputStr);
  return atoi(inputStr);
}

/**
 * @brief 割り勘を計算する。支払額は100円単位に切り上げる
 * @param amount 支払総額
 * @param people 人数
 * @return int 1人あたりの支払額
 */
int calcPayment(int amount, int people)
{
  // 総額を人数で割り、100円未満を切り捨てる
  double dnum = (double)amount / people;
  int pay = (int)(dnum / 100) * 100;
  // 元の値より小さければ切り捨てているので、100円上乗せする
  if (dnum > pay) {
    pay += 100;
  }
  return pay;
}

/**
 * @brief 支払額を表示する
 * @param pay 支払額
 * @param payorg 幹事支払額
 * @param people 総人数
 */
void showPayment(int pay, int payorg, int people)
{
  printf("*** 支払額 ***\n");
  printf("1人あたり%d円（%d人）、幹事は%d円です\n",
         pay,
         people - 1,
         payorg);
}

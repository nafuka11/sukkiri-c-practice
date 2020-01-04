/**
 * @file practice9_2.c
 * @brief 『スッキリわかるC言語入門』練習問題9-2
 * @author nafuka11
 * @date 2019-12-30
 * @details 変数の型のサイズを表示
 */
#include <stdio.h>

/**
 * @brief main関数
 * @return int 終了コード
 */
int main(void)
{
  char moji = 'C';
  long money = 300000;
  char* mojiAddr = &moji;
  long* moneyAddr = &money;

  // sizeof()の戻り値はlong unsigned intだったため、%ldを使用
  printf("moji: %ldバイト\n", sizeof(moji));
  printf("money: %ldバイト\n", sizeof(money));
  // 以下はポインタ型のため、サイズが同じ
  printf("mojiAddr: %ldバイト\n", sizeof(mojiAddr));
  printf("moneyAddr: %ldバイト\n", sizeof(moneyAddr));
}

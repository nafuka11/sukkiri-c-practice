/**
 * @file practice5_4.c
 * @brief 『スッキリわかるC言語入門』練習問題5-4
 * @author nafuka11
 * @date 2019-12-28
 * @details 果物の購入シミュレーション
 */
#include <stdio.h>

/**
 * @brief main関数
 * @return int 終了コード
 */
int main(void)
{
  const int OTOSHIDAMA = 3000;
  const int APPLE_PRICE = 120;
  const int APPLE_AMOUNT = 1;
  const int MIKAN_PRICE = 400;
  const int MIKAN_AMOUNT = 6;

  printf("リンゴ ");
  int pocket = OTOSHIDAMA;
  while (pocket > APPLE_PRICE) {
    printf("*");
    pocket -= APPLE_PRICE;
  }
  printf(" 余りは%d円\n", pocket);


  printf("ミカン ");
  pocket = OTOSHIDAMA;
  while (pocket > MIKAN_PRICE) {
    for (int i = 0; i < MIKAN_AMOUNT; i++) {
      printf("*");
    }
    pocket -= MIKAN_PRICE;
  }
  printf(" 余りは%d円\n", pocket);
  return 0;
}

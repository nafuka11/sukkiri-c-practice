/**
 * @file practice5_3.c
 * @brief 『スッキリわかるC言語入門』練習問題5-3
 * @author nafuka11
 * @date 2019-12-28
 * @details 野球の守備位置表示
 */
#include <stdio.h>

/**
 * @brief main関数
 * @return int 終了コード
 */
int main(void)
{
  int num = 0;
  printf("1〜9の数を入力してください\n");
  scanf("%d", &num);
  switch (num)
  {
    case 1:
    case 2:
      printf("バッテリー\n");
      break;
    case 3:
    case 4:
    case 5:
    case 6:
      printf("内野手\n");
      break;
    case 7:
    case 8:
    case 9:
      printf("外野手\n");
      break;
    default:
      printf("入力された守備位置はありません\n");
      break;
  }
  return 0;
}

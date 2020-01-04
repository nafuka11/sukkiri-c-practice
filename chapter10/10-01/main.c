/**
 * @file main.c
 * @brief 『スッキリわかるC言語入門』練習問題10-1
 * @author nafuka11
 * @date 2019-12-31
 * @details char配列のコピー、添字演算子の練習
 */
#include <stdio.h>
#include <string.h>

/**
 * @brief 変数の内容表示
 * @param agesAddr 長さ3のchar配列
 */
void sub(char* agesAddr)
{
  for (int i = 0; i < 3; i++) {
    printf("%d番目：%d\n", i+1, *(agesAddr+i));
  }
}

/**
 * @brief main関数
 * @return int 終了コード
 */
int main(void)
{
  char a[] = {1, 2, 3};
  char b[3];

  sub(&a[0]);
  memcpy(&b[0], &a[0], 3);
  sub(&b[0]);
  if (memcmp(&a[0], &b[0], 3) == 0) {
    printf("正常にコピーされました\n");
  }

  return 0;
}

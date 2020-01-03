/**
 * @file main.c
 * @brief 『スッキリわかるC言語入門』練習問題11-02
 * @author nafuka11
 * @date 2020-01-01
 * @details 2つの文字列の操作
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * @brief main関数
 * @return int 終了コード
 */
int main(void)
{
  char a[] = {49, 50, 51, 52, 53, 0};
  char b[] = "12345";

  // 1: 文字列a, bの長さを表示
  printf("aの長さ:%ld bの長さ:%ld\n", strlen(a), strlen(b));

  // 2: 文字列a, bの内容が等しいか比較
  printf("aとbが等しいか:%s\n", strcmp(a, b) ? "×" : "○");

  // 3: 文字列a, bを連結するために、文字列cをヒープ領域にメモリ確保
  char* c = malloc(strlen(a) + strlen(b) + 1);

  // 4: 3で確保した領域に文字列a, bを連結したものを格納する
  strcpy(c, a);
  strcat(c, b);
  // 連結した文字列を表示
  printf("%s\n", c);

  // 5: 3で確保した領域を解放
  free(c);

  return 0;
}

/**
 * @file practice7_3.c
 * @brief 『スッキリわかるC言語入門』練習問題7-3
 * @author nafuka11
 * @date 2019-12-29
 * @details 構造体Asciiを使いアルファベットを表示する
 */
#include <stdio.h>

/**
 * @brief main関数
 * @return int 終了コード
 */
int main(void)
{
  const int ALPHABET_CODE = 65;

  typedef struct
  {
    int code;
    char character;
  } Ascii;

  Ascii characters[26];
  for (int i = 0; i < 26; i++) {
    characters[i].code = ALPHABET_CODE + i;
    characters[i].character = characters[i].code;
  }

  for (int i = 0; i < 26; i++) {
    printf("ASCIIコード: %d 文字: %c\n", characters[i].code, characters[i].character);
  }
}
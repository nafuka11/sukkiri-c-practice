/**
 * @file filecopy.c
 * @brief 『スッキリわかるC言語入門』練習問題14-1
 * @author nafuka11
 * @date 2020-01-03
 * @details ファイルコピープログラム
 */
#include <stdio.h>

int copyFile(char src[], char dest[]);

/**
 * @brief main関数
 * @param argc コマンドライン引数の個数
 * @param argv コマンドライン引数の内容
 * @return int 終了コード（コピー成否）
 */
int main(int argc, char* argv[])
{
  // コマンドライン引数の個数確認
  const int ARGC = 3;
  if (argc != ARGC) {
    printf("コマンドライン引数の数が不正です\n");
    return 1;
  }
  return copyFile(argv[1], argv[2]);
}

/**
 * @brief コピー元ファイルの内容を指定先にコピーする
 * @param src コピー元ファイル名
 * @param dest コピー先ファイル名
 * @return int ファイルコピー成否（0=成功, 1=失敗）
 */
int copyFile(char src[], char dest[])
{
  FILE* pSrc;
  FILE* pDest;
  if ((pSrc = fopen(src, "rb")) == NULL) {
    printf("\"%s\"を開くのに失敗しました\n", src);
    return 1;
  }
  if ((pDest = fopen(dest, "wb")) == NULL) {
    printf("\"%s\"を開くのに失敗しました\n", dest);
    fclose(pSrc);
    return 1;
  }

  // ファイルコピー
  char ch;
  while ((ch = fgetc(pSrc)) != EOF) {
    if (fputc(ch, pDest) == EOF) {
      break;
    }
  }

  fclose(pSrc);
  fclose(pDest);
  return 0;
}

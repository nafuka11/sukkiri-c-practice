/**
 * @file generateBmp.c
 * @brief 『スッキリわかるC言語』練習問題14-2
 * @author nafuka11
 * @date 2020-01-03
 * @details 8x8ピクセルの青いBMPファイルを作成する
 */
#include <stdio.h>
#include <string.h>

void initHeader(char header[], int height, int width);
void fillImage(char image[], int height, int width, const char color[]);
int writeBmp(const char filename[], const char header[], const char image[], int imageLength);

/**
 * @brief main関数
 * @return int 終了コード（ファイル保存成否）
 */
int main(void)
{
  // 画像ファイル名、サイズ指定
  const char FILE_NAME[] = "bluebox.bmp";
  const int WIDTH = 8;
  const int HEIGHT = 8;
  // 色情報B, G, R
  const char COLOR[] = {-1, 0, 0};

  // BMPデータの初期化
  int imageLength = WIDTH * HEIGHT * 3;
  char header[54] = {};
  char image[imageLength];
  memset(image, 0, imageLength);

  // BMPデータの生成
  initHeader(header, HEIGHT, WIDTH);
  fillImage(image, HEIGHT, WIDTH, COLOR);
  // BMPデータをファイルに保存
  return writeBmp(FILE_NAME, header, image, imageLength);
}

/**
 * @brief BMPのヘッダーを生成
 * @param header ヘッダー（char配列）
 * @param height 縦幅
 * @param width 横幅
 */
void initHeader(char header[], int height, int width)
{
  header[0] = 66;
  header[1] = 77;
  header[2] = (int)(54 + 3 * height * width);
  header[10] = (int)54;
  header[14] = (int)40;
  header[18] = (int)width;
  header[22] = (int)height;
  header[26] = (short)1;
  header[28] = (short)24;
}

/**
 * @brief BMPの画像データを指定色で生成
 * @param image 画像データ（char配列）
 * @param height 縦幅
 * @param width 横幅
 * @param color B,G,Rのchar配列（各要素は0 or -1）
 */
void fillImage(char image[], int height, int width, const char color[])
{
  for (int i = 0; i < width * height; i++) {
    for (int j = 0; j < 3; j++) {
      image[i * 3 + j] = color[j];
    }
  }
}

/**
 * @brief BMPファイルの書き込み
 * @param filename ファイル名
 * @param header BMPヘッダーデータ
 * @param image BMP画像データ
 * @param imageLength BMP画像データの配列長
 * @return int 書き込み成否（0=成功, 1=失敗）
 */
int writeBmp(const char filename[], const char header[], const char image[], int imageLength)
{
  FILE* fp;
  if ((fp = fopen(filename, "wb")) == NULL) {
    printf("ファイルの書き込みに失敗しました\n");
    return 1;
  }
  fwrite(header, 54, 1, fp);
  fwrite(image, imageLength, 1, fp);
  fclose(fp);

  return 0;
}

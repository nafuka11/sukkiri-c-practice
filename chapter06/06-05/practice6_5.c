/**
 * @file practice6_5.c
 * @brief 『スッキリわかるC言語入門』練習問題6-5
 * @author nafuka11
 * @date 2019-12-29
 * @details メール受信のお知らせ（構造体の内容表示）
 */
#include <stdio.h>
#include <stdbool.h>

typedef char String[1024];

typedef struct {
  String title;     // 件名
  String from;      // 送信元メールアドレス
  String datetime;  // 受信日時
  int size;         // サイズ（KB）
  bool attached;    // 添付ファイルの有無
  String body;      // 本文
} Mail;

/**
 * @brief main関数
 * @return int 終了コード
 */
int main(void)
{
  Mail m = {
    "あけましておめでとう",
    "sugawara@miyabilink.jp",
    "2018/01/01 10:10:58",
    302,
    false
  };
  printf("%sさんから、%sにメールです。サイズは%dKB、添付ファイル: %s\n",
         m.from,
         m.datetime,
         m.size,
         m.attached ? "有" : "無");
  return 0;
}
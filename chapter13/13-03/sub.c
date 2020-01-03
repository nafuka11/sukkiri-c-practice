#include <stdlib.h>
#include <time.h>

const int MAX_MESSAGE = 3;

/**
 * @brief 乱数を生成する
 * @param max
 * @return int 0-maxまでの乱数
 */
int createRand(int max)
{
  srand((unsigned)time(0UL));
  return (rand() % max) + 1;
}

/**
 * @brief 引数に応じたメッセージを返す
 * @param num 1〜MAX_MESSAGEまでの整数
 * @return char* メッセージ
 */
char* selectMsg(int num)
{
  char* rem;

  switch (num) {
    case 1:
      rem = "When you give up, that's when the game is over.";
      break;
    case 2:
      rem = "He stole something quite precious...your heart.";
      break;
    case 3:
      rem = "There's only one truth!";
      break;
    default:
      rem = "[ERROR] Undefined message!!!";
      break;
  }
  return rem;
}

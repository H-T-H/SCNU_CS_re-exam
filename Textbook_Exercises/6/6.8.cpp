/*
8．修改解决硬币找零问题的程序，使之能输出解的组成。
*/
#include <iostream>
using namespace std;
void makechange(int coins[], int differentCoins, int maxChange, int coinUsed[])
{
    coinUsed[0] = 0;
    for (int cents = 1; cents <= maxChange; cents++)
    {                         // 找出所有1到maxChange之间的找零方案
        int minCoins = cents; // 都用1分找零，硬币数最大
        for (int j = 1; j < differentCoins; j++)
        { // 尝试所有硬币
            if (coins[j] > cents)
                continue;                                  // coin[j]硬币不可用
            if (coinUsed[cents - coins[j]] + 1 < minCoins) // 分解成coins[i]和cents-coins[j]
                minCoins = coinUsed[cents - coins[j]] + 1; // 用此硬币
        }
        coinUsed[cents] = minCoins;
    }
}
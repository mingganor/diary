#include <stdio.h>
#include <math.h>

int main()
{
    // 遍历 y 轴（从上到下，因为控制台是逐行打印的）
    for (int y = 10; y >= 0; y--)
    {
        // 遍历 x 轴
        for (int x = -10; x <= 10; x++)
        {
            // 如果当前坐标接近函数值，打印 *
            if (y == (int)(0.1 * x * x))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
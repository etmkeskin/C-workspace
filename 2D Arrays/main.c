#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nums[3][2] = {
                    {1, 9},
                    {3, 4},
                    {5, 6}
                    };
    printf("example: %d\n", nums[1][1]);

    int i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 2; j++){
            printf("%d, ", nums[i][j]);
        }
    }

    return 0;
}

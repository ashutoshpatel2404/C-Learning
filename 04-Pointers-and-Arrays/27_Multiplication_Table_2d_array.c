#include <stdio.h>

int main(){
    int array[3][10];
    int a,b,c;
    for (int i = 0; i < 3; i++)
    {
        if (i%3==0)
        {
            for (int x = 0; x < 10; x++)
            {
                printf("%d ",array[i][x]=3*(x+1));
            }
            printf("\n");
        }
        else if (i % 3 == 1) {
            for (int y = 0; y < 10; y++)
            {
                printf("%d ",array[i][y]=7*(y+1));
            }
            printf("\n");
        }
        else if (i % 3 == 2) {
            for (int z = 0; z < 10; z++)
            {
                printf("%d ",array[i][z]=9*(z+1));
            }
            printf("\n");
        }
    }
    return 0;
}
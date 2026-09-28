#include <stdio.h>

float avg(int x, int y,int z);

int main(){
    int a,b,c;
    printf("Enter three numbers to find average : \n");
    scanf("%d %d %d",&a,&b,&c);
    float Average = avg(a,b,c);
    printf("The average is %.2f",Average);
    return 0;
}

float avg(int x, int y,int z){
    float average=(x+y+z)/3.0;
    return average;
}
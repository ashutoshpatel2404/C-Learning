#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter Marks for each Subject : ");
    scanf("%d %d %d",&a,&b,&c);
    if ((a+b+c)/3>40 && a>=33 && b>=33 && c>=33){
        printf("The student has passed");
    }
    else{
        printf("The student has failed");
    }
    return 0;
}
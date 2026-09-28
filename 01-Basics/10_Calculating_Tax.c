#include <stdio.h>

int main(){
    float a;
    printf("Your Income : ");
    scanf("%f",&a);
    if (a<=250000){
        printf("You have no Tax");
    }
    else if (a>250000 && a<=500000){
        printf("Your Tax is : %.2f",(a-250000)/20);
    }
    else if (a>500000 && a<=1000000){
        printf ("Your Tax is : %.2f",(250000/20)+((a-500000)/5));
    }
    else{
        printf("Your Tax is : %.2f",(250000/20)+(500000/5)+(a-1000000)*(3.0/10.0));
    }
    return 0;
}
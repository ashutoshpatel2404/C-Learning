#include <stdio.h>

int main(){
    float a,b,c,d;
    printf("Enter any four Numbers : ");
    scanf("%f %f %f %f",&a,&b,&c,&d);
    if (a>=b && a>=c && a>=d){
        printf ("%f is the greatest number",a);
    }
    else if (b>=a && b>=c && b>=d){
        printf ("%f is the greatest number",b);
    }
    else if (c>=a && c>=b && c>=d){
        printf ("%f is the greatest number",c);
    }
    else if (d>=a && d>=b && d>=c){
        printf ("%f is the greatest number",d);
    }

    return 0;
}
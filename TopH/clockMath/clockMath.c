#include<stdio.h>
#include<math.h>

int main(){

    int h,m;
    scanf("%d %d",&h,&m);
    float angle=fabs(30*h-5.5*m);
    if(angle>180){
        angle=360-angle;
    }
    printf("%f\n",angle);
    return 0;
}
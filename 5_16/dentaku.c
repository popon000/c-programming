#include <stdio.h>
float tasu(float a,float b);
float hiku(float a,float b);
float kakeru(float a,float b);

int main (void){
int mode;
float a,b,n;
printf("モード選択(1:+,2:-,3:*)\n");
scanf("%f",&mode);
printf("１つ目の値の入力:\n");
scanf("%f",&a);
printf("２つ目の値の入力");
scanf("%f",&b);

switch(mode){
    case 1;
    printf("足し算を選択しました。\n");
    n=tasu(a,b);
    break;
    case 2;
    printf("引き算を選択しました。\n");
    n=hiku(a,b);
    break;
    case 3
    printf("掛け算を選択しました。\n");
    n=kakeru(a,b);
    break;
    defult
    
}



return 0;
}

float tasu(float a, float b){
    float n;
    n=a+b;
    return n;
}
float hiku(float a, float b){
    float n;
    n=a-b;
    return n;
}
float kakeru(float a, float b){
    float n;
    n=a*b;
    return n;
}



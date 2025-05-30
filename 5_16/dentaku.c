#include <stdio.h>
float tasu(float a,float b);
float hiku(float a,float b);
float kakeru(float a,float b);

int main (void){
int mode;
float a,b,n;

printf("モード選択を選択してください。1.足し算2.引き算3.かけ算\n");
scanf("%d",&mode);

printf("１つ目の値の入力:\n");
scanf("%f",&a);

printf("２つ目の値の入力\n");
scanf("%f",&b);

if(mode==1){
printf("足し算を選択しました\n");
n=tasu(a,b);
}else if(mode==2){
printf("引き算を選択しました\n");
n=hiku(a,b);
}else if(mode==3){
printf("かけ算を選択しました\n");
n=kakeru(a,b);    
}else{
printf("不正なモードです\n");    
}
printf("答えは%dです。\n",n);
return 0;
}

float tasu(float a, float b){
    return a+b;
}
float hiku(float a, float b){
    return a-b;
}
float kakeru(float a, float b){
    return a*b;
}



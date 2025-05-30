//長方形の面積を求める関数を作りなさい
//2つの値を実数を受け取り、その値を掛け算した値を返す関数
#include <stdio.h>
//関数のプロトタイプ宣言

float tilyouhoukei(float l,float r) ; 
//main関数
int main (void){
float s = tilyouhoukei(5.0 ,3.0);
printf("%f\n",s);    
return 0;
}

//chohokei関数

float tilyouhoukei(float l,float r){
    float s;
    s=l*r;    
    return s;
}
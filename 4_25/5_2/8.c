#include <stdio.h>

int main() {
    // 1の段：1×1〜1×9まで表示
    int i=1,s;
        for(s=1;s<=9;s++){
            printf("%d*\n",i*s);
        }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    int nabe, i;
    char str[256];
    srand((unsigned int)(time(NULL)));

    nabe = 36;
    printf("%d\n", nabe);

    if(nabe % 3 == 0){
        printf("あほになりました(3の倍数です)\n");
    }

    //数値を文字列に変換
    sprintf(str, "%d", nabe);

    for(i = 0; i < 10; i++){
        if('3' == str[i]){
            printf("あほになりました(数値の中に3が含まれています)\n");
        }
    }

}
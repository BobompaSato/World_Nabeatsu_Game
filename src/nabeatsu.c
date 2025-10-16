#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    int nabe;
    char str[256];
    srand((unsigned int)(time(NULL)));

    nabe = rand();
    printf("%d\n", nabe);

    //数値を文字列に変換
    sprintf(str, "%d", nabe);

    if(nabe % 3 == 0){

        printf("あほになりました\n");

    }else if(nabe % 2 == 0){
        

    }
}
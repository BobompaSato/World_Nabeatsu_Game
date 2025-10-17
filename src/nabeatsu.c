/*=====そもそも世界のナベアツとは？=====

・3の倍数と3のつく数字のときだけアホになる
・5の倍数の時に犬っぽくなる
・8の倍数の時に人探しをしている感じになる

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void judge_nabe(int number);

int main(void){

    int number = 0;

    printf("数値を整数で入力してください:\n");
    scanf("%d", &number);

    judge_nabe(number);

    return 0;

}

void judge_nabe(int number){

    int i;
    char str[256];
    int aho_flag = 0;

    if(number % 3 == 0){
        aho_flag = 1;
    }

    sprintf(str, "%d", number);
    //(strchrは文字が見つかればその場所を、見つからなければNULLを返す)
    if(strchr(str, '3') != NULL){
        aho_flag = 1;
    }

    if(aho_flag == 1){
        printf("あほになりました！\n");
    }

}
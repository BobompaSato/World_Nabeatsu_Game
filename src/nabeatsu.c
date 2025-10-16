/*=====そもそも世界のナベアツとは？=====

・3の倍数と3のつく数字のときだけアホになる
・5の倍数の時に犬っぽくなる
・8の倍数の時に人探しをしている感じになる

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    int nabe, i, count;
    char str[256];
    srand((unsigned int)(time(NULL)));

    nabe = rand();
    printf("%d\n", nabe);

    if(nabe % 3 == 0){
        printf("あほになりました(3の倍数です)\n");
    }

    //数値を文字列に変換
    sprintf(str, "%d", nabe);

    for(i = 0; i < 10; i++){
        if('3' == str[i]){
            printf("あほになりました(数値の中に3が含まれています)\n");
            count = 1;
            if(count == 1){
                break;
            }
        }
    }

}
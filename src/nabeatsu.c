/*=====そもそも世界のナベアツとは？=====

・3の倍数と3のつく数字のときだけアホになる
・5の倍数の時に犬っぽくなる
・8の倍数の時に人探しをしている感じになる

*/

int judge_nabe();

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    int number;
    srand((unsigned int)(time(NULL)));

    printf("数値を整数で入力してください:\n");
    scanf("%d", &number);

    int nabe = judge_nabe(number);
    printf("%d\n", nabe);


}

int judge_nabe(int number){

    int i, count;
    char str[256];

    if(number % 3 == 0){
        printf("あほになりました(3の倍数です)\n");
    }

    //数値を文字列に変換
    sprintf(str, "%d", number);

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
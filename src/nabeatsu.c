#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    int nabe;
    srand((unsigned int)(time(NULL)));

    nabe = rand();
    printf("%d\n", nabe);

    if(nabe % 3 == 0){
        printf("あほになりました\n");
    }

}
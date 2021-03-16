#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    char str[10000];
    int t;

    scanf("%d", &t);

    for(int i=0; i<t; i++){
        scanf("%s", &str);
        int len = strlen(str);

        for(int j=0; j<len; j++){
            if(j%2==0){
              printf("%c", str[j]);
            }
        }

        printf(" ");

        for(int k=0; k<len; k++){
            if(k%2!=0){
            printf("%c", str[k]);
            }
        }

        printf("\n");
    }

    return 0;

}

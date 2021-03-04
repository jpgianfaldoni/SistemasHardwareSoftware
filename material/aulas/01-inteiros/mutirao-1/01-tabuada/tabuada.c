#include <stdio.h>

void tabuada(n){
    for(int i = 2; i <=n; i++){
        for(int j =1; j <= n; j ++){
            int s = j * i;
            printf("%d", s);
            
        }
    }
}


int main(int argc, char *argv[])
{
    printf("Hello World");

    return 0;
}

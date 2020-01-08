#include <stdio.h>

int main() {
    int x;
    int y;
    int soma;


    printf("Um numero? \n");
    scanf("%d", &x);
    printf("Outro numero? \n");
    scanf("%d", &y);

    soma = x + y;
    printf("Soma:%d \n",soma);

    if(x>y){
        printf("O maior é:%d \n",x);
    } else if(y>x){
        printf("O maior é:%d \n", y);
    } else if(x==y){
        printf("%d e %d são iguais \n",x ,y);
    }

}
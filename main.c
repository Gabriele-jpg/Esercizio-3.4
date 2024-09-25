#include <stdio.h>
int main(){
    char nome, sesso;
    printf("dati in input il nome ed il sesso visualizza scritte diverse;\n nome");
    scanf("%c", &nome);
    getchar();
    printf("sesso m o f:");
    scanf("%c", &sesso);
    if(nome == sesso )
        printf( "Egregio signor %c\n",nome);
                 else {
                    printf("Gentilissima signora %c\n",nome );
                }
    return 0;
}
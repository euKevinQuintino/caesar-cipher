#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void Decodifica(char s[]){
    int i = 0;
    while(!s[i]=='\0'){
        if(s[i]=='\n'){
            printf("\n");
        }else{
            if(s[i]=='\r'){
            printf("\r");
            }else{
                if('A'<=s[i] && 'Z'>=s[i] || 'a'<=s[i] && 'z'>=s[i]){
                    printf("%c", s[i]-3);
                    i++;
                }else{
                    printf("%c", s[i]);
                    i++;
                }
            }
        }
    }
}


void Codifica(char s[]){
    int i = 0;
    while(!s[i]=='\0'){
        if('A'<=s[i] && 'W'>=s[i] || 'a'<=s[i] && 'w'>=s[i]){
            printf("%c", s[i]+3);
            i++;
        }else{
            if('X'<=s[i] && 'Z'>=s[i]){
                printf("%c", s[i]-23);
                i++;
            }else{
                if('x'<=s[i] && 'z'>=s[i]){
                    printf("%c", s[i]-23);
                    i++;
                }else{
                    printf("%c", s[i]);
                    i++;
                }
            }
        }
    }
}


int main(){
    int escolha;
    char mensagemInserida[1024] = {};
    printf("Deseja codificar? Digite 0\nDeseja decodificar? Digite 1\n");
    scanf("%d", &escolha);
    fflush(stdin);
    if(!escolha){
        puts("Digite a mensagem que deseja codificar");
        gets(mensagemInserida);
        printf("\nMENSAGEM CODIFICADA:\n");
        Codifica(mensagemInserida);
    }
    if(escolha){
        puts("Digite a mensagem que deseja decodificar");
        gets(mensagemInserida);
        printf("\nMENSAGEM DECODIFICADA:\n");
        Decodifica(mensagemInserida);
    }
    return 0;
}

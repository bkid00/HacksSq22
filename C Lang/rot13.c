#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define MAX_VALUE 65535

int usage(void);
char encode();

char result[MAX_VALUE] = "";
char text[1024];
char letter;    

int main(int argc, char *argv[]){

    if (argc != 2){
        printf("ERROR\n");
        usage();
    }
    else{
        if(strcmp(argv[1], "-e") == 0){
            // printf("Enter the Msg to encode: ");
            // scanf("%[^\n]%*c", text);
            // for (int i = 0; i <= strlen(text); i++){
            //     if (text[i] <= 109){
            //         letter = text[i] + 13;
            //         strncat(result, &letter, 1);
            //         //printf("%c\n", text[i] + 13);
            //         //printf("%c\n", letter);
            //     }
            //     else if (text[i] >= 110){
            //         letter = text[i] - 13;
            //         strncat(result, &letter, 1);
            //         //printf("%c\n", letter2);
            //         //printf("%c\n", text[i] - 13);
            //     }
            // }
            // printf("%s\n", result);
            encode();
        }
        else if(strcmp(argv[1], "-d") == 0){
            printf("Enter the Msg to decode: ");
            fgets(text, MAX_VALUE, stdin);
            for (int i = 0; i <= strlen(text); i++){
                if (text[i] <= 109){
                    letter = text[i] + 13;
                    strncat(result, &letter, 1);
                    //printf("%c\n", text[i] + 13);
                }
                else if (text[i] >= 110){
                    letter = text[i] - 13;
                    strncat(result, &letter, 1);
                    //printf("%c\n", text[i] - 13);
                }
            }
            printf("%s\n", result);
        }
        else{
            printf("Usage");
            usage();
        }
    }
}
int usage(void){
    printf("Usage:\n-e : Encoding a Message\n-d : Decoding a Message\n(example)\n./rot13 -e\n./rot13 -d\n");
}

char encode(){
    printf("Enter the Msg to encode: ");
    scanf("%[^\n]%*c", text);
    for (int i = 0; i <= strlen(text); i++){
        if (text[i] <= 109){
            letter = text[i] + 13;
            strncat(result, &letter, 1);
            //printf("%c\n", text[i] + 13);
            //printf("%c\n", letter);
        }
        else if (text[i] >= 110){
            letter = text[i] - 13;
            strncat(result, &letter, 1);
            //printf("%c\n", letter2);
            //printf("%c\n", text[i] - 13);
        }
    }
    printf("%s\n", result);
    return &result;
}

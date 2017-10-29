#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])

{
    if(argv[1] == NULL){
        printf("Usage: ./caesar key\n");
        return 1;
        }

    else {

        int key = atoi(argv[1]);
        printf("plaintext: ");

        string text  = get_string();

        printf("ciphertext: ");
        for (int i = 0, n = strlen(text); i < n; i++)
            {

                if (islower(text[i])){

                  printf("%c", (((text[i] + key) - 97) % 26) + 97);}

                else if (isupper(text[i])){
                    printf("%c", (((text[i] + key) - 65) % 26) + 65);}

                else{
                    printf("%c", text[i]);}
            }

            printf("\n");
            return 0;
    }

}






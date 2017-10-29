#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{

// Check if input via command prompt is valid

//Checking if there is no key
    if (argv[1] == NULL) {
        printf("No parameters. Use key\n");
        return 1;
    }

//Cheking if there are several keys
    else if (argv[2] != NULL)
    {
        printf("only 1\n");
        return 1;
    }

//Cheking if key contains only alphabetical characters
    else
    {
        for(int k=0; k < strlen(argv[1]); k++)
        {
            if (isalpha(argv[1][k])==false)
            {
                printf("only alphabetical\n");
                return 1;
            }
        }
    }

    string key = argv[1];
    int keylength=strlen(key);

// Transforming key from char to integers and saving them to massive
    int keyint[keylength];
        // keyint[0] = atoi(argv[1][0]);
        for(int i = 0; i < keylength;i++)
         {
            keyint[i] = tolower(key[i]) - 97;
// check            printf("\n%d",keyint[i]);
         }

// Getting text to cipher
        printf("plaintext: ");
        string plaintext=get_string();
        printf("ciphertext: ");

//Ciphering
    int plaintextlength = strlen(plaintext);
    int cipheredtext[plaintextlength];

    for(int t=0, k=0; t < plaintextlength; t++, k++){
        // printf("Start T=%d K=%d ",t,k);
        if(isalpha(plaintext[t])==false){
            printf("%c",plaintext[t]);
        }

        else if (islower(plaintext[t])){
                cipheredtext[t] = (((plaintext[t] + keyint[k]) - 97) % 26) + 97;
                printf("%c",cipheredtext[t]);
        }

        else if (isupper(plaintext[t])){
                cipheredtext[t] = (((plaintext[t] + keyint[k]) - 65) % 26) + 65;
                printf("%c",cipheredtext[t]);
        }

            if ((t + 1) % keylength == 0 && t != 0){
                k = k - keylength;
            }
            // printf(" Modulo %d",(t+1) % keylength);
            // printf(" End T=%d K=%d\n",t,k);
    }

                printf("\n");
                return 0;

    }







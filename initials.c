#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{


        // printf("Приветик! Напиши свое имя и фамилию \n");
        string fio  = get_string();

         if( fio[0] != ' '){
        printf("%c", toupper(fio[0]));}
        else{}

       for(int i = 0; fio[i] != '\0'; ++i)
       {
         if( fio[i] == ' ' && fio[i+1] != ' ' && fio[i+1] != '\0')
         {

          printf("%c", toupper(fio[i+1]));
         }
         else{}
       }
       printf("\n");
}
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{

    if (argc != 2)
    {
        printf("Uso: ./ chave de substituição\n");
        return 1;

    }

    char text = tolower(argv[1][0]);
    int n = strlen(argv[1]);
    int cont = 0;


    for(int i = 0; i < n; i++){
        if((argv[1][i] >= 48  && argv[1][i] <= 57)){
             printf("Uso: ./ chave de substituição\n");
             return 1;
         }

     }

     for(int i = 0; i <= n; i++){
       for (int j = 0 ; j <= n; j++){
        if(argv[1][i] == argv[1][j]){
          cont++;
          if(cont >= 2){
             printf("Uso: ./ chave de substituição\n");
             return 1;
          }
        }
       }
       cont = 0;
     }


     if(n != 26){
             printf("A chave deve conter 26 caracteres.\n");
             return 1;
    }


    string ch;
    string p = get_string("texto simples: ");
    char c[strlen(p)];
    string k = argv[1];

    for(int i = 0, x = strlen(p); i <= x; i++){

      if(islower(p[i])){

            if((char)p[i] - 97 <= 26){

            c[i] = k[(char)p[i] - 97];

            }

      }else if(isupper(p[i])){

             if((char)p[i] - 65 <= 26){

             c[i] = k[(char)p[i] - 65];

             }

      }else{

        c[i] = p[i];

      }

    }

    for(int i = 0, x = strlen(c); i < x; i++){

      if(isupper(p[i])){

       c[i] = toupper(c[i]);

      }else{

      c[i] = tolower(c[i]);

      }

    }

    printf("ciphertext: %s\n", c);
    return 0;
}
//
//  main.c
//  EcrireEtLireFichier
//
//  Created by Hadrien Delobel on 01/09/2023.
//

#include <stdio.h>
#define XSTR(s) #s
#define STR(s) XSTR(s)
 
#define SIZE 100

int main(int argc, const char * argv[]) {
    FILE * fp;
        char str[SIZE + 1];  // Allocate enough memory to hold user input
        
        // Open the file in "a+" mode (append and read)
        fp = fopen("/Users/hadriendelobel/Documents/TPalgoFin/4villes.txt", "r+");
        if (fp == NULL) {
            printf("Erreur lors de l'ouverture du fichier\n");
            return 1;
        }
        
        char c = fgetc(fp);
        while (c != EOF) {
            printf("%c", c);
            c = fgetc(fp);
        }
        
        printf("\nEcrivez dans le fichier: ");
        scanf("%"STR(SIZE)"[^\n]", str);
        fputs(str, fp);
        // Close the file before appending to it
        fclose(fp);
    return 0;
}

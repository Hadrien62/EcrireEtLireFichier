//
//  main.c
//  EcrireEtLireFichier
//
//  Created by Hadrien Delobel on 01/09/2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    FILE * fp;
    fp = fopen("/Users/hadriendelobel/Documents/TPalgoFin/4villes.txt", "r");
    if(fp == NULL){
        printf("Erreur lors de l'ouverture du fichier\n");
        return 1;
    }
    char c = fgetc(fp);
    while(c != EOF){
        printf("%c", c);
        c = fgetc(fp);
    }
    return 0;
}

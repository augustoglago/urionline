#include <bits/stdc++.h>

int main(){
    int n, par = 0, impar = 0, negativo = 0, positivo = 0;
    for (int i = 0; i < 5; i++){
        scanf("%d", &n);
        if(n % 2 == 0) par++;
        else impar++;
        if(n > 0) positivo++;
        else if(n < 0) negativo++;
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", par, impar, positivo, negativo);
    return 0;

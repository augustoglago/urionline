#include <bits/stdc++.h>

int main(){
    int vezes, n;
    scanf("%d", &vezes);
    for(int a = 0; a < vezes; a++){
        bool ePrimo = true;
        scanf("%d", &n);
        for(int x = 2; x < n; x++){
            if(n % x == 0) ePrimo = false;
        }
        if(ePrimo)
            printf("%d eh primo\n", n);
        else
            printf("%d nao eh primo\n", n);
    }
    return 0;
}

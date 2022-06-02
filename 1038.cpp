#include <bits/stdc++.h>

int main (){
    int codigo, quantidade;
    double preco;
    scanf("%d", &codigo);
    scanf("%d", &quantidade);
    switch (codigo){
        case 1:
            preco = quantidade*4.0;
            break;
        case 2:
            preco = quantidade*4.5;
            break;
        case 3:
            preco = quantidade*5.0;
            break;
        case 4:
            preco = quantidade*2.0;
            break;
        case 5:
            preco = quantidade*1.5;
            break;
    }
printf("Total: R$ %.2lf\n",preco);
   return 0; 
}

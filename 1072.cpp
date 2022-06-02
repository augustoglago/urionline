#include <bits/stdc++.h>

int main(){
    int n, vezes, cont = 0, in=0, out=0;
    bool pleitura = true;
    do{
        if(pleitura){
            scanf("%d", &vezes);
            pleitura = false;
        }else {
            scanf("%d", &n);
            if(n >= 10 && n <= 20)
                in++;
            else
                out ++;
            cont++;
        }
    }while(cont < vezes);
    printf("%d in\n%d out\n", in, out);
return 0;
}

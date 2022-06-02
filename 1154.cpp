#include <bits/stdc++.h>

int main(){
    int i=0, a;
    double media, cont=0;
    while(1){
        scanf("%d", &a);
        if(a < 0)
        break;
        i = i + a;
        cont++;
    }
    media=i/cont;
    printf("%.2lf\n", media);

    return 0;
}

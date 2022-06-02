#include <bits/stdc++.h>
int main (){
    int cont;
    char x[100000];
    scanf("%s",x);
    for(cont=strlen(x)-1; cont>=0; cont--){
    printf("%c",x[cont]);
    }
    printf("\n");
    return 0;
}

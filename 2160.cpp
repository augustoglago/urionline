#include <bits/stdc++.h>

int main(){
    int x;
    char nome[500];
    scanf("%[^\n]", &nome);
    x=strlen(nome);
    if(x<=80)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}

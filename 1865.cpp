#include <bits/stdc++.h>
int main (){
    int n,c;
    char nome[20];
    scanf("%d",&c);
    do{
        scanf("%s %d",nome,&n);
        if(strcmp(nome,"Thor"))
            printf("N\n");
        else
            printf("Y\n");
        c--;
    }while(c>0);
    return 0;
}

#include <bits/stdc++.h>

int main (){
    int i,s=0;
    char x[500];
    scanf("%s",x);
    for(i=0;i<strlen(x);i++){
        if(x[i]=='1')
            s++;
    }
    if(s%2==0)
        printf("%s0\n",x);
    else
        printf("%s1\n",x);
    return 0;
}

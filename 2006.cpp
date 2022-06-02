#include <bits/stdc++.h>

int main(){
    int N[5],i,T,s=0;
    scanf("%d",&T);
    for(i=0;i<5;i++){
        scanf("%d",&N[i]);
        if(N[i]==T)
            s++;
    }
    printf("%d\n",s);

    return 0;
}

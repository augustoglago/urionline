#include <bits/stdc++.h>

int main(){
    int t[5],p[5],i,s=0;
    for(i=1;i<6;i++){
        scanf("%d",&t[i]);
    }
    for(i=1;i<6;i++){
        scanf("%d",&p[i]);
    }
    for(i=1;i<6;i++){
        if(t[i]==p[i])
            s++;
    }
    if(s==0)
        printf("Y\n");
    else
        printf("N\n");

    return 0;
}

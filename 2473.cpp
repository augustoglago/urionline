#include <bits/stdc++.h>

int main(){
    int F[6],S[6],i,s=0,j;
    for(i=0;i<6;i++){
        scanf("%d",&F[i]);
    }
    for(i=0;i<6;i++){
        scanf("%d",&S[i]);
    }
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
        if(F[i]==S[j])
            s++;
        }
    }    
    if(s<3)
        printf("azar\n");
    else if(s==3)
        printf("terno\n");
    else if(s==4)
        printf("quadra\n");
    else if(s==5)
        printf("quina\n");
    else if(s==6)
        printf("sena\n");
    return 0;
}

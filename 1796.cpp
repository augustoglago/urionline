#include <bits/stdc++.h>

int main(){
    int q, o, y=0, n=0;
    scanf("%d", &q);
    for(int i = 0; i < q; i++){
        scanf("%d", &o);
        if (o == 0)
            y++;
        else
            n++;
    }
    if(n>=y)
        printf("N\n");
    else
        printf("Y\n");
return 0;
}

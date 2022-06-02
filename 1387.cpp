#include <bits/stdc++.h>

int main(){
    int r = 0, l = 0;
    do{
        scanf("%d", &r);
        scanf("%d", &l);
        if(l != 0 || r != 0)
            printf("%d\n", l+r);
    }while(l != 0 || r != 0);
return 0;
}

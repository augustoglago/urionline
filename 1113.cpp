#include <bits/stdc++.h>

int main ()
{
    bool loop = true;
    while (loop){
        int x, y;
        scanf ("%d", &x);
        scanf ("%d", &y);
        if(x > y){
            printf("Decrescente\n");
        }else if(x < y){
            printf("Crescente\n");
        }else{
            loop = false;
        }
    }
    
    return 0;
}

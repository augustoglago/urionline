#include <bits/stdc++.h>

int main(){
    int x,y,temp, s=0;
    scanf("%d", &x);
    scanf("%d", &y);
    if(x > y){
        temp = x;
        x = y;
        y = temp;
    }
    for(int i = x; i <= y; i++){
        if(i % 13 != 0)
        s += i;
    }
    printf("%d\n", s);
    return 0;
}

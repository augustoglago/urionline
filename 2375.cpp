#include <bits/stdc++.h>

int main(){
    int N, A, L, P;
    scanf("%d", &N);
    scanf("%d", &A);
    scanf("%d", &L);
    scanf("%d", &P);
    if (N <= A && N <= L && N <= P){
        printf("S\n");
    }
    else {
        printf("N\n");
    }
    
    return 0;
}

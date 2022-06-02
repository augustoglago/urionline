#include <bits/stdc++.h>

int main(){
    double s, ns, r;
    int p;
    scanf("%lf", &s);
    if (s <= 400.0) {
        p = 15;
    }
    else if (s <= 800) {
        p = 12;
    }
    else if (s <= 1200) {
        p = 10;
    }
    else if (s <= 2000) {
        p = 7;
    }
    else {
        p = 4;
    }
    r = (p/100.0*s);
    ns = s + r;
    printf("Novo salario: %.2lf\n", ns);
    printf("Reajuste ganho: %.2lf\n", r);
    printf("Em percentual: %d %%\n", p);
    
    return 0;
}

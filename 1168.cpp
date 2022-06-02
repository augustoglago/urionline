#include <bits/stdc++.h>

int main ()
{
    int n,i,j,s=0;
    char v[1000];
    scanf("%d",&n);
    for(j=0; j<n; j++)
    {
        scanf("%s",&v);
        s=0;
        for(i=0; i<strlen(v); i++)
        {
            if (v[i]=='1')
                s+=2;
            else if (v[i]=='2')
                s+=5;
            else if (v[i]=='3')
                s+=5;
            else if (v[i]=='4')
                s+=4;
            else if (v[i]=='5')
                s+=5;
            else if (v[i]=='6')
                s+=6;
            else if (v[i]=='7')
                s+=3;
            else if (v[i]=='8')
                s+=7;
            else if (v[i]=='9')
                s+=6;
            else if (v[i]=='0')
                s+=6;
        }
        printf("%d leds\n",s);
    }
    return 0;
}

#include <bits/stdc++.h>

int main (){
  double a, b, c, delta, r1, r2;
  scanf ("%lf", &a);
  scanf ("%lf", &b);
  scanf ("%lf", &c);
  if (a == 0)
    {
      printf ("Impossivel calcular\n");
    }
  else
    {
      delta = pow (b, 2) - 4 * a * c;
      if (delta > 0)
	{
	  r1 = (-b + sqrt (delta)) / (2.0 * a);
	  r2 = (-b - sqrt (delta)) / (2.0 * a);
	  printf ("R1 = %.5lf\n", r1);
	  printf ("R2 = %.5lf\n", r2);
	}
      else if (delta == 0)
	{
	  r1 = -b / (2.0 * a);
	  printf ("R1 = %.5lf\n", r1);
	}
      else{
        printf ("Impossivel calcular\n");
      }
        
    }
  return 0;
}

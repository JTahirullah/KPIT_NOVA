#include <stdio.h>
#include <stdbool.h>
bool isHydrated (int waterIntake)
{
  return (waterIntake>=2000);
}
int main (void)
{
  int T, X;
  scanf ("%d", &T);
  while (T > 0)
    {
      scanf ("%d", &X);
      if (isHydrated (X))
        {
          printf ("YES\n");
        }
      else
        {
          printf ("NO\n");
        }
      T--;
    }
  return 0;
}


b)

#include <stdio.h>
int main()
{
  int i;
  for (i=0;i<=100;i=i+5)
  { 
    if (i%2==0)
      printf("%d"\n", i);
  }
    return 0;
 }
 
 2.a)
 
 #include <stdio.h>
 int main() 
{
  int i = 1;
  while (i < 1000) 
  { 
    i++;
    if (i%4!=0) 
      continue;
    printf("%d\n", i);  
  } 
   return 0;
}

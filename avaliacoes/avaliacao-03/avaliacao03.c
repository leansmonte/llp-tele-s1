
a)

#include <stdio.h>
#include <math.h>

float CalcularDelta (float a, float b, float c){
	float delta;
	delta=(b*b)-4*a*c;
	return delta;
	}
	
float CalcularRaiz1 (float a, float b, float c, float delta){
	float raiz1;
	raiz1=(-b+sqrt(delta))/(2*a);
	return raiz1;
    }
	
float CalcularRaiz2 (float a, float b, float c, float delta){
	float raiz2;
	raiz2=(-b-sqrt(delta))/(2*a);
	return raiz2;
    }


int main() 
{


float a, b, c, delta,raiz1,raiz2;

     printf("digite o valor de a:\n");
     scanf("%f",&a);
     printf("digite o valor de b:\n");
     scanf("%f",&b);
     printf("digite o valor de c:\n");
     scanf("%f",&c);
          if(a!=0){

                  delta=CalcularDelta(a,b,c);
                  printf("valor de delta:%.2f\n",delta);
                  }    
          if (delta==0){

                       raiz1=CalcularRaiz1(a,b,c,delta); 
                       printf("raizes igual a: %.2f\n",raiz1);
                       }
             else {

                   if (delta>0){
	                           raiz1=CalcularRaiz1(a,b,c,delta);
	                           raiz2=CalcularRaiz2(a,b,c,delta);
	                           printf("raiz 1 igual a: %.2f\n",raiz1);
	                           printf("raiz 2 igual a: %.2f\n",raiz2);
                               }
                               else{
	                                printf("raizes imaginarias!\n",delta);
                                   }
	


 
                  }

  
    return 0;
}

b)

#include <stdio.h>
#include<string.h>

void inverter (char str [])
 {
  int t=strlen(str);
  int i;
  int a;
  int f;
  f=t-1;
  for (i=0;i<t/2;i++)
       {
       a=str[i];
       str[i]=str[f];
       str[f]=a;
       f--;
       }

  }

int main()
{
  char str[50];
  printf(!"digite:\n");
  scanf("%s",&str);
  inverter(str);
  printf("%s\n",str);
  
  return 0;
}

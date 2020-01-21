#include <stdio.h>

int main ()
{
  int i, j;
  int N = 5;
  j = 1;
  while(j <= N){
  	i = 1;
  	while(i <= N){
  		if ( (i/j) >= 1 || (i%3) == 2)
  			printf("*");
  		else
  			printf("%d", i+j);
  		i++;
  	}
  	printf("\n");
  	j++;
  }
  return 0;
}




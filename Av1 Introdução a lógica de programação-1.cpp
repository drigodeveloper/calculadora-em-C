#include <stdio.h>

main(){

int n1, n2, result1, result2, result3, result4;
	{
printf("\nDigite o numero 1: ");
 scanf ("%d", &n1);
 
 printf("\nDigite o numero 2: ");
 scanf ("%d", &n2);

result1 = n1 + n2;
result2 = n1 - n2;
result3 = n1 * n2;
result4 = n1 / n2;

printf("\n%d + %d = %d ", n1, n2, result1);
printf("\n%d - %d = %d ", n1, n2, result2);
printf("\n%d * %d = %d ", n1, n2, result3);
printf("\n%d / %d = %d ", n1, n2, result4);


	}

return 0;
}

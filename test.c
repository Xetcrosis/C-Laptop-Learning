#include <stdio.h>



int main() 
{
	int var1, var2, step;

	var1 = 0;
	var2 = 200;
	step = 3;
	
	while (var1 <= var2)
	{
		printf("\n %d", var1);
		if (var1 % 16 == 0)
		{
			printf(", %d is Divisible by 16", var1);
		}
		var1 = var1 + step;
	}
}

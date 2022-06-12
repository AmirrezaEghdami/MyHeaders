#include <stdio.h>

void fibonacci(int firstNnumbers){
    int x, y, z;
	x = 0;
	y = 1;
	for (int i = 0; i < firstNnumbers; i++){
		if (i <= 1){
			z = i;
		}
		else{
			z = x + y;
			x = y;
			y = z;
		}
		printf("%d\n",z);
	}
}
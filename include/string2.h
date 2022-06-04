#include <stdio.h>
#include <string.h>

int isAinB(char *a, char *b){
	int counter = 0;
	int aLength = strlen(a);
	int bLength = strlen(b);
	for (int i = 0; i < bLength; i++){
		if (a[0+counter] == b[i]){
			counter = counter + 1;
			if (counter == aLength){
				printf("%s is in %s",a,b);
				return 1;
			}
		}
		else{
			counter = 0;
		}
	}
	printf("%s is not in %s",a,b);
	return 0;
}

int hideAfromB(char *a, char *b){
	int counter = 0;
	int aLength = strlen(a);
	int bLength = strlen(b);
	char newB[bLength];
	strcpy(newB, b);
	for (int i = 0; i < bLength; i++){
		if (a[0+counter] == newB[i]){
			counter = counter + 1;
			if (counter == aLength){
				for (int j = 0; j < aLength; j++)
				{
					newB[i-j] = '*';
				}
				counter = 0;
			}
		}
		else{
			counter = 0;
		}
	}
	printf("%s",newB);
	return 0;
}
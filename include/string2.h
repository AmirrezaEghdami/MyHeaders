#include <stdio.h>
#include <string.h>

int isAinB(char *a, char *b){
	int n = 0;
	int aLength = strlen(a);
	int bLength = strlen(b);
	for (int i = 0; i < bLength; i++){
		if (a[0+n] == b[i]){
			n = n + 1;
			if (n == aLength){
				printf("%s is in %s",a,b);
				return 1;
			}
		}
		else{
			n = 0;
		}
	}
	printf("%s is not in %s",a,b);
	return 0;
}

int hideAfromB(char *a, char *b){
	int n = 0;
	int aLength = strlen(a);
	int bLength = strlen(b);
	char newB[bLength];
	strcpy(newB, b);
	for (int i = 0; i < bLength; i++){
		if (a[0+n] == newB[i]){
			n = n + 1;
			if (n == aLength){
				for (int j = 0; j < aLength; j++)
				{
					newB[i-j] = '*';
				}
				n = 0;
			}
		}
		else{
			n = 0;
		}
	}
	printf("%s",newB);
	return 0;
}
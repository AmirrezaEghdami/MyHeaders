// Import some headers
#include <stdio.h>
#include <string.h>

int isAinB(char *a, char *b){

	int len = 0;

	// a & b length
	int aLength = strlen(a);
	int bLength = strlen(b);

	// Check the variable a in allwhere of variable b
	for (int i = 0; i < bLength; i++){

		// Check each character of variable a in variable b
		if (a[len] == b[i]){

			// Add 1 to the variable len to go to the next character of variable a
			len = len + 1;

			// This means that if all the characters in variable a are checked and the variable a was in b
			if (len == aLength){
				// print it
				printf("%s is in %s",a,b);
				return 1;
			}
		}
		// If a character from variable a was not in variable b
		else{
			// Set the len to 0 to go to the first character of variable a to re-check variable a in b
			len = 0;
		}
	}

	// If variable a was not in variable b
	printf("%s is not in %s",a,b);
	return 0;
}

void hideAfromB(char *a, char *b){

	int len = 0;

	// a & b length
	int aLength = strlen(a);
	int bLength = strlen(b);

	/* 
	make variable newB with bLength array size
	variable newB is for making changes to it. Because variable b is Ridanley and cannot be changed
	*/
	char newB[bLength];

	// copy variable b to newB
	strcpy(newB, b);

	// Check the variable a in allwhere of variable b
	for (int i = 0; i < bLength; i++){

		// Check each character of variable a in variable b
		if (a[len] == newB[i]){

			// Add 1 to the variable len to go to the next character of variable a
			len = len + 1;

			// This means that if all the characters in variable a are checked and the variable a was in b
			if (len == aLength){
				for (int j = 0; j < aLength; j++)
				{
					// Change variable a in b with "*"
					newB[i-j] = '*';
				}
				len = 0;
			}
		}
		// If a character from variable a was not in variable b
		else{
			// Set the len to 0 to go to the first character of variable a to re-check variable a in b
			len = 0;
		}
	}
	
	// Print the new string after hide variable a in b 
	printf("%s",newB);
}

int hmtDoesAExistInB(char *a, char *b){

	int len = 0;

	// a & b length
	int aLength = strlen(a);
	int bLength = strlen(b);
	
	int result = 0;

	// Check the variable a in allwhere of variable b
	for (int i = 0; i < bLength; i++){

		// Check each character of variable a in variable b
		if (a[len] == b[i]){

			// Add 1 to the variable len to go to the next character of variable a
			len = len + 1;

			// This means that if all the characters in variable a are checked and the variable a was in b
			if (len == aLength){
				result++;
				// Set the len to 0 to go to the first character of variable a to re-check variable a in b
				len = 0;
			}
		}
		// If a character from variable a was not in variable b
		else{
			// Set the len to 0 to go to the first character of variable a to re-check variable a in b
			len = 0;
		}
	}

	// return result
	return result;
}
//DATE: 2023.09.13
//PURPOSE: A program that displas a sting in reverse order

#include <stdio.h>
#include <string.h>


//Function prototypes 
void stringReverse(char originalString[], char reversedString[]);

int main() {

	char myString[50];
	char newString[50];

	printf("\nPlease type the string you want to reverse: ");
	fgets(myString, sizeof(myString), stdin); // scanf only reads up to a space.
	printf("\nOriginal string is:\n%s", myString);
	stringReverse(myString, newString);
	printf("\nReversed string is: %s", newString);
	return 0;

}

//Function definitions

void stringReverse(char originalString[], char reversedString[]) {

	int stringSize;
	int i = 0;
	stringSize = strlen(originalString);

	for (;i < stringSize;i++) {
		reversedString[i] = originalString[(stringSize - 1) - i];
	}
	reversedString[i] = '\0';

}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

#define TRUE 1
#define FALSE 0
#define ROWS 2
#define COLUMNS 2
int Matrix[ROWS][COLUMNS]; //Global Scope Matrix

main() {
	//Get a command from the user
	char command;

	while (TRUE) {
		printf("Enter Command: ");
		scanf_s("%c", &command); //Assume input is Valid

		if (command == 'A') {
			getMatrix();
		}

		else if (command == 'B') {
			int i, j;
			printf("Enter i:");
			scanf_s("%d", &i);
			printf("Enter j:");
			scanf_s("%d", &j);

			if (isConnected(i, j) == TRUE)
				printf("True\n");
			else
				printf("False\n");

		}

		else if (command == 'C') {
			//Function C
		}

		else if (command == 'D') {
			printf("Exiting the program...\n");
			break;
		}

	}
	return 0;
}

//A
int getMatrix() {
	int i; // i Represents rows
	int j; // j Represents Columns
	int temp = 0; // temp is used for the current value input

	for (i=0; i < ROWS; i++) {
		for (j=0; j < COLUMNS; j++) {
			printf("Enter the next Matrix value:");
			scanf_s("%d", &temp);
			Matrix[i][j] = temp;
			printf("%d", Matrix[i][j]);
		}
	}

	printf("Matrix building is finished\n");
	return 0;
}

//B
int isConnected(int i, int j) {
	if (Matrix[i][j] <= 0)
		return FALSE;
	else
		return TRUE;

}

//C


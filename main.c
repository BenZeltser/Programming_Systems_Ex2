#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "my_mat.h"


#define TRUE 1
#define FALSE 0
#define ROWS 10
#define COLUMNS 10
int Matrix[ROWS][COLUMNS]; //Global Scope Matrix

main() {
	//Get a command from the user
	char command;

	while (TRUE) {
		printf("Enter Command: ");
		scanf_s("%c", &command, 1); //Assume input is Valid

		if (command == 'A') {
			getMatrix();
		}

		else if (command == 'B') {
			int i, j;
			printf("Enter i:");
			scanf_s("%d", &i);
			printf("Enter j:");
			scanf_s("%d", &j);

			isConnected(i, j);
		}

		else if (command == 'C') {
			int i, j;
			printf("Enter i:");
			scanf_s("%d", &i);
			printf("Enter j:");
			scanf_s("%d", &j);
			shortestPath(i, j);
		}

		else if (command == 'D') {
			printf("Exiting the program...\n");
			break;
		}

	}
	return 0;
}



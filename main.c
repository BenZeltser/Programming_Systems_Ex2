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

int main() {
	//Get a command from the user
	char command;
	int i,j,index = 0;

	while (index==0) 
	{
		printf("Enter Command:");
		scanf("%c", &command); //Assume input is Valid
		switch (command)
		{
			case 'A': 
				getMatrix();
				break;
			case 'B':
				printf("Enter i: ");
				scanf("%d", &i);
				printf("Enter j: ");
				scanf("%d", &j);
				isConnected(i, j);
				break;
			case 'C':
				printf("Enter i: ");
				scanf("%d", &i);
				printf("Enter j: ");
				scanf("%d", &j);
				shortestPath(i, j);
				break;
			case 'D':
				index = 1;
				break;
		}
	}
	return 0;
}



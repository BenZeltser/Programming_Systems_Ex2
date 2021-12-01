#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define TRUE 1
#define FALSE 0
#define ROWS 10
#define COLUMNS 10
int getMatrix();
void isConnected(int i, int j);
void shortestPath(int row, int collum);
void printDistance(int dis);
int getMinNumber(int num1, int num2);
int Matrix[ROWS][COLUMNS]; //Global Scope Matrix


//This function insert numbers into the matrix 
int getMatrix() {
	int i; // i Represents rows
	int j; // j Represents Columns
	int temp = 0; // temp is used for the current value input

	for (i = 0; i < ROWS; i++) {
		for (j = 0; j < COLUMNS; j++) {
			printf("Enter the next Matrix value:");
			scanf("%d", &temp);
			Matrix[i][j] = temp;
		}
	}

	printf("Matrix building is finished\n");
	return 0;
}

void isConnected(int i, int j) {
	if (Matrix[i][j] <= 0)
		printf("FALSE \n");
	else
		printf("TRUE \n");

}

void shortestPath(int row, int collum) {
	for (int k = 1; k <= ROWS; k++) {
		for (int i = 1; i <= ROWS; i++) {
			for (int j = 1; j <= ROWS; j++) {
				int tempNum = Matrix[i][k] + Matrix[k][j];
				if ((Matrix[i][j] == 0 && Matrix[i][k] == 0 && Matrix[k][j] == 0) || (Matrix[i][j] > 0 && Matrix[i][k] == 0 && Matrix[k][j] == 0)) {
					Matrix[i][j] = 0;
				}
				else if ((Matrix[i][j] == 0 && Matrix[i][k] > 0 && Matrix[k][j] > 0)) {
					Matrix[i][j] = tempNum;
				}
				else if (Matrix[i][j] > 0 && Matrix[i][k] > 0 && Matrix[k][j] > 0) {
					Matrix[i][j] = getMinNumber(Matrix[i][j], tempNum);
				}
				}
				
			}
		}
	printDistance(Matrix[row][collum]);
}

void printDistance(int dis) {
	if (dis>0)
	{
		printf("The distance is %d \n", dis);
	}
	else
	{
		printf("The distance is %d \n", -1);
	}
}

int getMinNumber(int num1, int num2) {
		if (num1 < num2)
			return num1;
		else
			return num2;
}

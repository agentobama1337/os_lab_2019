#include "swap.h"
#include <string.h>
#include <stdlib.h>

void Swap(char *left, char *right)
{
	char *temp = (char*)malloc((strlen(left) + 1) * sizeof(char)); 
	strcpy(temp, left); 
	strcpy(left, right); 
	strcpy(right, temp); 
	free(temp); 
}

#include "revert_string.h"

void RevertString(char *str)
{
	int i = 0;
	int j = strlen(str) - 1;
	while(i < j){
		char c = str[i];
		str[i] = str[j];
		str[j] = c;
		i++;
		j--;
	}
}


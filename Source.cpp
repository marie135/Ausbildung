#include <stdio.h>
#include <iostream>
int main()
{
	int array[5] = { 3, 4, 6, 2, 8 };
	int i;
	int j;
	for (i = 0; i < 4; i = i + 1)
	{
		for (j = 0; j < 4; j = j + 1)
		{
			if (array[j] > array[j + 1])
			{
				int hilfe;
				hilfe = array[j];
				array[j] = array[j + 1];
				array[j + 1] = hilfe;
			}
		}
	}
		for (int k = 0; k <=4 ; k++)
		{
			printf("%i", array[k]);
		}
	
	system("pause");
	return 0;
}
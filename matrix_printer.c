#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
void matrix(int rig, int col)
{
int i;
int j;
i = 0;
rig = rig + 2;
col = col + 2;
int *matrice = malloc((i * j) * sizeof(int));
	while (i < rig)
	{
		j = 0;
		while (j < col)
		{
			if(((i == 0) || (i == rig - 1)) && ((j == 0) || (j == col - 1)))
				{
					printf("  ");
					j++;
				}
			else
			{
				printf("%d ", j);
				j++;
			}
		}
		printf("\n");
		i++;
	}
}
int main (int argc, char **argv)
{
	int a = ((int) (argv[1][0] - '0'));
	int b =((int) (argv[2][0] - '0'));
	matrix(a, b);
	return (0);
}

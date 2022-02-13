#include <unistd.h>

void	error(void)
{
	write(1, "Error", 6);
}

void	printchar(char a)
{
	write(1, &a, 1);
}

void	check_if_number(char *input)
{
	int	counter;
	char	*output;

	counter = 0;
	while (input[counter] != '\0')
	{
		if (input[counter] >= '1' && <= '9')
		{
			output[counter] = input[counter];
			counter++;
		}
		else if (input[counter] == ' ')
			counter++;
		else
		{
			error();
			break ;
		}
	}
	char_to_int_conversion(output);
}

void	char_to_int_conversion(char *str)
{
	int	*converted;
	int	index;

	while (str[index] != '\0')
	{
		converted[index] = str[index] + 48;
		index++;
	}
	set_rows_and_columns(str);
}

void	set_rows_and_columns(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	index = index / 4;
	matrix(index, index, str);
}

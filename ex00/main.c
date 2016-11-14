#include "ft_list.h"
#include <stdio.h>

#define SIZE 4096

/*,
void	checker(int i, int j)
{

}

check to se if each line is the same size, go to  n ewline
check to s: the total number of rows, # of newlines.
send those parameters into the rush generators.
check each rush against the output.

*/
int	input_size(char *buf, int **xy)
{
	int i;
	int j;
	int line1;

	i = 0;
	j = 0;
	while (buf[j])
	{
		while((buf[j] != '\n') && buf[j])
		{
			j++;
		}
		if (i == 0)
			line1 = j;
		i++;
		j++;
	}
	(*xy)[0] = i;
	(*xy)[1] = line1;
	return 0;
}

int		main(void)
{
	char	*buf;
	int		*xy;
	int		i;
	char	input[1];
	char	*r_string;

	//decide how you want to handle 0's in a rush.
	//maybe put a global if statement.
	i = 0;
	buf = (char*)malloc(sizeof(char) * (SIZE + 1));
	xy = (int*)malloc(sizeof(int) * 2);
	while(read(0, input, 1))
	{
		buf[i] = input[0];
		i++;
	}
	ft_putstr("buf is:\n");
	ft_putstr(buf);
	input_size(buf, &xy);
	printf("x is %d, y is %d\n", xy[0], xy[1]);

	r_string = rush00(xy[1], xy[0]);
	printf("r_string is:\n%s", r_string);
	if ((ft_strcmp(r_string, buf) == 0))
	{
		//insert correct output for match of rush00 here.
		printf("\nthey are the same\n");
	}




	return (0);
}





/*
	if (!(buf[0] == 'o' || buf[0] == '/' || (buf[0] == 'A') || (buf[0] == 'A') || (buf[0] == 'A') || (buf[0] == 'A') || (buf[0] == 'A') ))
	{
		return (0);
	}
*/


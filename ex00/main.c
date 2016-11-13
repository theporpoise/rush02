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
		//if ((j % line1) != 0)
		//	return 0;
		i++;
		j++;
	}
	(*xy)[0] = 3;
	(*xy)[1] = 5;
	return 0;
}

int		main(void)
{
	char	*buf;
	int		*xy;

	buf = (char*)malloc(sizeof(char) * (SIZE + 1));
	xy = (int*)malloc(sizeof(int) * 2);
	read(0, buf, SIZE);
	printf("buf is:\n%s", buf);

	input_size(buf, &xy);
	//xy[0] = 10;
	//xy[1] = 20;
	printf("x is %d, y is %d\n", xy[0], xy[1]);

	return (0);
}





/*
	if (!(buf[0] == 'o' || buf[0] == '/' || (buf[0] == 'A') || (buf[0] == 'A') || (buf[0] == 'A') || (buf[0] == 'A') || (buf[0] == 'A') ))
	{
		return (0);
	}
*/


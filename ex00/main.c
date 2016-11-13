#define SIZE 10
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/uio.h>
#include <stdio.h>

/*,
void	checker(int i, int j)
{

}

check to se if each line is the same size, go to  n ewline
check to s: the total number of rows, # of newlines.
send those parameters into the rush generators.
check each rush against the output.

*/
void	print_stdin(void)
{
	int		ret;
	char	buf[SIZE + 1];
	int		i;
	int		j;

	i = 0;
	j = 1;
	while ((ret = read(0, buf, SIZE)) > 0)
	{
		buf[ret] = '\0';
		if (!(buf[0] == 'o' || buf[0] == '/' || (buf[0] == 'A')) && i == 0)
		{
			printf("not a rush\n");
			return ;
		}
		i++;


		printf("%s", buf);
	}
	// if i and j = 0, then return all rushes or no rushes.
}

/*
 * if you are on the first line first character and it matches
 * o or /, then it's that one.
 */


int		main(void)
{

	print_stdin();

	return (0);
}

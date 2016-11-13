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

int		main(void)
{
	char *buf;

	buf = malloc(sizeof(char) * (SIZE + 1));
	read(0, buf, SIZE);
	ft_putstr("buf is:\n");
	ft_putstr(buf);


	if (!(buf[0] == 'o' || buf[0] == '/' || (buf[0] == 'A')))
	{
		ft_putstr("not a rush\n");
	}

	return (0);
}

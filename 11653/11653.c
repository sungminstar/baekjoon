#include <stdio.h>

int	main()
{
	int	n;
	int	i = 2;

	scanf("%d", &n);

	if (n == 1)
		return (0);

	while ( n > 1 )
	{	
		if ( n % i == 0 )
		{
		//	printf("n : %d\n", n);
	
			printf("%d\n", i);
			n /= i;
		}
		else
			i++;
	}

	return (0);
//	printf("final i : %d\n", i);
}

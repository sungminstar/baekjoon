#include <stdio.h>

int	find_prime(int n)
{
	int i = 2;
	if (n == 1)
		return (0);
	
	while ( i <= n / i )
	{
		if ( n % i == 0 )
			return (0);
		i++;
	}
	return (i);
}

int	main()
{
	int	num, i, cnt;

	while(1)
	{
		cnt = 0;
		scanf("%d", &num);
		if (num == 0)
			break;
		for(i = num + 1; i <= 2 * num; i++)
			if (find_prime(i))
				cnt++;
		printf("%d\n", cnt);
	}
}


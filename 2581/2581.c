#include <stdio.h>

int	find_prime(int	n)
{
	int	i = 2;

	if (n == 1)
		return (0);
	while ( i < n )
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (n);
}

int	main()
{
	int	m, n;
	int	i, sum = 0, min = 0;

	scanf("%d", &m);
	scanf("%d", &n);
	
	i = m;
	while (m <= i && i <= n)
	{
		sum += find_prime(i);
		i++;
	}
	if (sum == 0)
	{
		printf("-1");
		return (0);
	}
	printf("%d\n", sum);
	i = m;
	while (m <= i && i <= n)
	{
		if (find_prime(i))
		{
			printf("%d",find_prime(i));
			return(0);
		}
		i++;
	}
}

	



#include <stdio.h>

int	find_prime(int n)
{
	int	i;

	i = 2;
	
	if (n == 1)
		return (0);
	while ( i <= n / i)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (n);
}

int	main()
{
	int	m, n, i;
	
	scanf("%d %d", &m, &n);
	
	for(i = m; i <= n; i++)
	{
		if (find_prime(i))
			printf("%d\n", find_prime(i));
	}
}

#include <stdio.h>

int	find_prime(int	n)
{
	int	i = 2;

	if (n == 1)
		return (0);

	while ( i < n)
	{
		if ( n % i == 0)
			return (0);
		i++;
	}
	return (1);
}


int	main()
{
	int	n;
	int	arr[100];
	int	i;
	int	cnt = 0;

	scanf("%d", &n);
	
	for(i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		if (find_prime(arr[i]))
		{
			//printf("prime is : %d\n", arr[i]);
			cnt++;
		}
	
	}
	printf("%d", cnt);
}





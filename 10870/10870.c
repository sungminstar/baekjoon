#include <stdio.h>

void	pibonacci(int *n, int *m)
{
	int tmp;

	tmp = *n + *m;
	*n = *m;
	*m = tmp;
}

int	main()
{
	int	n, a = 0, b = 1;
	scanf("%d", &n);

	if (n == 0)
	{
		printf("%d", a);
		return (0);
	}
	for (int i = 0; i < n - 1; i++)
	{
		pibonacci(&a, &b);
	}
	printf("%d", b);
}

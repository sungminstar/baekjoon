#include <stdio.h>

int	main()
{
	int	a, b, i, tmp, sum = 0;
	scanf("%d", &a);
	scanf("%d", &b);

	for(i = 0; i < 3; i++)
	{
		tmp = a * (b%10);

		printf("%d\n", tmp);
		if (i == 1)
			tmp *= 10;
		else if (i == 2)
			tmp *= 100;
		sum += tmp;
		b /= 10;
	}
	printf("%d", sum);
}


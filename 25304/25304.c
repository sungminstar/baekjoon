#include <stdio.h>

int	main()
{
	int	total;
	int	cnt;
	int	sale_price;
	int	sale_cnt;
	int	cmp_total = 0;


	scanf("%d", &total);
	scanf("%d", &cnt);

	for(int i = 0; i < cnt; i++)
	{
		scanf("%d %d", &sale_price, &sale_cnt);
		cmp_total += sale_price * sale_cnt;
	}

	if (total == cmp_total)
		printf("Yes");
	else
		printf("No");
}


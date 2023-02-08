#include <stdio.h>

int	main()
{
	int	dice1;
	int	dice2;
	int	dice3;
	int	reward = 0;
	int	max = 0;

	scanf("%d %d %d", &dice1, &dice2, &dice3);

	if (dice1 == dice2 && dice2 == dice3)
		reward = 10000 + dice1 * 1000;
	else if (dice1 == dice2 || dice2 == dice3 || dice3 == dice1)
	{
		if (dice1 == dice2)
			reward = 1000 + dice1 * 100;
		else if (dice2 == dice3)
			reward = 1000 + dice2 * 100;
		else
			reward = 1000 + dice3 * 100;
	}
	else
	{
		if (dice1 > dice2)
		{
			if (dice2 > dice3)
				max = dice1;
			else if (dice3 > dice1)
				max = dice3;
			else
				max = dice1;
		
		}
		else if (dice2 > dice3)
		{	
			if (dice3 > dice1)
				max = dice2;
			else if (dice1 > dice2)
				max = dice1;
			else
				max = dice2;
		}
		else if (dice3 > dice1)
		{
			if (dice1 > dice2)
				max = dice3;
			else if (dice2 > dice3)
				max = dice2;
			else
				max = dice3;
		}
	reward = max * 100;
	}
	printf("%d", reward);
}


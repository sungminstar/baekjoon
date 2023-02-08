#include <stdio.h>

int	main()
{
	int	dong_king;
	int	dong_queen;
	int	dong_rook;
	int	dong_bishop;
	int	dong_knight;
	int	dong_pawn;

	scanf("%d %d %d %d %d %d", &dong_king, &dong_queen, &dong_rook, &dong_bishop, &dong_knight, &dong_pawn);

	int	king = 1;
	int	queen = 1;
	int	rook = 2;
	int	bishop = 2;
	int	knight = 2;
	int	pawn = 8;

	king -= dong_king;
	queen -= dong_queen;
	rook -= dong_rook;
	bishop -= dong_bishop;
	knight -= dong_knight;
	pawn -= dong_pawn;

	printf("%d %d %d %d %d %d", king, queen, rook, bishop, knight, pawn);
}

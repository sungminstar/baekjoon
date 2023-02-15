#include <stdio.h>

int	main()
{
	double	a, b;
	scanf("%lf %lf", &a, &b);

	printf("%.9lf", a / b);
}

// float 형=> 상대오차가 10의 -7승 정도=> 유효숫자 7자리까지
// double 형 => 	''		=> 유효숫자 15자리 이하까지 정확히 표현 가능 

#include <iostream>

int		dmonth[13] = { 0 , 31, 28, 31, 30, 31, 30, 31, 31,30 ,31, 30, 31};
const char* dday[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };

int	main(void)
{
	int month, day;s
	int res = 0;
	
	scanf("%d %d", &month, &day);
	for (int i = 1; i < month; ++i)
		day += dmonth[i];
	printf("%s", dday[day % 7]);
	return (0);
}
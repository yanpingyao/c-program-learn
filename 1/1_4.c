#include <stdio.h>
int main()
{
	int fahr;

	printf("摄氏温度与华氏温度对照表\n");

	for (fahr = 0; fahr <= 300; fahr +=20)
		printf("%6.1f %3d\n", (5.0/9.0)*(fahr-32), fahr);
}


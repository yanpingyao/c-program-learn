#include <stdio.h>

/*
 * cel = (fahr -32) * 5 /9;
 * 9*celsius/5+32=fahr; 
 * */
int main()
{
	int celsius;

	printf("摄氏温度与华氏温度对照表\n");

	for (celsius = 0; celsius <= 300; celsius +=20)
		printf("%3d %6.1f\n", celsius , 9.0*celsius/5 + 32);
}


#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b;

	while(scanf("%d %d", &a, &b) != -1) // EOF�� ������ �� ������ -1�� ��ȯ �޴´�
	{
		printf("%d\n", a + b);
	}
	
}

#endif
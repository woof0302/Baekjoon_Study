#if 0

//max�� ã�� ��ũ�� �Լ� �����ؼ� �� ����ϰ� �ۼ� ����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c, reward, max;
	scanf("%d %d %d", &a, &b, &c);
	
	if (a == b && b == c)
	{
		reward = 10000 + a * 1000;
	}

	else if ((a == b) || (a == c)) 
	{
		reward = 1000 + a * 100;
	}

	else if ((b == c))
	{
		reward = 1000 + b * 100;
	}

	else
	{
		if (a > b)
		{
			if (a > c)
			{
				max = a;
			}
			else max = c;
		}
		else
		{
			if (b > c)
			{
				max = b;
			}
			else max = c;
		}

		reward = max * 100;
	}


	printf("%d", reward);

	return 0;
}
#endif
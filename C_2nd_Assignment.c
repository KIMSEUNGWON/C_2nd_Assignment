#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{

	int i, c, cnt = 0, n1, n2;

	while (1)
	{
		if (cnt >= 29)
			break;
		else
		{
			printf("Input the number among 1,2,3: ");
			scanf("%d", &n1);

			c = cnt;
			for (i = c + 1; i <= (n1 + c); i++)
			{
				printf("%d ", i);
				cnt++;
			}
			printf("\n");

			if (cnt >= 29)
			{
				printf("you win!");
				break;
			}
			c = cnt;
			srand(time(NULL));
			n2 = rand() % 3 + 1;
			printf("Computer : %d\n", n2);

			for (i = c + 1; i <= (n2 + c); i++)
			{
				printf("%d ", i);
				cnt++;
			}
			printf("\n");

			if (cnt >= 29)
			{
				printf("Computer win!");
				break;
			}

		}

	}

}
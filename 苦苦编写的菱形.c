#include <stdio.h>

int main()
{
	int i, j, k;//����for
	int n = 0;//���ƿո�
	int m = 1;//��������
	int num1;//����������


	for (num1 = 1; num1 < 8; num1++)
		{




			for (i = 0; i < 30 - n; i++)
				{

					printf(" ");





				}
			printf("%d", num1);
			n++;
			for (j = 1; j < 2 * m - 1; j++)
				{


					printf("%d", num1);

				}
			printf("\n");

			m++;




		}



	int i2, j2, k2;//����for
	int n2 = 0;//���ƿո�
	int m2 = 1;//��������
	int num2;//����������

	for (num2 = 6; num2 > 0; num2--)
		{
			for (i2 = 0; i2 < 25 + n2; i2++)
				{
					printf(" ");
				}
			n2++;
			for (j2 = 0; j2 < 13 - 2 * n2; j2++)
				{

					printf("%d", num2);
				}
			printf("\n");
			m2++;
		}











	return 0;
}



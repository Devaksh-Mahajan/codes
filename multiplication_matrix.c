#include <stdio.h>
int main()
{
	int i, j, A[2][3], B[3][3], C[2][3];
	printf("Enter six elements of matrix A");
	for(i=0;i<=1;i++)
		for(j=0;j<=2;j++)
			scanf("%d", &A[i][j]);
		printf("Enter nine elements of matrix B");
		for(i=0;i<=2;i++)
			for(j=0;j<=2;j++)
				scanf("%d", &B[i][j]);
			printf("The answer of multiplication is\n");
			for(i=0;i<=1;i++)
			{
				for(j=0;j<=2;j++)
				{
					C[i][j] = A[i][j] * B[i][j];
					printf("%d", C[i][j]);
				}
				printf("\n");
			}
			return 0;

}
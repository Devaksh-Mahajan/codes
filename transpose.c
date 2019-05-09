#include <stdio.h>
int main()
{
	int i, j, A[3][3], B[3][3];
	printf("Enter nine elements of A");
	for(i=0;i<=2;i++)
		for(j=0;j<=2;j++)
			scanf("%d", &A[i][j]);
		printf("Answer for transpose of A\n");
		for(i=0;i<=2;i++)
			{for(j=0;j<=2;j++)
			{
				B[i][j] = A[j][i];
				printf("%d", B[i][j]);
			}
			printf("\n");
			}
			return 0;
}
#include <stdio.h>
int main()
{
	int e;
	printf("Enter total no. of elements in an array: \n");
	scanf("%d", &e);
	int arr[e];
	printf("Enter elements :\n");
	for(int a=0;a<e;a++)
	{
		scanf("%d", &arr[a]);
	}
	for(int a=0;a<e-1;a++)
	{
		for(int i=0;i<e-1;i++)
		{
			int temp;
			if(arr[i]>arr[i+1])
			{
				temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}
		}
	}
	for(int i=0;i<e;i++)
	{
		printf("%d", arr[i]);
	}
	return 0;

}
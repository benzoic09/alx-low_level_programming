#include <stdio.h>

/**
 * main- check repeated number
 */

void main()
{
	int seen[10] = {0};
	int n;
	printf("Enter the number: ");
	scanf("%d", &n);

	int rem;
	while(n > 0)
	{
		if (seen[rem] == 1)
			break;
		seen[reem] = 1;
		n = n/10;
	}
	if (n > 0)
		printf("YES");
	else
		printf("NO");
	return 0;
}

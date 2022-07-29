//	Muhammet Burak Golec
#include <stdio.h>



int main()
{
	int n, i = 0, k = 1, s = 0, j = 0, temporary_memory;
	
	printf("The Number of Will Be Sorted : ");   //Request, How many numbers do we want to enter?
	scanf("%d",&n); // We assign the entered value to the variable n
	
	printf("\n");

	int a[n]; // We define array with n variables
	j = (n-1);

	do
	{
		printf("%d. Number = ",s+1); // We append numbers up to n loops
		scanf("%d",&a[s]);
		s++;

	}while(s<n);

	printf("\n");
	printf("Given  Numbers : ");

	do
	{
		printf("%5.d ", a[i]); // We print the array in the order given by the User
		i++;
	}
	while(i < n);
	
	printf("\n\n");
	
	do{ // Outer loop

		j=n-1; // We make the inner loop happen by assigning the value to n-1 again in each outer loop.
		
		do{ // Inner loop

			if(a[j-1]>a[j]){

				temporary_memory=a[j-1]; // We temporarily assign it to another value
				a[j-1]=a[j]; 			// We change the values ​​of variables
				a[j]=temporary_memory; // by Assigning the temporary value to the other value, we change the order between the two values.
			
			}

			j--;

		}while(j >= k); // Loop repeats n-1 times cause j equals to n-1

		k++;

	}while(k <= n); // Loop repeats n times
	
	printf("Result Numbers : ");
	
	i=0;
	
	do
	{
		printf("%5.d ", a[i]); // We print the state of the entered numbers after they are sorted with the bubble sort algorithm.
		i++;

	}while(i < n);
		
	printf("\n\n");
	
	return 0; // Means the program terminated without any problems

}

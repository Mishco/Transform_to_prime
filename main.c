#include <stdio.h>


/**
 * Method to check if some number
 * is Prime or not
 */
int IsPrime(unsigned int number) {
    unsigned int i;
    // In same definition 0 and 1 is not prime number
    if (number <= 1) return 0;
    for (i=2; i*i<=number; i++) {
        if (number % i == 0) return 0;
    }
    return 1;
}

int main() {
	int numTest;
	int i,j;
	int countOfElements;
	int sum, tmp;

	scanf("%d", &numTest);

	for(i = 0; i < numTest; i++)
	{
	    scanf("%d",&countOfElements);
	    sum = 0;
	    for(j = 0; j < countOfElements; j++)
	    {
	        scanf("%d", &tmp);
	        sum += tmp;
	    }
	    // printf("FIRST SUM: %d ",sum );

	    // if Sum is already prime return 0
	    if (IsPrime(sum))
	    {
	        printf("0\n");
	    } else {
	       // Find closest prime number
	       j = 1;
	       while(1)
	       {
	           sum += 1;
	           if(IsPrime(sum)) {
	            // printf("NEXT SUM: %d ", sum);
	            break;
	           }
	           j++;
	       }

	       // and return difference between them and sum
	       printf("%d \n",j);
	    }
	}
	return 0;
}

// Code by Michal Slovik

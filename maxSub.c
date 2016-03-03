#include<stdlib.h>
#include<stdio.h>


int MaxSubarray( int arr[] , int n )
{
	int sum = 0;
	int ans = 0;
	int dummySum = 0;



	for( int i = 0 ; i < n ; i++ )
	{
		if( i == 0 )
		{
			ans = arr[i];
		}

		if( (sum + arr[i]) > 0 )
		{
			dummySum = sum;
			sum += arr[i];
			if( dummySum + arr[i] > ans)
			{
				ans = sum ;
			}
				
		} 
		else if( (sum + arr[i]) < 0 )
		{
			sum = 0;
		}
	}


		return( ans );
}


int main( int argc , char *argv[] )
{
	int myArray[] = { 1 , -3 , 2 , -5 , 7 , 6 , -1 , -4 , 11 , -23 };
	int arraySize;
	arraySize = (sizeof myArray / sizeof(int) );
	int maxSub;
	maxSub = MaxSubarray( myArray , arraySize );
	printf("\nMax subarray value: %d\n\n" , maxSub );
	return 0;


}


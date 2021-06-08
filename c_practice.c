//1. Find the maximum and minimum element in the array

#include<stdio.h>
int main()
{
	int arr[10];
	int i, max, min;
	printf("Enter 10 array elements : ");
	for(i=0;i<10;i++)
	{
		scanf("%d", &arr[i]);
	}
	//Step 1. Make the first element as the max
	max = arr[0];
	min = arr[0];
	//Step 2. Loop through the array to check if any other > max
	for(i=0;i<10;i++)
	{
		if(arr[i] > max)
		{
			//Step 3. Modify max
			max = arr[i];
		}
		if(arr[i] < min)
		{
			min = arr[i];
		}
	}
	//Step 4. Print max
	printf("\nThe maximum element is :  %d", max);
	printf("\nThe minimum element is : %d", min);
}

//2. Find the missing element in an array
n = number of elements
n-1 = input from the user

Example :
	n = 5
	Elements : 1,2,4,5
	Output : 3

1+2+3+4+5
1+2+4+5



//3. Reversing the given array
Input : 1,2,5,7,9
Output : 9,7,5,2,1

for(i=n-1,j=0; i>=0,j<n; i--,j++)
{
	arr2[j] = arr1[i];
}


//4. Find the number of occurences
//of a character in a string
Input : brilliant
n = number of times i occurs in string
Output : 2

length = strlen() //string.h
for(x=0;x<=length;x++)
{
	if(a[x]=='i')
	{
		count++;
	}
}


//5. Remove all white spaces
//from a string
Input : awesome string
Output : awesomestring

1. Loop through the string
2. Compare the space
3. Copy only elements without space
	to a new string
	
	for(i=0;i<strlen(input);i++)
	{
		if(input[i]==" ")
			continue;
		newInput[i] = input[i];
	}

	awesome string
	newInput[0]='a'; //i=0
	newInput="awesomestring"; //i=6
	











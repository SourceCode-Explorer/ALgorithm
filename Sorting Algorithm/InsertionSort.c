#include<stdio.h>
void insertionSort(int arr[], int n){ 
	int i, key, j; 
	for (i = 1; i < n; i++){ 
		key = arr[i]; 
		j = i - 1; 

		while (j >= 0 && arr[j] > key){ 
			arr[j + 1] = arr[j]; 
			j = j - 1; 
		} 
		arr[j + 1] = key; 
	} 
} 

int main(){ 
	int arr[100],n,i;
	printf("Enter Size of the array and max size = 100 : \n");
	scanf("%d",&n);
	printf("Enter Elements of the array : \n");
	for(i=0;i<n;i++)
	    scanf("%d",&arr[i]);

	insertionSort(arr, n); 
	
	printf("Sorted array : ");
	for(i=0;i<n;i++)
	    printf("%d  ",arr[i]);
	    
	return 0; 
} 


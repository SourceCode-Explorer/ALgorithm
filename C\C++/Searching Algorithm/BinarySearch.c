#include <stdio.h>
// Binary Search Function 
int BinarySearch(int Array[], int low, int high, int key){
    if(high >= low){
        int mid = low + (high - low)/2;
        if(Array[mid] == key)
            return mid;
        if(Array[mid] > key)
            return BinarySearch(Array, low, mid-1, key);
        if(Array[mid] < key)
            return BinarySearch(Array, mid+1, high, key);
    }
    return 0;
}

int main() {
	int Array[20],size,key,index,i;
	
	// input section
	printf("Enter the size of the Array : ");
	scanf("%d",&size);
	printf("\nEnter Array : ");
	for(i=0;i<size;i++)
	    scanf("%d",&Array[i]);
	printf("\nEnter key for search : ");
	scanf("%d",&key);

	index = BinarySearch(Array,0,size,key);

	if(index != 0)
	    printf("\nFound at %d.\n",index);
	else 
	    printf("\nNot Found!\n");

	return 0;
}

/*
Given Array :
       +---+---+----+----+----+----+----+----+----+----+----+----+----+
       | 2 | 3 | 10 | 17 | 19 | 34 | 40 | 56 | 67 | 77 | 89 | 90 | 99 |
       +---+---+----+----+----+----+----+----+----+----+----+----+----+
index    0   1    2    3    4    5    6    7    8    9    10   11   12
 
 start index : 0 // initial value
 End index : 12  // initial value
 Key for search : 90
 Middle : 6 (start + (End - start)/2)
       +---+---+----+----+----+----+----+----+----+----+----+----+----+
       | 2 | 3 | 10 | 17 | 19 | 34 | 40 | 56 | 67 | 77 | 89 | 90 | 99 |
       +---+---+----+----+----+----+----+----+----+----+----+----+----+
index    0   1    2    3    4    5    6    7    8    9    10   11   12
         |                            |                              |
 start        Middle       End
 Array[middle] : 40
 Array[middle] < Key // condition during checking
 Therefore, according to algorithm
 start : 7  // update start from 0 to 7
 Middle : 10 (start + (End - start)/2)  // update middle from 6 to 10
 End : 12  // End remains same 
       +---+---+----+----+----+----+----+----+----+----+----+----+----+
       | 2 | 3 | 10 | 17 | 19 | 34 | 40 | 56 | 67 | 77 | 89 | 90 | 99 |
       +---+---+----+----+----+----+----+----+----+----+----+----+----+
index    0   1    2    3    4    5    6    7    8    9    10   11   12
         |               |         |
      start  Middle     End
 Array[middle] : 89
 Array[middle] < Key  // condition during checking
 Therefore,
 start : 11  // update start from 7 to 11
 Middle : 12 (start + (End - start)/2)  // update middle from 10 to 12
 End : 12  // End remains same
       +---+---+----+----+----+----+----+----+----+----+----+----+----+
       | 2 | 3 | 10 | 17 | 19 | 34 | 40 | 56 | 67 | 77 | 89 | 90 | 99 |
       +---+---+----+----+----+----+----+----+----+----+----+----+----+
index    0   1    2    3    4    5    6    7    8    9    10  11    12  <-- End
                                                               |     |
            start  Middle
 Array[middle] : 99 
 Array[mid] > Key // condition during checking
 Therefore, according to algorithm
 start : 11  // start remains same
 Middle : 11 (start + (End - start)/2) // update middle from 12 to 11
 End : 10  // update End 12 to 10
       +---+---+----+----+----+----+----+----+----+----+----+----+----+
       | 2 | 3 | 10 | 17 | 19 | 34 | 40 | 56 | 67 | 77 | 89 | 90 | 99 |
       +---+---+----+----+----+----+----+----+----+----+----+----+----+
index    0   1    2    3    4    5    6    7    8    9    10  11    12  
                                                           |    | <---Middle     
        End   start  
 Array[Middle] : 90
 Array[middle] = Key
 Hence, Key is present at index : 11. 
*/

#include <stdio.h>
// Linear Search Function 
int LinearSearch(int Array[],int size, int key){
    for(int i=0;i<size;i++)
        if(Array[i] == key)
            return i;
            
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

	index = LinearSearch(Array,size,key);

	if(index != 0)
	    printf("\nFound at %d.\n",index);
	else 
	    printf("\nNot Found!\n");

	return 0;
}

/*
Given Array :
       +---+---+---+---+----+----+----+----+----+----+---+---+----+
       | 2 | 3 | 1 | 7 | 19 | 34 | 40 | 56 | 67 | 77 | 8 | 9 | 99 |
       +---+---+---+---+----+----+----+----+----+----+---+---+----+
index    0   1   2   3    4    5    6    7    8    9   10  11   12
         |
       start

 start index : 0  // initial condition
 end index : 12   // initial condition
 key for search : 34

       +---+---+---+---+----+----+----+----+----+----+---+---+----+
       | 2 | 3 | 1 | 7 | 19 | 34 | 40 | 56 | 67 | 77 | 8 | 9 | 99 |
       +---+---+---+---+----+----+----+----+----+----+---+---+----+
index    0   1   2   3    4    5    6    7    8    9   10  11   12
         |
       start

 Array[start] : 2, which is not equal to key.
 Therefore, according to algorithm
 start : 1 // increment start index by 1
‎
       +---+---+---+---+----+----+----+----+----+----+---+---+----+
       | 2 | 3 | 1 | 7 | 19 | 34 | 40 | 56 | 67 | 77 | 8 | 9 | 99 |
       +---+---+---+---+----+----+----+----+----+----+---+---+----+
index    0   1   2   3    4    5    6    7    8    9   10  11   12
             |
            start

 Array[start] : 3, which is not equal to key.
 Therefore, according to algorithm
 start : 2 // increment start index by 1
‎
       +---+---+---+---+----+----+----+----+----+----+---+---+----+
       | 2 | 3 | 1 | 7 | 19 | 34 | 40 | 56 | 67 | 77 | 8 | 9 | 99 |
       +---+---+---+---+----+----+----+----+----+----+---+---+----+
index    0   1   2   3    4    5    6    7    8    9   10  11   12
                 |
                start

 Array[start] : 1, which is not equal to key.
 Therefore, according to algorithm
 start : 3 // increment start index by 1
‎
       +---+---+---+---+----+----+----+----+----+----+---+---+----+
       | 2 | 3 | 1 | 7 | 19 | 34 | 40 | 56 | 67 | 77 | 8 | 9 | 99 |
       +---+---+---+---+----+----+----+----+----+----+---+---+----+
index    0   1   2   3    4    5    6    7    8    9   10  11   12
                     |
                    start

 Array[start] : 7, which is not equal to key.
 Therefore, according to algorithm
 start : 4 // increment start index by 1
‎
       +---+---+---+---+----+----+----+----+----+----+---+---+----+
       | 2 | 3 | 1 | 7 | 19 | 34 | 40 | 56 | 67 | 77 | 8 | 9 | 99 |
       +---+---+---+---+----+----+----+----+----+----+---+---+----+
index    0   1   2   3    4    5    6    7    8    9   10  11   12
                          |
                         start

 Array[start] : 19, which is not equal to key.
 Therefore, according to algorithm
 start : 5 // increment start index by 1
‎
       +---+---+---+---+----+----+----+----+----+----+---+---+----+
       | 2 | 3 | 1 | 7 | 19 | 34 | 40 | 56 | 67 | 77 | 8 | 9 | 99 |
       +---+---+---+---+----+----+----+----+----+----+---+---+----+
index    0   1   2   3    4    5    6    7    8    9   10  11   12
                               |
                              start
 Array[start] : 34 which is  equal to key.
 Hence, key is found at index : 5
*/

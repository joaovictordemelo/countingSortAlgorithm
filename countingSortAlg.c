#include <stdio.h>


void countingSort(int n, char* ptr)
{
	int i, j;
	int t, t2, t3; //t2, t3 not necessary is t2 in assembly
	
	for (i = 0; i < n/2; i++) { 

		for (j = n - 1; j > n/2; j--) {
		    
		    
		    //recursive call on left
		    
		    if (*(ptr + i + 1) < *(ptr + i)) {
			    
			    //swap
				t2 = *(ptr + i);
				*(ptr + i) = *(ptr + i + 1);
				*(ptr + i + 1) = t2;
				countingSort(n, ptr);
				
				}
				
				//recursive call on right
				
			if (*(ptr + j - 1) > *(ptr + j)) {
			    
			    //swap
				t3 = *(ptr + j);
				*(ptr + j) = *(ptr + j - 1);
				*(ptr + j - 1) = t3;
				countingSort(n, ptr);
				
				}

			if (*(ptr + j) < *(ptr + i)) {
			    
			    //swap
				t = *(ptr + i);
				*(ptr + i) = *(ptr + j);
				*(ptr + j) = t;
			}
		
		}
	}

	// print the numbers actually it's in main
	
}

// Driver code
int main()
{
    int size;
    printf("Type a string \n");
    
    scanf("%d", &size);
	
	char arr[77];
	scanf("%s", arr);

	countingSort(size, arr);
	int i;
	char *ptr = &arr;
	
	for (i = 0; i < size; i++){
	    
	
		printf("%c ", *(ptr + i));
		
	}

	return 0;
}

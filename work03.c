#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int arr1[10];
    int *pointer1 = arr1;
    int random;
    int counter;
    
    srand( time(NULL));
    
    for (counter = 0; counter < 9; counter++){
      random = rand();
      arr1[counter] = random;
    }
    arr1[counter] = 0;

    printf("The first array: \n");
    for (counter = 0; counter < 10; counter++){
      printf( "| %d | \n" , *pointer1 );
      pointer1++;
    }

    int arr2[10];
    int *pointer2 = arr2;

    pointer1--; 
    for (counter = 0; counter < 10; counter++){
		*(pointer2 + counter) = *pointer1;
		pointer1--;
    }
    
    printf("The Second Array : \n");
    for (counter = 0; counter < 10; counter++){
      printf( "| %d | \n" , *pointer2 );
      pointer2++;
    }

    return 1;
    
}

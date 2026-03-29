#include <stdio.h>
#include <stdlib.h>

void memory_leak_example(int size);

int main(void)
{
   /* int *a = malloc(sizeof(int) * 10); // Allocate memory for an array of 10 integers.
    
  for (int i = 0; i <10 ; i++)
  a[i] = 10 - i;
  
  for (int i = 0; i < 10; i++) {
    printf("a[%d] = %d\n", i, a[i]); // Print the value of each element in the array.
    printf("\n");
  }
  printf("a: %p\n", a); // Print the address of the allocated memory.

  free(a); // Free the allocated memory.
 
 */

//  int *a = calloc(10, sizeof(int)); // Allocate memory for an array of 10 integers using calloc.
//     for (int i = 0; i <10 ; i++)
//     a[i] = 10 - i;

//     for( int i = 0; i<10; i++){
//         printf("a[%d] = %d\n", i, a[i]); // Print the value of each element in the array.
//         printf("\n");
//     }
//     printf("a: %p\n", a); // Print the address of the allocated memory.

    // int *save = a; // Save the pointer to the allocated memory before freeing it.
    // free(a); // Free the allocated memory.

    // printf("save: %p\n", save); // Print the address stored in the save pointer, which is the same as the original pointer a.
    // for(int i = 0; i < 10; i++){
    //     printf("save[%d] = %d\n", i, save[i]); // Attempt to access the memory through the save pointer after it has been freed (undefined behavior).
    //     printf("\n");
    // }



    //with entering size of data from user input

int size = 0;
printf("Enter size of data: ");
scanf("%d", &size); // Read the size of data from user input.


int *data = calloc(size, sizeof(int)); // Allocate memory for an array of integers using calloc.

for (int i = 0; i<size;i++)
data[i] = size - i; // Initialize the array with values.

for (int i = 0; i<size; i++){
    printf("data[%d] = %d\n", i, data[i]); // Print the value of each element in the array.
    printf("\n");
}

printf("data: %p\n", data); // Print the address of the allocated memory.


data = realloc(data, sizeof(int) * (size + 5)); // Reallocate memory to accommodate more integers.

for(int i = size; i<(size + 5); i++)
data[i] = 9; // Initialize the newly allocated memory with values.

for(int i=0; i<(size +5); i++){
  printf("data[%d] = %d\n", i, data[i]); // Print the value of each element in the reallocated array.
  printf("\n");
}

free(data); // Free the allocated memory.

return 0;
}


void memory_leak_example(int size){
int *a = malloc(size); // Allocate memory of the specified size.

}
#include <stdio.h>
#define MAX 16
/*change reverse merge test*/
void accept_input(int *arr, int n) {
   int i;
   for (i = 0; i < n; ++i) 
   scanf("%d", &arr[i]);
}

void display(int *arr, int n) {
   int i;
   for (i = 0; i < n; ++i) 
   printf("|%d| ", arr[i]);
   
   printf("\n");
}

int main(void) {
   int i, n, arr[MAX];
   printf("Enter the total number of elements: ");
   scanf("%d", &n);
   /* handle array overflow condition */
   if (n > MAX) {
      fprintf(stderr, "Number of elements must be less than %d\n", MAX);
      return 1;
   }

   printf("Enter the elements\n");

   for (i = 0; i < n; ++i) scanf("%d", &arr[i]);
   printf("Array has following elements\n");
   for (i = 0; i < n; ++i) printf("|%d| ", arr[i]);
   
   printf("\n");
   return 0;
}
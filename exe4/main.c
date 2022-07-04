#include <stdio.h>
#include <stdlib.h>
//#define n 6
#define m 20

//3
/*int main()
{
   int arr[n] = {10, 9, 8, 7, 6, 3};
    int temp;
    for(int i = 0; i<n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}*/

/*void readArray(int a[], int size)
{
    int i;
    for (i = 0; i < size; i++) {
        printf("Enter %d element :", i + 1);
        scanf("%d", &a[i]);
    }
}

int main()
{
    int arr[m];
    int n, item, pos;

    printf("Enter size of an Array :");
    scanf("%d", &n);
    printf("\nEnter elements of Array 1:\n");
    readArray(arr, n);
}
*/
//5
void main (){
   int num[20];
   int i, j, a, n;
   printf("enter number of elements in an array\n");
   scanf("%d", &n);
   printf("Enter the elements\n");
   for (i = 0; i < n; ++i)
      scanf("%d", &num[i]);
   for (i = 0; i < n; ++i){
      for (j = i + 1; j < n; ++j){
         if (num[i] > num[j]){
            a = num[i];
            num[i] = num[j];
            num[j] = a;
         }
      }
   }
   printf("The numbers in ascending order is:\n");
   for (i = 0; i < n; ++i){
      printf("%d ", num[i]);
   }
   int k;
   printf("\n-----------------------\nEnter K\n");
   scanf("%d", &k);
   printf("%d", num[k]);
}

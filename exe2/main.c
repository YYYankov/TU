#include <stdio.h>
#include <stdlib.h>

int main()
{
//    int n;
//    printf("Enter num: ");
//    scanf("%d", &n);
//    if(n>6){
//        printf("%d", n);
//    }
//    if(n%8>4){
//        printf(" Остатъкът от дел е по голямо от 8");
//    }
//
//
//    //printf("Hello world!\n");

//int a,b,c,min;
//int min;
//min=a
//printf("Enter num: ");
//scanf("%d",&a);
//printf("Enter num: ");
//scanf("%d",&b);
//printf("Enter num: ");
//scanf("%d",&c);
//if(b<min){
//    b=min
//}
//else if(c<min){
//    c=min
//}
//printf ("%d".min)
//

int N,K;
printf("Enter num: ");
scanf("%d %d",&N, &K);
for(i=1;i=N;++i){
    if (i>K && i%3==0){
        printf("%d", i);
    }
}
printf ("%d %d", N, K);




  return 0;
}

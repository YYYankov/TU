#include <stdio.h>
#include <stdlib.h>
typedef struct Shop{
char name[31];
int ID;
char expiration_date[11];
float price;


}Shop;
int main()
{
    printf("Hello world!\n");
    return 0;
}

void addProduct(Shop element, FILE* fp,Shop*array, int *size){
if (fwrite(&element,sizeof(Shop),1,fp)!=1){
    printf("Problem with writing");
    }
    *size++;
    array=(Shop *)realloc(array,sizeof(Shop)*(*size));
    if (array==NULL){
        prinf("cant resize array");
        exit(1);
        array[size-1]=element;
    }

}

int main(){
FILE fp*=fopen("in.bin","wb");

if (fp==NULL){
    printf("error");
    exit(1);
}

Shop *arr;
int size=0;

Shop p1;
strcpy(p1.name,"Gosho");
p1.ID=123
strcpy(p1.date,"19992.02.04");
p1.price=22
addProduct(p1,fp,arr,&size);
fclose();



}

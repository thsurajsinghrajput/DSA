#include <stdio.h>
#include <stdlib.h>

//creating MyArray structure
struct MyArray
{
    int total_size;
    int used_size;
    int *ptr;
};


void createArray(struct MyArray *a, int tSize, int uSize)
{
    // (*a).total_size = tSize;           //line 15,16,17 & 18,19,20 are same
    // (*a).used_size = uSize;
    // (*a).ptr = (int*)malloc(tSize * sizeof(int));
    a->total_size = tSize; 
    a->used_size = uSize;
    a->ptr = (int*)malloc(tSize * sizeof(int));
};

void setVal(struct MyArray *a)
{
    int n;
for (int i = 0; i < a->used_size; i++)
{
    printf("enter element %d :-\t",i);
    scanf("%d",&n);
    (a->ptr)[i] = n;
}

}

void show(struct MyArray *a)
{

for (int i = 0; i < a->used_size; i++)
{
    printf("%d\t",(a->ptr)[i]);
}

}

int main(){
    struct MyArray marks;
    printf("\rrunning createArray\n");
    createArray(&marks, 10, 2);
    printf("\rrunning setVal\n");
    setVal(&marks);
    printf("\rrunning show \n");
    show(&marks);

    return 0;
    
}

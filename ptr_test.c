#include <stdio.h>
#include <stdlib.h>

void PtrShowValues(int*, int);
void PtrShowAdresses(int*, int);
void PtrShow(int*, int);

int main(){
    int i, x = 2;
    int ptr_i = 1;
    int *ptr = NULL;

    ptr = malloc(ptr_i * sizeof(int));
    *(ptr+ptr_i-1) = ptr_i;
    PtrShow(ptr, ptr_i);

    printf("\n      Zaczynamy zwiekszac!\n\n");
    for(i = 0; i < x; i++){
        ptr_i++;
        ptr = realloc(ptr, ptr_i*sizeof(int));
        *(ptr+ptr_i-1) = ptr_i;
        PtrShow(ptr, ptr_i);
    }

    printf("\n      Zaczynamy zmniejszac!\n\n");
    for(i = 0; i < x; i++){
        ptr_i--;
        ptr = realloc(ptr, ptr_i*sizeof(int));
        *(ptr+ptr_i-1) = ptr_i;
        PtrShow(ptr, ptr_i);
    }
    printf("%d\n", ptr_i);

    printf("\n      TESTTESTTESTTEST!\n\n");
    printf("%d\n", (*ptr+1));

    free(ptr);
    return 0;
}

void PtrShowValues(int *p, int pi){
    int i;
    for(i = 0; i<pi; i++)
        printf("%d\n", (*p+i));
}

void PtrShowAdresses(int *p, int pi){
    int i;
    for(i = 0; i<pi; i++)
        printf("%d\n", (p+i));
}

void PtrShow(int *p, int pi){
    printf("Values:\n");
    PtrShowValues(p, pi);
    printf("Adresses:\n");
    PtrShowAdresses(p, pi);
    printf("---\n");
}


/* inspect.c: create a function which takes a pointer and a size 
              and return contents of memory */

#include <stdio.h>

void inspect(const void* location, size_t size) {
    char* byte = (char*)location;
    int i;

    for (i = 0; i < size; i++) {
        printf("%hhX ", *byte++);
    }
    printf("\n");
}

int main() {

    char letter = 'a';
    int num = 2;
    float floatNum = 4.52;
    int arr[] = {1, 2, 3, 4};
    char charray[] = {'a', 'b', 'c', 'd'};

    printf("char\n");
    inspect(&letter, sizeof(char));

    printf("\nint\n");
    inspect(&num, sizeof(int));

    printf("\nfloat\n");
    inspect(&floatNum, sizeof(float));

    printf("\nint array\n");
    inspect(&arr, sizeof(arr));

    printf("\nchar array\n");
    inspect(&charray, sizeof(charray));

    return 1;
}
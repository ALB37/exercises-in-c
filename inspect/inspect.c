/* inspect.c: create a function which takes a pointer and a size 
              and return contents of memory */

#include <stdio.h>

void inspect(const void* location, size_t size) {
    const unsigned char* byte = (const unsigned char*)location;
    unsigned int i;

    for (i = 0; i < size; i++) {
        printf("byte %d: %02X\n", i, *byte++);
    }
    printf("\n");
}

int main() {

    char letter = 'a';
    int num = 2;
    float floatNum = 4.52;
    int arr[] = {1, 2, 3, 4};
    char charray[5] = {'a', 'b', 'c', 'd', '\0'};

    printf("char: %c\n", letter);
    inspect(&letter, sizeof(char));

    printf("\nint: %d\n", num);
    inspect(&num, sizeof(int));

    printf("\nfloat: %.2f\n", floatNum);
    inspect(&floatNum, sizeof(float));

    printf("\nint array: [1, 2, 3, 4]\n");
    inspect(arr, sizeof(arr));

    printf("\nchar array: %s\n", charray);
    inspect(charray, sizeof(charray));

    return 0;
}
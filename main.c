#include <stdio.h>

int main(void)
{
    int i;

    char a = 'i';
    int b = 42;
    long c = 91;

    char* a_ptr = &a;
    int* b_ptr = &b;
    long* c_ptr = &c;

    unsigned int j = -5123;

    int* j_int = (int*)&j;
    char* j_char = (char*)&j;

    printf("char &a: %p [%c]\n", a_ptr, *a_ptr);
    printf("int &b: %p [%d]\n", b_ptr, *b_ptr);
    printf("long &c: %p [%ld]\n", c_ptr, *c_ptr);
    printf("\n");

    *a_ptr = 'L';
    *b_ptr = 921;
    *c_ptr = 323484;

    printf("char &a: %p [%c]\n", a_ptr, *a_ptr);
    printf("int &b: %p [%d]\n", b_ptr, *b_ptr);
    printf("long &c: %p [%ld]\n", c_ptr, *c_ptr);
    printf("\n");

    j_int = (int*)&j;
    j_char = (char*)&j;
    
    printf("&j_int: %p [%d]\n", j_int, *j_int);
    printf("&j_char: %p [%hhu]\n", j_char, *j_char);
    printf("\n");

    printf("J Bytes:\n");
    printf("Bytes: ");
    j_char = (char*)&j;
    for(i = 0; i < sizeof(j); ++i) 
    {
        printf("%hhu.", *j_char++);
    }
    printf("\n\n");

    printf("J Bytes + 16 Each:\n");
    printf("Bytes: ");
    j_char = (char*)&j;
    for(i = 0; i < sizeof(j); ++i) 
    {
        *j_char += 16;
        printf("%hhu.", *j_char++);
    }
    printf("\n\n");

    j_int = (int*)&j;
    j_char = (char*)&j;
    
    printf("&j_int: %p [%d]\n", j_int, *j_int);
    printf("&j_char: %p [%hhu]\n", j_char, *j_char);
    printf("\n");
}
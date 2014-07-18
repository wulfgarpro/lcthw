/*
 * This is a testing program to learn c better
 */

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    printf("The size of a is: %ld\n", sizeof(a));

    int *b = malloc(sizeof(int));
    assert(b != NULL);
    *b = 2;

    printf("The value at pointer b is: %d\n", *b);
    printf("The address value of pointer b is: %p\n", &b);


    struct Person {
        int age;
        char *name;
    };

    struct Person *me = malloc(sizeof(struct Person));
    me->age = 27;
    me->name = "James Fraser";

    printf("The value of my name is: %s", me->name);

    int j, k;
    int *ptr;

    j = 1;
    k = 2;
    ptr = &k;
    printf("\n");
    printf("j has the value %d and is stored at %p\n",j,&j);
    printf("k has the value %d and is stored at %p\n",k,&k);
    printf("ptr has the value %p and is stored at %p\n",ptr,&ptr);
    printf("The value of the integer pointed to by ptr is %d\n",
           *ptr);

    return 0;
}
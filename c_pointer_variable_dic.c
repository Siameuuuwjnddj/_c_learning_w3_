#include <stdio.h>

int main()
{
    int p_v =5;
    int* pointer = &p_v;

    printf("%d\n",p_v);

    printf("%p\n",&p_v);
    printf("%p",&pointer);
    return 0;
}

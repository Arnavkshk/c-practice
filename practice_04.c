#include <stdio.h>
typedef struct test
{
    int a;
    char c;

}Test;


int main()
{
    Test t1,*sp;
    sp=&t1;
    sp->a=6; sp->c='k';
    printf("a=%d,c=%c",sp->a,sp->c);
    return 0;
}
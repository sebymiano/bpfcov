#include <stdio.h>
#include <stdint.h>

void ciao()
{
    printf("ciao\n");
}

void foo()
{
    printf("foo\n");
}

int main(int argc, char **argv)
{
    if (argc > 1)
    {
        foo();
        for (int i = 0; i < 22; i++) {
            ciao();
        }
    }
    printf("main\n");
}
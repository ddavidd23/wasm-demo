#include <stdio.h>
#include <emscripten/emscripten.h>

int main()
{
    printf("Hello World!\n");

    return 0;
}

int counter = 0;

extern "C"
{
EMSCRIPTEN_KEEPALIVE
void f(int argc, char** argv)
{
    printf("f called\n");
}

EMSCRIPTEN_KEEPALIVE
int increment()
{
    counter++;
    printf("Counter: %d\n", counter);
    return counter;
}
}
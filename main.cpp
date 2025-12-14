#include <stdio.h>
#include <emscripten/emscripten.h>

int main()
{
    printf("Hello World\n");

    return 0;
}

extern "C" EMSCRIPTEN_KEEPALIVE
void f(int argc, char** argv)
{
    printf("f called\n");
}
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void setup(void)
{
    setvbuf(stdin, NULL, _IONBF, 0);
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);
}

int main(void)
{
    char buf[1024];

    setup();

    puts("This challenge is an introduction to shellcoding. Write some machine "
        "code that launches a shell (/bin/sh) and the target will execute it. "
        "Use that shell to read the flag from /flag.txt. Good luck!");

    printf("Give me your shellcode: ");
    read(0, buf, sizeof(buf));

    puts("Here we go...");
    (*(void(*)()) buf)();

    return 0;
}

# Story

Oh tell me a good story, won't you?

Furthermore, we get a C code:

```c
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void setup(void)
{
    setvbuf(stdin, NULL, _IONBF, 0);
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);
}

void print_menu(void)
{
    puts("\nMenu:");
    puts("* tell a [s]tory");
    puts("* ask for the [f]lag");
    puts("* [l]eave");
    printf("your choice> ");
}

int main(void)
{
    char choice[2] = {0};
    char buf[32];
    uint32_t magic = 0;

    setup();

    puts("\nHey you! I heard that you have some great hacking stories. "
        "Mind sharing one or two? I will give you a flag!");

    for (;;) {
        print_menu();
        read(0, choice, sizeof(choice));

        switch(choice[0]) {
        case 'f':
            if (magic == 0x41414141) {
                printf("That was simply amazing! Here is a flag: ");
            } else {
                printf("%x\n",magic);
                puts("Hmm, do you have any other stories?");
            }
            break;

        case 's':
            printf("I'm all ears! ");
            gets(buf);
            printf("%x\n",magic);
            break;

        case 'l':
            puts("Bye!");
            exit(0);

        default:
            puts("Sorry, I didn't quite get that...");
            break;
        }
    }

    return 0;
}
```

## Walkthrough

First interesting thing, the Makefile:

```bash
.PHONY: clean
story: story.c
	gcc -g -fno-stack-protector -o $@ $^
clean:
	rm -f story
```

Flags means that it includes debug symbols and that the buffer overflow protection is disabled.

The method to get the flag is the following:

- Press `s` to tell a story.
- Tell a story with enough `A` letters in order to create a buffer overflow:
  - The story is contained in `buf`, `magic` is the next variable in the stack.
  - `A=0x41`: therefore, if the story contains enough `A`, it will overwrite the `magic` variable!
- Then, we press `f` for the flag: it will print the flag only if `magic==0x41414141` (in other words, `AAAA`).

## Solution

`IceCTF{0h_1_l0ve_good_st0r1es}`
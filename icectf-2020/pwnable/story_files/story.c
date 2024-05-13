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
                system("cat /flag.txt");
            } else {
                puts("Hmm, do you have any other stories?");
            }
            break;

        case 's':
            printf("I'm all ears! ");
            gets(buf);
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

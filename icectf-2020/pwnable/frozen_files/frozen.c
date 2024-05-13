#include <fcntl.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define NUM_USERS 8
#define USER_NAME_SIZE 32

enum {
    ROLE_ADMIN = 0,
    ROLE_REGULAR = 1,
};

struct user {
    int32_t role;
    char name[USER_NAME_SIZE];
};

void setup(void)
{
    setvbuf(stdin, NULL, _IONBF, 0);
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);
}

void give_flag(void)
{
    char buf[128];

    puts("Congratulations! Here is a flag.");

    int fd = open("flag.txt", O_RDONLY);
    if (fd < 0) {
        puts("There was a problem, please tell an admin :(");
        _exit(1);
    }

    ssize_t l = read(fd, buf, sizeof(buf));
    if (l < 0) {
        puts("There was a problem, please tell an admin :(");
        _exit(1);
    }

    write(1, buf, l);
    close(fd);
}

void print_menu(void)
{
    puts("\nMenu:");
    puts("[c]reate user");
    puts("[d]elete user");
    puts("[e]dit user");
    puts("[s]how user");
    puts("get the [f]lag (admin only)");
    puts("[l]eave");
    printf("your choice> ");
}

int read_int(void)
{
    char buf[10];

    if (fgets(buf, sizeof(buf), stdin) == NULL) {
        return 0;
    }

    return atoi(buf);
}

struct user *create_user(void)
{
    struct user *u = calloc(1, sizeof(struct user));
    if (u == NULL) {
        puts("Something is wrong, please contact an admin.");
        _exit(1);
    }

    u->role = ROLE_REGULAR;

    return u;
}

void edit_user(struct user *u)
{
    if (u == NULL) {
        puts("Nope");
        return;
    }

    printf("New length: ");
    int length = read_int();
    if (length > USER_NAME_SIZE - 1) {
        puts("Nope");
        return;
    }

    // Reserve 1 byte for the null character at the end
    uint16_t actual_length = length + 1;

    printf("New name: ");
    ssize_t l = read(0, u->name, actual_length);
    if (l < 0) {
        puts("Something is wrong, please contact an admin.");
        _exit(1);
    }

    if (l > 0 && u->name[l - 1] == '\n') {
        // Get rid of the newline
        u->name[l - 1] = '\0';
    }
}

void get_flag(struct user *u)
{
    if (u == NULL || u->role != ROLE_ADMIN) {
        puts("Nope");
    } else {
        puts("Yay!");
        system("cat flag.txt");
    }
}

int main(void)
{
    char choice[2] = {0};
    bool done = false;

    struct user *users[NUM_USERS] = {0};

    setup();

    puts("Welcome to the IceCTF user management system");

    while (!done) {
        print_menu();
        read(0, choice, sizeof(choice));

        switch(choice[0]) {
        case 'c': {
            bool found = false;
            for (int i = 0; i < NUM_USERS; i++) {
                if (users[i] == NULL) {
                    users[i] = create_user();
                    found = true;
                    printf("User %d created\n", i);
                    break;
                }
            }

            if (!found) {
                puts("Unfortunately there is no more space. Try again later");
            }
        } break;


        case 'd': {
            printf("Which? ");
            int i = read_int();
            if (i >= NUM_USERS || i < 0) {
                puts("Nope");
            } else {
                free(users[i]);
                users[i] = NULL;
            }
        } break;

        case 'e': {
            printf("Which? ");
            int i = read_int();
            if (i >= NUM_USERS || i < 0) {
                puts("Nope");
            } else {
                edit_user(users[i]);
            }
        } break;

        case 's': {
            printf("Which? ");
            int i = read_int();
            if (i >= NUM_USERS || i < 0 || users[i] == NULL) {
                puts("Nope");
            } else {
                printf("User %d (%s, %s) at %p\n", i,
                    users[i]->name[0] == '\0' ? "no name" : users[i]->name,
                    users[i]->role == ROLE_ADMIN ? "admin" : "regular user",
                    users[i]);
            }
        } break;

        case 'f': {
            printf("Which? ");
            int i = read_int();
            if (i >= NUM_USERS || i < 0) {
                puts("Nope");
            } else {
                get_flag(users[i]);
            }
        } break;

        case 'l':
            puts("Bye!");
            done = true;
            break;

        default:
            puts("Invalid choice");
            break;
        }
    }

    return 0;
}

#include "types.h"
#include "user.h"
#include "syscall.h"

int
main(int argc, char *argv[])
{
    printf(1, "check = %d\n", getcount());
//    printf(1, "initial fork count %d\n", getcount());
//    if (fork() == 0) {
//        printf(1, "child fork count %d\n", getcount());
//        printf(1, "child write count %d\n", getcount());
//    } else {
//        wait();
//        printf(1, "parent fork count %d\n", getcount());
//        printf(1, "parent write count %d\n", getcount());
//    }
//    printf(1, "wait count %d\n", getcount());
    exit();
}

//initial fork count 0
//child fork count 0
//child write count 19
//wait count 0
//parent fork count 1
//parent write count 41
//wait count 1
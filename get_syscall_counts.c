#include "types.h"
#include "user.h"
#include "syscall.h"


int main(int argc, char const *argv[])
{
    printf(1, "initial sleep count %d\n", getcount(SYS_sleep));
    printf(1, "Sleep init \n");
    sleep(10);
    printf(1, "Sleep end\n");
    printf(1, "sleep count %d\n", getcount(SYS_sleep));
    printf(1, "getting pid\n");
    getpid();
    printf(1, "get_pid count %d\n", getcount(SYS_getpid));
    printf(1, "uptime call\n");
    uptime();
    printf(1, "uptime count %d\n", getcount(SYS_uptime));
    return 0;
}


// int
// main(int argc, char *argv[])
// {
//     printf(1, "initial fork count %d\n", getcount(SYS_fork));
//     if (fork() == 0) {
//         printf(1, "child fork count %d\n", getcount(SYS_fork));
//         printf(1, "child write count %d\n", getcount(SYS_write));
//     } else {
//         wait();
//         printf(1, "parent fork count %d\n", getcount(SYS_fork));
//         printf(1, "parent write count %d\n", getcount(SYS_write));
//     }
//     printf(1, "wait count %d\n", getcount(SYS_wait));
//     exit();
// }

//initial fork count 0
//child fork count 0
//child write count 19
//wait count 0
//parent fork count 1
//parent write count 41
//wait count 1
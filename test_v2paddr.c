#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  printf(1, "The physical address is %d\n", v2paddr(2));
  exit();
}
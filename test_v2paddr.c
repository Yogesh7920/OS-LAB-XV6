#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  printf(1, "The physical address of 0x0 is %x\n", v2paddr(0x0));
  printf(1, "The physical address of 0x2 is %x\n", v2paddr(0x2));
  printf(1, "The physical address of 0x33 is %x\n", v2paddr(0x33));
  printf(1, "The physical address of 0x90 is %x\n", v2paddr(0x90));
  exit();
}
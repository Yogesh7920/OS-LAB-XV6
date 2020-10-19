#include "types.h"
#include "stat.h"
#include "user.h"
#include "memlayout.h"

int
main(int argc, char *argv[])
{
  uint a1, a2, a3;
  uint *x1 = (uint *)0x2321;
  uint *x2 = (uint *)0x3321;
  uint *x3 = (uint *)0x4321;
  v2paddr(&a1, x1);
  printf(1, "%x\n", a1);
  v2paddr(&a2, x2);
  printf(1, "%x\n", a2);
  v2paddr(&a3, x3);
  printf(1, "%x\n", a3);
  exit();
}
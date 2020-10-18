#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  int a[5] = {1};
  v2paddr((uint)&a[2]);
  v2paddr((uint)&a[3]);
  v2paddr(0xFabc);
  v2paddr(0x1abc);
  printf(1, "returned = %d\n", v2paddr(0x80000001)); // KERNBASE + 1 returns -1 and thus shown as int (%d)
  printf(1, "returned = %x\n", v2paddr(0x8));
  exit();
}
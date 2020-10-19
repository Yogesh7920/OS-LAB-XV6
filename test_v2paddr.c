#include "types.h"
#include "stat.h"
#include "user.h"
#include "memlayout.h"

int
main(int argc, char *argv[])
{

  uint pa;
  int arr[2] = {0};

  if (!v2paddr(&pa, &arr[0]))
    printf(1, "Physical Address = %x\n", pa);

  if (!v2paddr(&pa, &arr[1]))
    printf(1, "Physical Address = %x\n", pa);

  uint *x1;

  x1 = (uint *)0x2321;
  if (!v2paddr(&pa, x1))
    printf(1, "Physical Address = %x\n", pa);

  x1 = (uint *)0x1321;
  if (!v2paddr(&pa, x1))
    printf(1, "Physical Address = %x\n", pa);

  x1 = (uint *)0x321;
  if (!v2paddr(&pa, x1))
    printf(1, "Physical Address = %x\n", pa);

  exit();
}
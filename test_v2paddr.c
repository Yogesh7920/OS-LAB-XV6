#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  int a[5] = {0};
  v2paddr((uint)&a[0]);
  v2paddr((uint)&a[1]);
  v2paddr((uint)&a[2]);
  v2paddr((uint)&a[3]);
  exit();
}
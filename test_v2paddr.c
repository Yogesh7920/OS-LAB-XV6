#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  v2paddr(0x2FCC);
  v2paddr(0x1);
  v2paddr(0x80000001);
  v2paddr(0x0242423);
  v2paddr(0x0657322);
  exit();
}
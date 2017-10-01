#include "types.h"
#include "user.h"
#include "virt2real.h"
#include "mmu.h"
#include "memlayout.h"

int stdout = 1;
int stderr = 2;

int
main(int argc, char *argv[])
{
  char *address = (char*)0x0010;
  printf(1, "virt2real\nAddress:%p, Depois:%p\n", address, virt2real(address));
  exit();
}

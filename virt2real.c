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
  printf(1, "teste\n");
  exit();
}

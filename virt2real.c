#include "types.h"
#include "user.h"
#include "virt2real.h"
#include "mmu.h"
#include "memlayout.h"

int stdout = 1;
int stderr = 2;

void bin(unsigned n)
{
    /* step 1 */
    if (n > 1)
        bin(n/2);

    /* step 2 */
    printf(stdout, "%d", n % 2);
}

int
main(int argc, char *argv[])
{
  char *address = (char*)0b00000000000011111111000000000000;

  bin((unsigned int)address >> 4);
  printf(stdout, "\n");
  //bin((unsigned int)virt2real(address));
  printf(stdout, "\n");
  printf(1, "virt2real\nAddress:%p, Depois:%p\tNum_pages:%d\t\n", address, virt2real(address),num_pages());
  exit();
}

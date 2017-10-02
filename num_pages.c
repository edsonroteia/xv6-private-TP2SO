#include "types.h"
#include "user.h"
#include "date.h"

int stdout = 1;
int stderr = 2;

int
main(int argc, char *argv[])
{
  printf(stdout, "num_pages: %d\n", num_pages());
  exit();
}

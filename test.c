#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  int i;

  for(i = 0; i < 10; i++)
    printf(1, "%d\n", random());
  exit();
}

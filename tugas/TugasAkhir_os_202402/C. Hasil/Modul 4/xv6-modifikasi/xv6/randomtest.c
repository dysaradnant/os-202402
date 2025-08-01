#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int
main(void)
{
  int fd = open("/dev/random", 0);
  if(fd < 0){
    printf(1, "cannot open /dev/random\n");
    exit();
  }

  unsigned char buf[8];
  read(fd, (char*)buf, sizeof(buf));
  for(int i = 0; i < 8; i++)
    printf(1, "%d ", buf[i]);
  printf(1, "\n");

  close(fd);
  exit();
}

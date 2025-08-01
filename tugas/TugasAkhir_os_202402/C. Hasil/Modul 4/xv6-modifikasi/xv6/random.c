// random.c
#include "types.h"
#include "defs.h"
#include "param.h"
#include "rand.h"
#include "fs.h"
#include "file.h"

int
randomread(struct inode *ip, char *dst, int n)
{
  int i;
  for(i = 0; i < n; i++) {
    dst[i] = random() & 0xFF;
  }
  return n;
}

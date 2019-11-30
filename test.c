//test.c
#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"
#include "fs.h"
//#include "file.h"
#include "types.h"
#include "spinlock.h"
#include "sleeplock.h"
#include "mmu.h"
//#include "sysfile.c"

char var;
char *c = &var;
//inode tester;
int
main(int argc, char *argv[])
{
int fd;
int fw;
*c = 'a';
mksmdir(c);
printf(2, "testing\n");

fd = open("small_file.txt", O_CREATE | T_SMALLFILE | O_RDWR);
fw = write(fd, "1111", 5);
//dirlink('fw',5)
//find a way to move the small file to small dir
close(fd);
close(fw);
exit();
}

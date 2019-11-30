#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"
#include "fs.h"


int
main(int argc, char *argv[])
{

int fd;
int file_size;
int fw;

file_size = 50;

fd = open("small_file.txt", O_CREATE | O_SMALLFILE | O_RDWR);
fw = write(fd, "1111", file_size);

close(fd);
close(fw);
exit();
}


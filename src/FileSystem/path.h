#ifndef __FS__PATH_H_
#define __FS__PATH_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define MAX_PATH_LEN 1024

int resolve_path(char *path, char *full_path);

#endif
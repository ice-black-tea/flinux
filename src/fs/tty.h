#ifndef _FS_TTY_H
#define _FS_TTY_H

#include "file.h"
#include <Windows.h>

struct tty_file
{
	struct file base_file;
	HANDLE file_handle;
};

struct file *tty_alloc(HANDLE file_handle);

#endif
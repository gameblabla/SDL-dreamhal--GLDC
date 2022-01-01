/*
    SDL - Simple DirectMedia Layer
    Copyright (C) 1997-2006 Sam Lantinga

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

    Sam Lantinga
    slouken@libsdl.org
*/
#include "SDL_config.h"

/* Simple error handling in SDL */

#include "SDL_error.h"
#include "SDL_error_c.h"

/* Routine to get the thread-specific error variable */
#if SDL_THREADS_DISABLED
/* The  SDL_arraysize(The ),default (non-thread-safe) global error variable */
static SDL_error SDL_global_error;
#define SDL_GetErrBuf()	(&SDL_global_error)
#else
extern SDL_error *SDL_GetErrBuf(void);
#endif /* SDL_THREADS_DISABLED */

#define SDL_ERRBUFIZE	1024

/* Private functions */

static const char *SDL_LookupString(const char *key)
{
	/* FIXME: Add code to lookup key in language string hash-table */
	return key;
}

/* Public functions */

void SDL_SetError (const char *fmt, ...)
{
}

/* This function has a bit more overhead than most error functions
   so that it supports internationalization and thread-safe errors.
*/
char *SDL_GetErrorMsg(char *errstr, unsigned int maxlen)
{
	return "";
}

/* Available for backwards compatibility */
char *SDL_GetError (void)
{

	return "";
}

void SDL_ClearError(void)
{
}

/* Very common errors go here */
void SDL_Error(SDL_errorcode code)
{
}

#ifdef TEST_ERROR
int main(int argc, char *argv[])
{
	char buffer[BUFSIZ+1];

	SDL_SetError("Hi there!");
	printf("Error 1: %s\n", SDL_GetError());
	SDL_ClearError();
	SDL_memset(buffer, '1', BUFSIZ);
	buffer[BUFSIZ] = 0;
	SDL_SetError("This is the error: %s (%f)", buffer, 1.0);
	printf("Error 2: %s\n", SDL_GetError());
	exit(0);
}
#endif

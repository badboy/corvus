#ifndef __ALLOC_H
#define __ALLOC_H

#include <stddef.h>

#define cv_malloc(size) cv_raw_malloc(size, __FILE__, __LINE__)
#define cv_calloc(number, size) cv_raw_calloc(number, size, __FILE__, __LINE__)
#define cv_realloc(ptr, size) cv_raw_realloc(ptr, size, __FILE__, __LINE__)

void *cv_raw_malloc(size_t size, const char *file, int line);
void *cv_raw_calloc(size_t number, size_t size, const char *file, int line);
void *cv_raw_realloc(void *ptr, size_t size, const char *file, int line);
void cv_free(void *ptr);

#endif /* end of include guard: __ALLOC_H */

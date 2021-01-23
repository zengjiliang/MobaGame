#include "utils.h"
void * asset_malloc_space(int len)
{
	void* val = NULL;
	val = malloc(len);
	assert(val != NULL);
	memset(val, 0, len);
	return val;
}

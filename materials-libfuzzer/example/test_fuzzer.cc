#include <stdint.h>
#include <stddef.h>

#include "vul1.h"

extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
	/*
  if (size > 0 && data[0] == 'H')
    if (size > 1 && data[1] == 'I')
       if (size > 2 && data[2] == '!')
       __builtin_trap();
	*/

	VulnerableFunction1(data, size);

  return 0;
}

#ifndef FAULT_H
#define FAULT_H

#include <stdint.h>


typedef enum fault_code_t_ {
  FAULT_I2C = 0x01,
  FAULT_ASSERTION_FAILED = 0xaa
} fault_code_t;


#ifdef NDEBUG
  #define fault(code, extended_status, error_text) do { } while (0)
#else
  #define fault(code, extended_status, error_text) debug_fault((code), (extended_status), (error_text))
#endif

void debug_fault(fault_code_t code, uint16_t extended_status, const char *error_text);

#endif /* FAULT_H */

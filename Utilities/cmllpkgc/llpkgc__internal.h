/* Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
   file Copyright.txt or https://cmake.org/licensing for details.  */

/* This code was generated by llpkgc, do not edit it by hand
   See: https://gitlab.kitware.com/utils/llpkgc  */


#ifndef INCLUDE_LLPKGC__INTERNAL_H_
#define INCLUDE_LLPKGC__INTERNAL_H_
#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

typedef struct llpkgc__internal_s llpkgc__internal_t;
struct llpkgc__internal_s {
  int32_t _index;
  void* _span_pos0;
  void* _span_cb0;
  int32_t error;
  const char* reason;
  const char* error_pos;
  void* data;
  void* _current;
  void* settings;
  uint8_t unfinished_;
  uint8_t escaped_;
};

int llpkgc__internal_init(llpkgc__internal_t* s);
int llpkgc__internal_execute(llpkgc__internal_t* s, const char* p, const char* endp);

#ifdef __cplusplus
}  /* extern "C" */
#endif
#endif  /* INCLUDE_LLPKGC__INTERNAL_H_ */

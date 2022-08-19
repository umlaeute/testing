#include <stdio.h>
#include <stdint.h>

#define print_type(t) printf("%d\tsizeof(" #t ")\n", (int)sizeof(t))

int main() {
  print_type( void* );
  print_type( intptr_t );
  print_type( long );
  print_type( long long);

#if defined(_WIN32) && defined(__x86_64__)
  printf("Win64 (old style)\n");
#endif
#if defined(_WIN32) && (defined(__x86_64__) || defined (_M_X64))
  printf("Win64 (new style)\n");
#endif
  return 0;
}

#include <stdio.h>
#include <stdint.h>

#define print_type(t) printf("sizeof(" #t ")\t= %d\n", sizeof(t))

int main() {
  print_type( void* );
  print_type( intptr_t );
  print_type( long );
  print_type( long long);
  return 0;
}

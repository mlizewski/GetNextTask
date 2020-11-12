// Compiled with: gcc -std=c11 -Wall -pthread -lm

#include <stdio.h>

#define SAMPLE_SIZE 11


int
GetNext() {
  static int i = 0;
  static int sample_input[SAMPLE_SIZE] =
    { 0xf12, 0xea2, 0x217, 0x684, 0xfff, 0x1f5,
    0xf12, 0xea2, 0x684, 0xfff, 0x1f5
  };
 
  if (i < SAMPLE_SIZE)
      return sample_input[i++];
  else
      return -1;
}

int 
main(void)
{
    int unique = 0, next = 0;
    unsigned int i; // iterator
    
    // Pomysł oparty o XOR () - zakładając, że nie ma więcej niż 2 takich samych elementów
    for(i = 0; i < SAMPLE_SIZE; i++)
    {
        res = GetNext();
        unique = unique ^ res;
    }
    
    printf("Unique element: %x\n",unique);
    printf("--END--\n");
    return 0;
}

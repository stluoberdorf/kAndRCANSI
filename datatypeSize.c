#include <stdio.h>

int main(void) {
   printf("char     : %lu Byte\n" , sizeof(char));
   printf("int      : %lu Bytes\n", sizeof(int));
   printf("long     : %lu Bytes\n", sizeof(long int));
   printf("float    : %lu Bytes\n", sizeof(float));
   printf("double   : %lu Bytes\n", sizeof(double));
   printf("66       : %lu Bytes\n", sizeof(66));
   printf("Hallo    : %lu Bytes\n", sizeof("Hallo"));
   printf("A        : %lu Bytes\n", sizeof((char)'A'));
   printf("34343434 : %lu Bytes\n", sizeof(34343434));
   return 0;
}

/*main(){
	printf("%lu\n", sizeof(char));
}*/

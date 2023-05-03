#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
   time_t t1;

   t1 = time(NULL);
   if (t1 == (time_t)-1)
   {
      perror("time");
      exit(EXIT_FAILURE);
   }
   (void)printf("%ld secondes, %s\n", t1, ctime(&t1));
   return EXIT_SUCCESS;
}

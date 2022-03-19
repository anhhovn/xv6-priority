#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main() {
  int pid = 0;
  int i = 1; //number of children
  

  for ( int count = 0; count < i; count++ ) {
    pid = fork ();
    if ( pid < 0 ) {
      printf(1, "%d forking failed\n", getpid());
    } else if (pid > 0) {
      // parent
      printf(1, "Parent pid:%d creating child pid: %d\n",getpid(), pid);
      ppr(0,0);
      wait();
      }
      else{
	printf(1,"Child pid: %d created\n",getpid());
      }
  }
  
  exit();
}

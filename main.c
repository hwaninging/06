#include <stdio.h>
#include <stdlib.h>

void func2(void) 
 {
     int x;
     printf("func2 x is at %p\n", &x); 
}

void func(void) 
 {
     int x;
     printf("func x is at %p\n", &x); 
     func2();
}

int main(int argc, char *argv[]) 
{
    int x;
    
    printf("main x is at %p\n", &x);
    func();
  
  system("PAUSE");	
  return 0;
} 

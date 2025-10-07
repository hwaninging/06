#include <stdio.h>
#include <stdlib.h>
//복사본 

void func(int x) 
 {
     printf("func x is at %p\n", &x); 
     x = 10;
}

int main(int argc, char *argv[]) 
{
    int x;
    
    printf("main x is at %p\n", &x);
    func(x); //변수 넣어줌 : 서로 다른 주소가 찍힘.(아예 다른 존재) 
  
  system("PAUSE");	
  return 0;
} 

#include <stdio.h>
#include <stdlib.h>
//���纻 

void func(int x) 
 {
     printf("func x is at %p\n", &x); 
     x = 10;
}

int main(int argc, char *argv[]) 
{
    int x;
    
    printf("main x is at %p\n", &x);
    func(x); //���� �־��� : ���� �ٸ� �ּҰ� ����.(�ƿ� �ٸ� ����) 
  
  system("PAUSE");	
  return 0;
} 

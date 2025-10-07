#include <stdio.h>
#include <stdlib.h>
//실습 4: Call By Value - 메모리가 전달X, 값만 전달된다. 

int square(int a) //반환 해주기(제곱한걸 뽑고싶을때) void -> int 
{
     return(a*a); //반환 a -> return 
}

// main함수 꾸미기 
int main(int argc, char *argv[]) {
    
    int a = 2;
    a = square(a); //값이 2가 복사되어 들어감. (반환: square(a) -> a = square(a) 
    printf("a=%i\n", a);

  
  system("PAUSE");	
  return 0;
} 

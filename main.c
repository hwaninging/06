#include <stdio.h>
#include <stdlib.h>
//실습 3: 여러가지 함수 구현 

int sumTwo(int a, int b)
{
    return(a+b);
} 

int square(int n) 
{
    return (n*n); 
}

int get_max(int a, int b)
{
    if(a>b)
      return a;
    else //체크 표시 뜨면 여기에 break가 걸린 것. (break point)
        return b; 
}

int main(int argc, char *argv[]) {
  
  printf("sum two result is %i\n", sumTwo(2,3)); 
  printf("square result is %i\n", square(5)); 
  printf("getmax result is %i\n", get_max(10,13)); 
  
  system("PAUSE");	
  return 0;
} 

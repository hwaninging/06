#include <stdio.h>
#include <stdlib.h>
//실습 3: 여러가지 함수 구현 

//3가지 함수 정의
int sumTwo(int a, int b)
{
    return(a+b);
} //몸체 

int square(int n) //매개변수 한개
{
    return (n*n); //제곱은 없어서 이렇게
}

int get_max(int a, int b)
{
    if(a>b)
      return a;
    else
        return b; 
}

int main(int argc, char *argv[]) {
  
  printf("sum two result is %i\n", sumTwo(2,3));
  printf("square result is %i\n", square(5));
  printf("getmax result is %i\n", get_max(10,13));
  
  system("PAUSE");	
  return 0;
} 

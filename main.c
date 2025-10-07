#include <stdio.h>
#include <stdlib.h>
//실습 5: Combination (경우의 수 계산) 

int factorial(int n) //펙토리얼 함수 완료 
{
    int res = 1; //결과를 1로 초기화
    int i; 
    for (i=1;i<=n;i++) //for문 구성 
         res = res*i;
    
    return res; 
}

int combination(int n, int r)
{
    return factorial(n)/factorial(n-r)/factorial(r); 
} 

int main(int argc, char *argv[]) {
    
    //변수 선언
     int n, r;
     int res;
     //input data 
     printf("Input n and r :");
     scanf("%d %d", &n, &r);
     
     //compute combination
     res = combination(n, r);
     
     // print result
     printf("combination result is :%i\n", res);

  
  system("PAUSE");	
  return 0;
} 

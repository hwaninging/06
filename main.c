#include <stdio.h>
#include <stdlib.h>
//�ǽ� 3: �������� �Լ� ���� 

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
    else //üũ ǥ�� �߸� ���⿡ break�� �ɸ� ��. (break point)
        return b; 
}

int main(int argc, char *argv[]) {
  
  printf("sum two result is %i\n", sumTwo(2,3)); 
  printf("square result is %i\n", square(5)); 
  printf("getmax result is %i\n", get_max(10,13)); 
  
  system("PAUSE");	
  return 0;
} 

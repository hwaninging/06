#include <stdio.h>
#include <stdlib.h>
//�ǽ� 5: Combination (����� �� ���) 

int factorial(int n) //���丮�� �Լ� �Ϸ� 
{
    int res = 1; //����� 1�� �ʱ�ȭ
    int i; 
    for (i=1;i<=n;i++) //for�� ���� 
         res = res*i;
    
    return res; 
}

int combination(int n, int r)
{
    return factorial(n)/factorial(n-r)/factorial(r); 
} 

int main(int argc, char *argv[]) {
    
    //���� ����
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

#include <stdio.h>
#include <stdlib.h>

void printstar(int N) //�Է� ���� ��ŭ ���� ��ڴ�. 
 {
     int i;
     for(i=0;i<N;i++)
         printf("*");
}

int main(int argc, char *argv[]) 
{
    int i;
    printstar(10);
    printstar(10);
    printstar(10);
  
  system("PAUSE");	
  return 0;
}

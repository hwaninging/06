#include <stdio.h>
#include <stdlib.h>
//�ǽ� 4: Call By Value - �޸𸮰� ����X, ���� ���޵ȴ�. 

int square(int a) //��ȯ ���ֱ�(�����Ѱ� �̰������) void -> int 
{
     return(a*a); //��ȯ a -> return 
}

// main�Լ� �ٹ̱� 
int main(int argc, char *argv[]) {
    
    int a = 2;
    a = square(a); //���� 2�� ����Ǿ� ��. (��ȯ: square(a) -> a = square(a) 
    printf("a=%i\n", a);

  
  system("PAUSE");	
  return 0;
} 

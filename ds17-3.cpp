#include <stdio.h>
#include <stdlib.h>
#define Maxsize 100

typedef struct 
{
  int data[Maxsize];
  int length; 
}sqlist;

bool del_x(sqlist &L,int x)
{
 if (L.length==0)
   return false;
 int k=0;
 for(int i=0;i<L.length;i++)
  {
    if(L.data[i]!=x)
      {
        L.data[k]=L.data[i];
	k++;
      }
  }
  L.length=k;
  
}

void input(sqlist &L)
{ 
  printf("请输入顺序表的长度:");
  scanf("%d",&L.length);
  for (int i=0;i<L.length;i++)
    {
      printf("请输入第%d个元素:",i+1);
      scanf("%d",&L.data[i]);
    }
}

void output(sqlist &L)
{
  for(int i=0;i<L.length;i++)
    printf("第%d个元素:%d\n",i+1,L.data[i]);
}

int main(void)
{ 
  sqlist L;
  input(L);
  int x;
  printf("请输入被删除元素的值:");
  scanf("%d",&x);
  del_x(L,x);
  output(L);
}

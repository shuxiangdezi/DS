#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#define Maxsize 100

typedef struct
{
  int data[Maxsize];
  int length;
}sqlist;

void swap(sqlist &L)
{
  int temp;
  for (int i=0;i<L.length/2;i++)
   {
      temp=L.data[i];
      L.data[i]=L.data[L.length-1-i];
      L.data[L.length-1-i]=temp;
   } 
}

int main(void)
{ 
  sqlist L;
  printf("请输入顺序表长度：");
  scanf("%d",&L.length);
  for (int i=0;i<L.length;i++)
    {
      printf("请输入第%d个元素:",i+1);
      scanf("%d",&L.data[i]);
    }
  swap(L);
  printf("顺序表首尾逆置后:\n");
  for(int i=0;i<L.length;i++)
  printf("第%d个元素:%d\n",i+1,L.data[i]);
    	
}

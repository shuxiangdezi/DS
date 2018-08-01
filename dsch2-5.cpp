#include <stdio.h>
#include <stdlib.h>
#define Maxsize 100

typedef struct 
    {
        int data[Maxsize];
        int length;
    }sqlist;

void input(sqlist &L)
    {
        printf("请输入有序顺序表长度:");
        scanf("%d",&L.length);
        for(int i=0;i<L.length;i++)
            {
                printf("请输入第%d个元素:",i+1);
                scanf("%d",&L.data[i]);
            }
    }

void output(sqlist &L)
    {
        for(int i=0;i<L.length;i++)
            {
                printf("有序顺序表的第%d个元素:%d\n",i+1,L.data[i]);
            }
    }

bool del_st(sqlist &L,int s,int t)
    {
        if(L.length==0||!(s<t))
            return false;
        int k=0;
        for (int i=0;i<L.length;i++)
           {
               if(L.data[i]<s||L.data[i]>t)
                    {
                        L.data[k]=L.data[i];
                        k++;
                    }
            }
        L.length=k;
    }
int main(void)
    {
        sqlist L;
        int s,t;
        input(L);
        printf("请输入s的值:");
        scanf("%d",&s);
        printf("请输入t的值:");
        scanf("%d",&t);
        del_st(L,s,t);
        output(L);
        exit(0);
    }

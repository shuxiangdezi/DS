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
        printf("请输入有序顺序表的长度：");
        scanf("%d",&L.length);
        for(int i=0;i<L.length;i++)
            {
                printf("请输入第%d个元素的值:",i+1);
                scanf("%d",&L.data[i]);
            }
    }

void output(sqlist &L)
    {
        for(int i=0;i<L.length;i++)
            {
                printf("有序顺序表第%d个元素:%d\n",i+1,L.data[i]);
            }
    }
        
bool del_st(sqlist &L,int s,int t)
    {
        int i,j,k;
        for( i=0;i<L.length&&L.data[i]<=s;i++);
        printf("%d",i);
        for( j=i;j<L.length&&L.data[j]<t;j++);
        printf("%d",j);
        k=j-i;
        while(j<L.length)
            {
                L.data[i]=L.data[j];
                j++;
                i++;
            }
        L.length=L.length-k;           
                         
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

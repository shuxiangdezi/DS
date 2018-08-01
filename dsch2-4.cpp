#include <stdio.h>
#include <stdlib.h>
#define Maxsize 100

typedef struct
    {
        int data[Maxsize];
        int length;
    }sqlist;

void input(&L)
    {
        printf("请输入有序顺序表的长度：");
        scanf("%d",&L.length);
        for(int i=0;i<L.length;i++)
            {
                printf("请输入第%d个元素的值:"i+1);
                scanf("%d",&L.data[i]);
            }
    }

void output(&L)
    {
        for(int i;i<L.length;i++)
            {
                printf("有序顺序表第%d个元素:%d\n",i+1,L.data[i]);
            }
    }
        
bool del_st(sqlist &L,s,t)
    {
        while(L.length/2)
        {
            
        }            
    }

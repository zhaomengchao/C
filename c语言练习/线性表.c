#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
#define OK 1
#define OVERFLOW -1
#define ERROR 0
typedef int ElemType;
typedef struct
{
	ElemType *List;//���Ա��׵�ַ 
	int length;//��ǰ���� 
	int listsize;//�洢���� 
	
}Sqlist;
int InitList_Sq(Sqlist *L)
{
	L->List = (ElemType *)malloc(MAXSIZE*sizeof(ElemType));
	if(! L->List) exit(OVERFLOW);
	L->length = 0;
	L->listsize =MAXSIZE ;
	return OK; 
}
int ListLength(Sqlist *L)//�����Ա�ĳ��� 
{
	return L->length;
	
}
int traverList(Sqlist *L)//����˳��� 
{
	int i;

	
	for(i=0;i<L->length;i++)
	{
		printf("%d",L->List[i]);
	}
	printf("\n");
	
}
int insertList(Sqlist *L,ElemType x,int i)//���� 
{
	int j;
	if(L->length>=L->listsize)
		return 0;
	for(j=L->length;j>=i-1;j--)
	{
		L->List[j+1]=L->List[i];
		L->List[i-1]=x;
		L->length=L->length+1;
	}
	 
	
	
}
int deleteList(Sqlist *L,int i)//ɾ�� 
{
	int j;
	ElemType temp;
	if(i<1||i>=L->length+1)
	{
		return 0;
	}
	else
	{
		for(j=i;j<=L->length;j++)
		{
			L->List[j-1]=L->List[j]; 
		}
		L->length--;
	}
	return temp;
 } 
int searchList(Sqlist *L,ElemType x)
{
	int i;
	for(i=0;i<L->length;i++)
	{
		if(L->List[i]==x)
		{
			printf("�ҵ���%d��%d��λ��\n",x,i+i);
		}
		
	}
	printf("û�ҵ�"); 
}
int main()
{
	Sqlist list1;
	InitList_Sq(&list1);
	int length;
	scanf("%d",&length);
	int i;
	int pos;
	ElemType temp;
	for(i=0;i<length;i++)
	{
		scanf("%d",&temp);
		scanf("%d",&pos);
	    insertList(&list1,temp,pos);
	}
	printf("�������Ա�"); 
	traverList(&list1);
	
	scanf("%d%d",&temp,&pos);
	insertList(&list1,temp,pos);
	printf("����һ��Ԫ�غ��˳���");
	traverList(&list1);
	scanf("%d",&pos);
	deleteList(&list1,pos); 
	printf("ɾ��һ��Ԫ�غ��˳���");
	traverList(&list1);
	scanf("%d",&temp);
	searchList(&list1,temp);
	return 0;
}

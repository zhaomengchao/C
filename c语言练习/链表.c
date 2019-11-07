#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int ElemType;
typedef struct node
{
	int data;
	struct node *next;
}*LinkList;

LinkList Init_node ()//��ʼ�� 
{
	struct node *H;
	H = (struct node*)malloc(sizeof (node));
	H->next = NULL;	
	return H; 
}

LinkList r_nade(LinkList H,ElemType x)//β�巨 
{
	LinkList p,q;
    for(q=H; q->next; q=q->next);
    p=(struct node*)malloc(sizeof(node));
    p->next=NULL;
    p->data=x;
    q->next=p;
    return p;
}

int Len_node(LinkList H)//���� 
{
	int a=0;
	LinkList p;
	p=H;
	while(p->next !=NULL)
	{
		p=p->next ;
		a++;
	}
	printf("%d",a);
}

int i_node(LinkList H,int i)//�����i��Ԫ�� 
{
	int a=0;
	LinkList p;
	p = H; 
	while(a!=i)
	{
		p=p->next ;
		a++;
	}
	printf("%d",p->data );
	

}

int f_node(LinkList H,int i)//�������Ԫ�ص�λ��
{
	int a=0;
	LinkList p;
	p=H;
	while(p->data !=i)
	{
		p=p->next ;
		a++;
	}
	printf("%d",a);
}


LinkList c_node(LinkList H,int n,int y)//�ڵ�i��Ԫ��ǰ�������Ԫ��
{
	LinkList p,q;	
	int a;
	q = H;
	p = (struct node*)malloc(sizeof (node));
	p->data =y;
	p->next =NULL;
    while(a!=n)
    {
    	q=q->next ;
    	a++;
	}
	p->next = q->next ;
	q->next = p;

}

void dele(LinkList H,int i)
{
    LinkList p,q;
    int a=1;
    q=H;
    while(a!=i)
    {
    	a++;
    	q=q->next ;
    } 
    p=q->next ;
    q=p->next;
    free(p);
    
}
void print_all(LinkList H)//�����������ֵ
{
 	 LinkList p;
  	for(p=H->next; p; p=p->next)
  	printf("%d ",p->data);
  	printf("\n");
}
int main()
{

	LinkList H,p;
	  int n,menu,i,y;
	  ElemType x; 
	  H=Init_node();/*��ʼ����ͷ���ĵ�����,ͷָ��ΪH,*/
	  
	do/*�˵�*/
	{
		printf("                1.��ʼ���ɹ�                        \n");
		printf("                2.����������(���)                  \n");
		printf("                3.����������                    \n");
		printf("                4.���ĳ��Ԫ��                      \n");
		printf("                5.�������Ԫ�ص�λ��                \n");
		printf("                6.�����������                  \n");
		printf("                7.ɾ��������ĳ���                  \n");
		printf("                8.�˳�����                          \n");
		printf("����Ҫ���еĲ���:");
		scanf("%d",&menu);
		 
		switch(menu)
		{
			case 1:{
		
			H=Init_node();
			if (H==NULL)
			 {
			 printf("�����ڴ�ռ�ʧ�ܣ����������\n");
			 return 0;
			}
			else
			{
			printf("��ʼ���ɹ���"); 
			}
		    } break; 
		
		case 2:{
		   printf("����Ҫ����Ԫ�ظ�����\n");
		   scanf("%d",&n);
		   printf("����Ҫ����Ԫ�ص�ֵ,��ֵ�ÿո�ָ���\n",n);
		   for(i=0; i<n; i++)
		   {
			   scanf("%d",&x);
			   r_nade(H,x);
		   }
		   printf("����������ɹ���"); 
		   }break;
		   
		case 3:{
		   Len_node(H);
		
		}break;
		
		case 4:{
		    printf("����Ҫ���ҵ�Ԫ�����:\n");
		    scanf("%d",&i);
		    i_node(H,i);
		}break;
		
		case 5:{
		    printf("������Ҫ���ҵ�Ԫ��\n");
		    scanf("%d",&i);
		    f_node(H,i);
		    
		}break;
		
		case 6:{
		    printf("��������λ��:\n");
		    scanf("%d",&n);
		    printf("��������Ԫ��ֵ:\n");
		    scanf("%d",&y);
			if(c_node(H,n,y))
		    {
		    	printf("����Ԫ�غ��ֵΪ:\n");
		    	print_all(H);
		    }
		}break;
		
		case 7:{
		    printf("����Ҫɾ����Ԫ��ֵ\n");
		    scanf("%d",&i);
		    dele(H,i);
		   
		    
		}break;
		   
		case 8:{ 
		    return 0;	
		}break;
		
		default:
		printf("����Ĳ˵�������!\n");
		system("pause");
		break;
		}
	}while(1);
	return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int ElemType;
typedef struct node
{
	int data;
	struct node *next;
}*LinkList;

LinkList Init_node ()//初始化 
{
	struct node *H;
	H = (struct node*)malloc(sizeof (node));
	H->next = NULL;	
	return H; 
}

LinkList r_nade(LinkList H,ElemType x)//尾插法 
{
	LinkList p,q;
    for(q=H; q->next; q=q->next);
    p=(struct node*)malloc(sizeof(node));
    p->next=NULL;
    p->data=x;
    q->next=p;
    return p;
}

int Len_node(LinkList H)//长度 
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

int i_node(LinkList H,int i)//输出第i个元素 
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

int f_node(LinkList H,int i)//输出给定元素的位置
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


LinkList c_node(LinkList H,int n,int y)//在第i个元素前插入给定元素
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
void print_all(LinkList H)//输出所有链表值
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
	  H=Init_node();/*初始化带头结点的单链表,头指针为H,*/
	  
	do/*菜单*/
	{
		printf("                1.初始化成功                        \n");
		printf("                2.建立单链表(后插)                  \n");
		printf("                3.输出单链表表长                    \n");
		printf("                4.输出某个元素                      \n");
		printf("                5.输出给定元素的位置                \n");
		printf("                6.向单链表插入结点                  \n");
		printf("                7.删除单链表某结点                  \n");
		printf("                8.退出程序                          \n");
		printf("输入要进行的步骤:");
		scanf("%d",&menu);
		 
		switch(menu)
		{
			case 1:{
		
			H=Init_node();
			if (H==NULL)
			 {
			 printf("申请内存空间失败，程序结束！\n");
			 return 0;
			}
			else
			{
			printf("初始化成功！"); 
			}
		    } break; 
		
		case 2:{
		   printf("输入要插入元素个数：\n");
		   scanf("%d",&n);
		   printf("输入要插入元素的值,各值用空格分隔：\n",n);
		   for(i=0; i<n; i++)
		   {
			   scanf("%d",&x);
			   r_nade(H,x);
		   }
		   printf("建立单链表成功！"); 
		   }break;
		   
		case 3:{
		   Len_node(H);
		
		}break;
		
		case 4:{
		    printf("输入要查找的元素序号:\n");
		    scanf("%d",&i);
		    i_node(H,i);
		}break;
		
		case 5:{
		    printf("输入你要查找的元素\n");
		    scanf("%d",&i);
		    f_node(H,i);
		    
		}break;
		
		case 6:{
		    printf("输入插入的位置:\n");
		    scanf("%d",&n);
		    printf("输入插入的元素值:\n");
		    scanf("%d",&y);
			if(c_node(H,n,y))
		    {
		    	printf("插入元素后各值为:\n");
		    	print_all(H);
		    }
		}break;
		
		case 7:{
		    printf("输入要删除的元素值\n");
		    scanf("%d",&i);
		    dele(H,i);
		   
		    
		}break;
		   
		case 8:{ 
		    return 0;	
		}break;
		
		default:
		printf("输入的菜单号有误!\n");
		system("pause");
		break;
		}
	}while(1);
	return 0;
}


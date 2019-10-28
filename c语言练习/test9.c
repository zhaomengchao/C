#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct subway//定义一个结构体 
{
	char num[10];
	char line[20];//线路 
	char sstation[20];//起始站 
	char ostation[20];//终点站 
	char charge[20];//票价 
	struct subway* next;
	
}subway;//用typedef给结构体起别名subway; 
subway*createsubwaylist()//创建链表 
{
	subway*head;
	head=(subway*)malloc(sizeof(subway));//给他分配空间 
	head->next=NULL;//指向下一个节点的指针 
	return head;
}
void insert(subway *head)//插入函数 
{
	subway *b,*p;
	char flag='y';
	p=head;
	while(p->next!=NULL)//移动指针 
	{
		p=p->next;
	}
	while(flag=='y')//根据需要是否需要继续添加 
	{
		b=(subway*)malloc(sizeof(subway));
		printf("请输入编号："); 
		scanf("%s",b->num);
		printf("请输入地铁线路：");
		scanf("%s",b->line);
		printf("请输入起始站：");
		scanf("%s",b->sstation);
		printf("请输入终点站：");
		scanf("%s",b->ostation);
		printf("请输入票价：");
		scanf("%s",b->charge);
		p->next=b;
		p=b;
		b->next=NULL;
		printf("添加成功！\n继续添加？(y/n)\n");
		fflush(stdin);
		scanf("%c",&flag);
		if(flag=='n')
			break;
		else if(flag=='y')
			continue;
		
		 
	}
	return ;
}

void Delete(subway *head)//删除函数 
{
	subway *q,*p;
	char s[30];
	int flag;
	
	flag=0;
	q=head;
	p=head->next;
	printf("请输入要删除的地铁线路：");//通过地铁线路来查找信息 
	fflush(stdin);
	scanf("%s",s);
	
	while(p!=NULL)
	{
		
		if(strcmp(p->line,s)==0)//链表里找相应存储文件 
		{
			flag=1;
			break;
		}
		q=p;
		p=p->next;
	
	}	
	if(flag==1)
	{
		q->next=p->next;
		free(p);
		printf("删除成功！\n"); 
	}
	else
		printf("查找失败！");
	return;
}
void Print(subway*head)//存储信息的浏览 
{
	subway *p;
	if(head==NULL || head->next==NULL)//判空 
	{
		printf("没有记录存在！\n");
		return;
	}
	p=head;
	printf("请输入地铁编号，线路，起始站，终点站，票价\n");
	while(p->next!=NULL)
	{
		p=p->next;
		printf("%s %s %s %s %s\n",p->num,p->line,p->sstation,p->ostation,p->charge);
	}
	return ;
}
void Search(subway*head)//查找 
{
	subway *p;
	char s[30];
	int flag=0;
	p=head;
	if(head==NULL || head->next==NULL)
		printf("清单为空！\n");
	else
	{
		printf("请输入地铁线路：");//通过地铁线路查找 
		scanf("%s",s);
		while(p->next!=NULL)
		{
			p=p->next;
			if(strcmp(p->line,s)==0)
			{
				flag=1;
				printf("编号：%s\n线路： %s\n起始站： %s\n终点站： %s\n票价： %s\n",p->num,p->line,p->sstation,p->ostation,p->charge);
				return;
			}
			if(p->next == NULL) 
				printf("\n查询完毕！"); 
			 	
		}
		if(flag==0)
			printf("没有找到[%s]!\n",s); 
		
	}
	return;
}
void Update(subway*head)//信息的更新 
{
	subway*p;
	int flag=0;
	char s[30];
	p=head;
	printf("请输入地铁线路：");
	scanf("%s",s);
	while(p->next!=NULL)
	{
		p=p->next;
		if(strcmp(p->line,s)==0)
		{
			flag=1;
			printf("请输入编号："); 
			scanf("%s",p->num);
			printf("请输入地铁线路：");
			scanf("%s",p->line);
			printf("请输入起始站：");
			scanf("%s",p->sstation);
			printf("请输入终点站：");
			scanf("%s",p->ostation);
			printf("请输入票价：");
			scanf("%s",p->charge);
		}
	}
	if(flag==0)
		printf("没有找到[%s]!\n",s);
	return;
}
int menu()//主菜单 
{
	int n;
	printf("   地铁管理系统   \n");
	printf("------------------\n");
	printf("1.地铁信息的录入\n");
	printf("2.地铁信息的浏览\n");
	printf("3.地铁信息的查询\n");
	printf("4.地铁信息的更新\n");
	printf("5.地铁信息的删除\n");
	printf("6.退出\n");
	printf("------------------\n");
	printf("请输入选择序号；\n");
	scanf("%d",&n);
	while(n<0 || n>6)
	{
		printf("输入错误！\n");
		scanf("%d",&n);
	}
	return n;
}
int main()
{
	subway*head;
	int m;
	head=NULL;
	for(;;)
	{
		m=menu();
		switch(m)
		{
			case 1:
				if(head==NULL)
					head=createsubwaylist();
				insert(head);
				break;
			case 2:
				Print(head);
				break;
			case 3:
				Search(head);
				break;
			case 4:
				Update(head);
				break;
			case 5:
				Delete(head);
				break;
			case 6:
				exit(0);
				break;
			default:
				break;
		}
	}
	return 0;
	
}

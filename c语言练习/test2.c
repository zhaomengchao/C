#include<stdio.h>
#include<stdlib.h>
#include<assert.h>



//��һ�ŵ����� ��дһ������������K���ڵ�
//struct ListNode* FindTail(ListNode* head, unsigned int k)
//{
//	ListNode* quick = head;
//	ListNode* slow = head;
//
//	while (k >= 0)
//	{
//		if (quick->next != NULL)
//		{
//			for (int i = k; i > 0; i--)
//			{
//				quick = quick->next;
//			}
//		}
//		else
//		{
//			printf("errow");
//			return NULL;
//		}
//
//	
//	}
//	while (quick->next != NULL)
//	{
//		quick = quick->next;
//		slow = slow->next;
//	}
//	return slow;
//}


//��д���������õ�����
//struct ListNode* reverseList(ListNode* head)
//{
//	struct ListNode* re_head = NULL;
//	struct ListNode* prev = NULL;
//	struct ListNode* _head = head;
//	
//	while (_head != NULL)
//	{
//		struct ListNode* pNext = _head->next;
//		while (pNext == NULL)
//		{
//			re_head = _head;
//		}
//
//		_head->next = prev;
//		prve = _head;
//		_head = pNext;
//
//	}
//	return re_head;
//	
//
//
//}

int main()
{
	system("pause");
	return 0;
}
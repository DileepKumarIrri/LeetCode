#include<iostream>
#include<stdlib.h>
using namespace std;
void insert(int x);
void display();
struct ListNode{
    int val;
    ListNode* next;
    ListNode():val(0),next(nullptr){}
    ListNode(int x):val(x),next(nullptr){}
    ListNode(int x,ListNode* next):val(x),next(next){}
};
ListNode* head=NULL;
int main()
{
     insert(6);
     insert(9);
     insert(10);
     display();
}
void insert(int x)
{
    ListNode* temp = new ListNode(x);
    ListNode* Curr;
    if(head == nullptr)
    {head  = temp;
    Curr = temp;}
    else{
        Curr->next =temp;
        Curr = temp;}
    
}
void display()
{   
    ListNode* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"\n";
        temp = temp->next;
    }
}
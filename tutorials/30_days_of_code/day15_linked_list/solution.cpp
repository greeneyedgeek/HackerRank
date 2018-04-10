/**
* Author: greeneyedgeek
* Date: 2018-04-09
*/

#include <iostream>
#include <cstddef>

using namespace std;	

class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:   
    
        /**
        * This function is inspired by the example found at
        * https://grisha.org/blog/2013/04/02/linus-on-understanding-pointers/
        */
        Node* insert(Node *head,int data) 
        {
            Node **pp = &head;
            Node *entry = head;
            
            while (entry) {
                pp = &entry->next;
                entry = entry->next;

            }
            *pp = new Node(data);

            return head;
                            
         }
         
          void display(Node *head)
      {
          Node *start=head;
          while(start)
          {
              cout<<start->data<<" ";
              start=start->next;
          }
      }
};

int main()
{
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }	
	mylist.display(head);
		
}

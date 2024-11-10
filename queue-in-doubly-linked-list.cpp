#include<bits/stdc++.h>
using namespace std;
  class Node{
      public:
         int val;
          Node*prev;
          Node *next;
            Node(int val){
                this->val =  val;
                  this->prev = NULL;
                  this->next = NULL;
            }
    };
     class myQueue{
           public:
             Node *head = NULL;
              Node *tail  = NULL;
               
               void push(int val){
                 Node *newNode = new Node(val);
                   if(head == NULL){
                      head = newNode;
                       tail = newNode;
                       return;
                   };
                     tail->next = newNode;
                      newNode->prev = tail; 
                      tail = newNode;
                };
                 
                 void pop(){
                     Node *deleteNode =  head;
                      head =  head->next;
                      head->prev = NULL;
                      delete deleteNode;
                 };
                    int top(){
                          return head->val; 
                    };
                     
                     int size(){
                            int count = 0;
                             Node*tmp = head;
                               while (tmp!= NULL)
                               {
                                 count ++;
                                  tmp =  tmp->next;
                               };
                                return count; 
                     };

                      bool empty(){
                           if(size() == 0) return true;
                            else return false;
                      }; 

     };
      
 int main(){
        myQueue qu;
         int n;
          cin>>n;
           for(int i = 0 ; i<n;i++){
              int val;  cin>>val;
             qu.push(val);
           };
            while (qu.empty() == false)
            {
                  cout<<qu.top()<<endl;
                  qu.pop();
            };
            
     return 0;
 }
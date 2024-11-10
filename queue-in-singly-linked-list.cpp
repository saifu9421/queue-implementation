#include<bits/stdc++.h>
using namespace std;
     class Node{
       public:
          int val;
           Node *next;
             Node(int val){
                 this->val =  val;
                   this->next = NULL;
             }
     };

      class myQueue{
         public:
          Node*head = NULL;
           
           void push(int val){
              Node *newNode = new Node(val);
               if(head == NULL){
                 head = newNode;
                 return;
               };
               Node *tmp = head;
                while (tmp->next != NULL)
                {
                      tmp =  tmp->next;
                };
                 tmp->next = newNode;
           };
            
            void pop(){
                    if(head == NULL) return;
                     Node *deleteNode = head;
                      head =  head->next;
                       delete deleteNode;
            };
             
              int top(){
                   return head->val;
              };
               
               int size(){
                    int count  = 0; 
                     Node *tmp = head;
                       while (tmp != NULL)
                       {
                         count ++;
                          tmp = tmp->next;
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
       int n;  cin>>n;
        for(int i =  0; i< n; i++){
              int val;
               cin>>val; 
                qu.push(val);
        };
         while (!qu.empty())
         {
              cout<<qu.top()<<" ";
               qu.pop();
         }
         
     return 0;
 }
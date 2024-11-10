#include<bits/stdc++.h>
using namespace std;
 class myQueue{
        public:
         list<int> l;
          void push(int val){
              l.push_back(val);
          };
           void pop(){
                l.pop_front();
           };
            
            int top(){
                   return  l.front();
            };
           
             int size(){
                 return l.size();
             };
              
             bool empty(){
                    if(size() == 0) return true;
                     else return  false;
             };
              
 };
  
 int main(){
           myQueue qu;
            int n;
              cin>>n;
               for(int i = 0 ; i<n ; i++){
                   int val;
                    cin>>val; 
                    qu.push(val);
               };
                while (qu.empty() == false)
                 {    
                      cout<<qu.top()<<" ";
                       qu.pop();
                     /* code */
                };
                 
                
     return 0;
 }
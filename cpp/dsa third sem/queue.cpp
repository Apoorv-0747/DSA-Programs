//	Given a queue Of size N , implement ENQUEUE and DEQUEUE operations using an array or linked list while following the FIFO (First In First Out) principle. Handle overflow and underflow conditions, and display the final state of the queue.
#include<bits/stdc++.h>
using namespace std;
 class Queue{
    int front,rear,size;
    int s;
    int *arr;
    public:
    Queue(int s){
        front=rear=-1;
        size=s;
        arr=new int[s];
        }

        void enqueue(int x){
            if(rear==s-1)
        {
            cout<<"Queue overflow"<<endl;
            return;
        }    
        else if(front==-1 && rear==-1){
            front=rear=0;
            arr[rear]=x;
        }
        else{
            rear++;
            arr[rear]=x;
        }

            
        }  
        void dequeue(){
            if(front==-1 || front>rear){
                cout<<"Queue underflow"<<endl;
                return;
            }
            else if(front==rear){
                cout<<"Deleted element is: "<<arr[front]<<endl;
                front=rear=-1;
            }
            else{
                cout<<"Deleted element is: "<<arr[front]<<endl;
                front++;
            }

        }
        void display(){
            if(front==-1 || front>rear){
                cout<<"Queue is empty"<<endl;
                return;
            }
            else{
                cout<<"Queue elements are: ";
                for(int i=front;i<=rear;i++){
                    cout<<arr[i]<<" ";
                }
                cout<<endl;
            }
        }

      };


int main(){
    Queue q(5);
    q.enqueue(110);
    q.enqueue(20);
    q.dequeue();
    q.display();
    return 0;
}
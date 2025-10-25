
#include <iostream>
using namespace std ;

struct node
{
    int data ;
    node* next ;
} ;

node* top = NULL ;

class Stack{
    
    public:

    void push(int value){

        node* newnode = new node ; 
        newnode->data = value ;
        if(top == NULL){
            top = newnode ;
            newnode->next = NULL ;
        }
        else{
            newnode->next = top ;
            top = newnode ;
        }
    }

    void display()
    {
        if(top == NULL)
        {
            cout << "Stac Is Empty\n" ;
        }
        else{

            node* temp = top ;

            while(temp != NULL)
            {
                cout << "Value is : "<< temp->data << "\n" ;
                temp =temp->next ;
            }
        }
    }


    int peak()
    {
        if(top == NULL){
            cout << "Stac IS Empty\n" ;
            return -1 ;
        }
        else{
            return top->data ;
        }
    }

    int pop()
    {
        if(top == NULL)
        {
            cout << "Stac Is Empty\n" ;
            return -1 ;
        }
        else{
            int temp  = top->data ;
            top = top->next ;
            return temp ;
        }
    }



} ;


int main()
{
    return 0 ;
}
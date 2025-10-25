#include <iostream>
using namespace std ;

struct node {

    int data ;
    node* next ;
} ;

node* head = NULL ;

class linkedlist
{
    public:

    void insert_node(int value){

        node* newnode = new node ;
        newnode->data = value ;
        
        if(head == NULL){
            head = newnode ;
            newnode->next = NULL ; 
        }
        else{
            node* ptr = head ;

            while(ptr->next != NULL ){
                ptr = ptr->next ;
            }
            ptr->next = newnode  ;
            newnode->next = NULL ;
        }
    }


    void add_node_at_begin(int value){
        node* newnode = new node ;
        newnode->data = value ;

        newnode->next = head ;
        head = newnode ;
    }

    void display()
    {
        if(head == NULL){
            cout << "Linked list is empty\n" ;
        }
        else{
            node* ptr = head ;

            while(ptr != NULL)
            {
                cout << "Value Is :" << ptr->data << "\n" ;
                ptr= ptr->next ;
            }
        }
    }
    
    void add_pos(int postion , int value){

        node* newnode = new node  ;
        node* temp = head , * prev = NULL;
        newnode->data = value ;
        int count = 0 ;

        if(postion == 0){

            head = newnode ;
            newnode->next = temp ;
            return ;
        }
        

        while (count != postion)
        {
            count++ ;
            prev = temp ;
            temp = temp->next ;
        }
        prev->next = newnode ;
        newnode->next = temp ;
        
    }
    
    void delete_begin_node(){

        if(head == NULL ){
            cout << "Linked LLIst Is Empty\n" ;
        }
        else{

            node* temp  = head ;
            head = temp->next ;
            temp->next = NULL ;
            delete temp ;
        }
    }

    void delete_node_atPos(int pos){

        int count = 1 ;
        node* temp = head , * prev = NULL ;
        
        if(head == NULL){
            cout << "Linked LIst Is EMpty\n" ;
            return ;
        }
        else{

            while( count != pos){

                count++ ;
                prev = temp ;
                temp = temp->next ;
            }
            prev->next = temp->next ;
            temp->next = NULL ;
            delete temp ;
        }
    }

    void delete_node_at_end(){

        if(head == NULL){
            cout << "LInked LIst Is Empty\n" ;
        }
        else{

            node*temp = head  , *prev = NULL ;
            while(temp->next != NULL){
                prev= temp ;
                temp = temp ->next ;
            }
            prev->next = temp->next ;
            delete temp ;
        }
    }


} ;

int main(){

    return 0 ;
}
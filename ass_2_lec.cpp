#include <iostream>
using namespace std ;

struct node
{
    int data ;
    node* next ;
} ;


class LinkedList{
    public:

node* head  ;

LinkedList(){
    head = NULL ;
}

bool isEmpty(){
    return (head == NULL) ;
}

void insert_node(int value){

    node* newnode = new node() ;
    newnode->data = value ;
    newnode->next = NULL ;
    
    if(head == NULL ){
        head = newnode ;
    }
    else{
        node* temp = head ;
        while(temp->next != NULL){

            temp = temp->next ;
        }
        temp->next = newnode ;
    }
}

void insert_node_atPos(int value , int pos){

    int Num = 1 ;
    node* newnode = new node ;
    newnode->data = value ;
    
    if(pos == 1){
        node* temp = head ;
        head = newnode ;
        newnode->next = temp ;
    }
    else{
        node* ptr = head ;
        node* prev = NULL ;
        while(Num != pos){
            if(ptr == NULL){
                return ;
            }
            Num++ ;
            prev = ptr ;
            ptr = ptr->next ;
        }
        prev->next = newnode ;
        newnode->next = ptr ;
        }
}

void delete_Firest(){

        if(isEmpty()){return ;}
        else{
            node* ptr = head ;
            head = head->next ;
            delete ptr ;
        }
    }


bool serch(int val){

    if(isEmpty()){
        cout << "Linked List Is Empty\n" ;
    }
    else{
        node* temp = head ;
        while(temp != NULL){
            if(temp->data == val){
                return true ;
            }
            
            temp = temp->next ;
        }
    }

    return false ;
}

///////////////////////////////////////////////////////// Bouns ////////////////////////////////////////////////


void delete_last(){
    if(isEmpty()){
        cout << "Empty\n" ;
    }
    else{
        node* ptr = head ;
        node* prev = NULL ;
        while(ptr->next != NULL){
            prev = ptr ;
            ptr = ptr->next ;
        }
        prev->next = ptr->next ;
        delete ptr ;
    }
}

void display(){
    if(isEmpty()){
        cout << "IS Empty\n" ;
    }
    else{
        node* temp = head ;
        while(temp != NULL){
            cout << temp->data << " ";
            temp =temp->next ;
        }
        cout << "\n---------------------------------------\n" ;
    }
}

void updata_value(int lastvalue , int newvalue){

    if(isEmpty()){
        cout << "LInked List Is Empty\n" ;
    }
    else{

        node* temp = head ;
        bool founded = false ;

        while(temp != NULL){

            if(temp->data == lastvalue){
                temp->data = newvalue ;
                founded = true ;
            }
            temp = temp->next ;
        }
        if(founded){
            cout << "Value Updated\n" ;
        }
        else{
            cout << "Not Founded\n" ;
        }
    }
}

} ;

int main(){

    LinkedList L1;

    L1.insert_node(10) ;
    L1.insert_node(20) ;
    L1.insert_node(30) ;
    L1.insert_node(40) ;
    L1.display() ;   
    L1.insert_node_atPos(66 , 3) ;
    L1.display() ;   
    L1.delete_Firest() ;
    L1.display() ;  
    cout << L1.serch(30) << "kk\n"  ;
    L1.display() ;   
    L1.delete_last() ;
    L1.display() ;   
    L1.updata_value(30 , 99) ;
    L1.display() ;   
    
    return 0 ;
}
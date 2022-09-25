# include <iostream>
 #include <string>
 #define SPACE 10
 using namespace std;

 class node{
     public:
     int age;
     string name;

     node*prev;
     node*next;

 };
 class doublylinkedlist{

public:
    node*head;
    doublylinkedlist(){
    head=NULL;
    }
    doublylinkedlist(node*n){
head=n;
    }
   node*checkifnodeexist(int age){
   node*temp=NULL;
   node*ptr=head;
   while(ptr!=NULL){
        if(ptr->age==age){
    temp=ptr;
   }
   ptr=ptr->next;

   }

return temp;
   }
   void appendnode(node*n){
         if(checkifnodeexist(n->age)!=NULL){
            cout<<"data already exist"<<endl;
         }
         else{
            if(head==NULL){
                head=n;

            }
            else{
                node*ptr=head;
                n->prev=ptr;
                cout<<"Data added"<<endl;
            }
         }

}

void insertnodeafter(int k,node*n){
node*ptr=checkifnodeexist(k);
if(ptr==NULL){
    cout<<"No data exists with this age value"<<k<<endl;
}
else{
    if(checkifnodeexist((n->age)!=NULL))
       {
           cout<<"Node already exists with key value"<<endl;

       }
       else{
        node*nextnode=ptr->next;
        if(nextnode==NULL){
            ptr->next=n;
            n->prev=ptr;

        }
        else{
            n->next=nextnode;
            nextnode->prev=ptr;
            ptr->next=n;

        }
       }
}


}
void print(){
if(head==NULL){

    cout<<"List is empty"<<endl;
}
else{


    node*temp=head;
    while(temp!=NULL){
        cout<<"age"<<" "<<temp->age<<" "<<"Name:"<<temp->name<<endl;
        temp=temp->next;
    }
	}

}
 };

 int main(){

    doublylinkedlist d;
   node*n1=new node();
   node*n2=new node();
   node*n3=new node();

   
   n1->name="Somen Mondal";
   n1->age=20;
   
   n2->name="Sailendra Nath Mondal ";
   n2->age=40;
   
   n3->name="Tapati Mondal";
   n3->age=38;
   d.appendnode(n1);
d.insertnodeafter(20,n2);
   d.insertnodeafter(40,n3);
   d.print();

	return 0;
 }

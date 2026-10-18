
class Node{
public:
   int val;
   Node* next;
   Node(int val){
    this->val=val;
    this->next=NULL;
   }
};

class MyLinkedList {
public:
 Node*head;
 Node*tail;
 int length;

    MyLinkedList() {
        head=tail=NULL;
        length=0;
    }
    
    int get(int idx) {
        if(idx<0 || idx>=length) return -1;

        Node* temp =head;
        for(int i=0;i<idx;i++){
            temp=temp->next;
        }
        return temp->val;
    }
    
    void addAtHead(int val) {
        Node* n= new Node(val);
        if(length == 0){
            head=tail=n;
        }
        else{
            n->next=head;
            head =n;
        }
        length++;// as insertion occured then the length will increase
    }
    
    void addAtTail(int val) {
         Node* n= new Node(val);
        if(length == 0){
            head=tail=n;
        }
        else{
          tail->next = n;
            tail =n;
        }
        length++;// as insertion occured then the length will increase
    }

    
    void addAtIndex(int idx, int val) {
        if(idx<0 || idx>length) return;

        if(idx==0){
            addAtHead(val);
            return;
        }

        if(idx==length){
            addAtTail(val);
            return;
        }

        Node* n= new Node(val);
        Node* temp=head;
        for(int i=0;i<idx-1;i++){
            temp=temp->next;
        }
        n->next=temp->next;// jo temp ka next phle tha usse new wlle node(n) ka next bna do
        temp->next=n;//ab temp ke next ko change krdo jo bich me new n aagya
        length++;
    }
    
    void deleteAtIndex(int idx) {
        if(idx <0 || idx>= length) return ;

        Node* temp= head;

        if(idx == 0){
            head = head->next;
            length--;

            if(length ==0) tail=NULL;

            delete temp;
            return;
        }

        for(int i=0;i<idx-1;i++){
            temp=temp->next;
        }

        Node* del=temp->next;
        temp->next=del->next;

        if(idx == length-1) tail=temp;

        delete del;
        length--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */

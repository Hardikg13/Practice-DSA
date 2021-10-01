
class List;
class Node{
    int data;
public:
    Node*next;
    Node(int d):data(d),next(NULL){}
    int getData(){
        return data;
    }
    friend class List;
};

class List{
    Node * head;
    Node * tail;
public:

    List():head(NULL),tail(NULL){}

    Node * begin(){
        return head;
    } 
// push front an element in a linked list
    void push_front(int data){
        if (head==NULL){
            Node * n = new Node(data);
            head = tail = n;
        }
        else{
            Node * n = new Node(data);
            n->next = head;
            head = n;
        }
        
    }
// push back an element in a linked list
    void push_back(int data){
        if (head==NULL){
            Node * n = new Node(data);
            head = tail = n;
        }
        else{
            Node * n = new Node(data);
            tail->next = n;
            tail = n;
        }
        
    }
//insert an element in a linked list
    void insert(int data,int pos){
        if(pos==0){
            push_front(data);
            return;
        }

        Node* temp = head;
        for(int jump=1;jump<=pos-1;jump++){
            temp = temp->next;
        }

        Node * n = new Node(data);
        n->next = temp->next;
        temp->next = n;
    }
    // pop out the first Element
    void pop_front(){
        Node * temp = head;
        head = head->next;
        temp->next = NULL ;
        delete temp;
    }
};
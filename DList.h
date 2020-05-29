typedef struct list_node{
    string name;
    string id;
    string email;
    struct list_node * link = nullptr;
  }list_node;

class DList{
  private:
    list_node *head;
    list_node *tail;
  public:
    DList(){
      head = nullptr;
      tail = nullptr;
    }
    void Add(string _name, string _id, string _email){  //list를 추가하는 함수이다.
      list_node *newnode = new list_node;
      newnode->name = _name;
      newnode->id = _id;
      newnode->email = _email;
      
      if (head == nullptr){ //head가 없으면 추가한 노드에 head와 tail을 연결해준다.
        head = newnode; 
        tail = newnode; 
      } 
      else{ //head가 있다면 tail을 추가한 노드에 연결시켜주고 tail을 다음 link를 가리키게 한다.
        tail->link = newnode;
        tail = tail->link;
      }
    }
    void Reverse_Print(){   //reverse된 list를 출력하는 함수이다.
      tail = nullptr;
      list_node* curnode;
      
      while(head!= nullptr){  //tail을 head 역할을 하게한다.
        curnode = head -> link;
        head -> link = tail;
        tail = head;
        head = curnode;
      }
      
      list_node *node = tail;   //tail부터 거꾸로 출력한다.
      while(node != nullptr){
      cout << node->id <<" "<< node-> name <<" "<<node-> email << endl;
      node = node->link; 
      }
    }
    
};

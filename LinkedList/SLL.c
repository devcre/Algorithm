// Singly Linked List
// 링크드 리스트의 주요 연산
// Major functions of Linked List

// - 노드 생성 / 소멸 (Node Creation / Extinction)
// - 노드 추가 (Node Addition)
// - 노드 탐색 (Node Search)
// - 노드 삭제 (Node Deletion)
// - 노드 삽입 (Node Insertion)

#include <stdio.h>

// Definition of Linked List
    typedef struct MyNode{
        int Data; // 자료의 데이터
        struct MyNode* NextNode; // 다음 노드를 가리키는 포인터
    } Node;

// 노드 생성
Node* SLL_CreateNode(int NewData){
    Node* NewNode = (Node*)malloc(sizeof(Node));

    NewNode->Data = NewData;
    NewNode->NextNode = NULL;

    return NewNode;
}

// 노드 소멸
void SLL_DeatroyNode(Node* Node){
    free(Node);
}

// 노드 추가
void SLL_AppendNode(Node** Head, Node* NewNode){
    if( (*Head) == NULL ){
        *Head = NewNode;
    }
    else{
        Node* Tail = (*Head);
        while(Tail -> NextNode != NULL){
            Tail = Tail->NextNode;
        }

        Tail->NextNode = NewNode;
    }
}

int main(){

    Node* List = NULL;
    Node* NewNode = NULL;

    NewNode = SLL_CreateNode(117);
    SLL_AppendNode(&List, NewNode);

}
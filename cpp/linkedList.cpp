#include <iostream>

// 연결 리스트의 노드를 나타내는 구조체
struct Node
{
    int data;
    Node *next;

    Node(int value) : data(value), next(nullptr) {}
};

// 연결 리스트 클래스
class LinkedList
{
public:
    LinkedList() : head(nullptr) {}

    // 새로운 노드를 리스트의 끝에 추가하는 함수
    void append(int value)
    {
        Node *newNode = new Node(value);
        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            Node *current = head;
            while (current->next != nullptr)
            {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    // 연결 리스트의 모든 노드를 출력하는 함수
    void display()
    {
        Node *current = head;
        while (current != nullptr)
        {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

private:
    Node *head;
};

int main()
{
    LinkedList myList;

    // 연결 리스트에 노드 추가
    myList.append(10);
    myList.append(20);
    myList.append(30);
    myList.append(40);

    // 연결 리스트 출력
    std::cout << "Linked List: ";
    myList.display();

    return 0;
}

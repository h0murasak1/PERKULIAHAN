#include <iostream>
using namespace std;

class LinkedList
{
public:
    // Node definition
    struct Node
    {
        int data;
        Node *next;
    };

    Node *head; // head of list

    // Constructor
    LinkedList()
    {
        head = nullptr;
    }

    // Function to insert node at the front
    void insertFront(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }

    // Function to insert node in the middle
    void insertMiddle(int value, int afterValue)
    {
        Node *temp = head;
        while (temp != nullptr && temp->data != afterValue)
        {
            temp = temp->next;
        }
        if (temp != nullptr)
        {
            Node *newNode = new Node();
            newNode->data = value;
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }

    // Function to insert node at the end
    void insertEnd(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;
        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // Function to delete node from the front
    void deleteFront()
    {
        if (head != nullptr)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
        }
    }

    // Function to delete node from the middle
    void deleteMiddle(int value)
    {
        if (head != nullptr)
        {
            Node *temp = head;
            Node *prev = nullptr;
            while (temp != nullptr && temp->data != value)
            {
                prev = temp;
                temp = temp->next;
            }
            if (temp != nullptr)
            {
                if (prev != nullptr)
                {
                    prev->next = temp->next;
                }
                else
                {
                    head = temp->next;
                }
                delete temp;
            }
        }
    }

    // Function to delete node from the end
    void deleteEnd()
    {
        if (head != nullptr)
        {
            Node *temp = head;
            Node *prev = nullptr;
            while (temp->next != nullptr)
            {
                prev = temp;
                temp = temp->next;
            }
            if (prev != nullptr)
            {
                prev->next = nullptr;
            }
            else
            {
                head = nullptr;
            }
            delete temp;
        }
    }

    // Function to display the list
    void display()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

void handleInput(LinkedList &list, void (LinkedList::*func)(int, int), bool needAfterValue = false)
{
    int value, afterValue;
    cout << "Masukkan nilai: ";
    cin >> value;
    if (needAfterValue)
    {
        cout << "Setelah nilai: ";
        cin >> afterValue;
    }
    (list.*func)(value, afterValue);
}

int main()
{
    LinkedList list;
    int choice;

    do
    {
        cout << "1. Insert depan\n"
             << "2. Insert tengah\n"
             << "3. Insert belakang\n"
             << "4. Delete depan\n"
             << "5. Delete tengah\n"
             << "6. Delete belakang\n"
             << "7. Tampilkan data\n"
             << "8. Keluar\n"
             << "Pilih: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            handleInput(list, &LinkedList::insertFront, false);
            break;
        case 2:
            handleInput(list, &LinkedList::insertMiddle, true);
            break;
        case 3:
            handleInput(list, &LinkedList::insertEnd);
            break;
        case 4:
            list.deleteFront();
            break;
        case 5:
            handleInput(list, &LinkedList::deleteMiddle, true);
            break;
        case 6:
            list.deleteEnd();
            break;
        case 7:
            list.display();
            break;
        case 8:
            cout << "Keluar dari program.\n";
            break;
        default:
            cout << "Opsi tidak valid. Coba lagi.\n";
            break;
        }
    } while (choice != 8);

    return 0;
}
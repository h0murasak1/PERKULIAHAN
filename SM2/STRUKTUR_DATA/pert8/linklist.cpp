#include <iostream>
using namespace std;

// mendefinisikan elemen dasar dari Linked List
struct Node
{
    int data;
    Node *next;
};

// mengelola operasi pada Linked List
class LinkedList
{
    // pointer ke node pertama (head) dari Linked List
private:
    Node *head;

public:
    // menginisialisasi `head` dengan `nullptr`.
    LinkedList()
    {
        head = nullptr;
    }

    // Menambahkan node baru di depan Linked List.
    void insertAtFront(int value)
    {
        Node *newNode = new Node;
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }
    // Menambahkan node baru di tengah Linked List.
    void insertAtMiddle(int value, int position)
    {
        Node *newNode = new Node;
        newNode->data = value;

        if (head == nullptr)
        {
            head = newNode;
            newNode->next = nullptr;
        }
        else
        {
            Node *temp = head;
            int count = 1;
            while (temp->next != nullptr && count < position)
            {
                temp = temp->next;
                count++;
            }

            if (count == position)
            {
                newNode->next = temp->next;
                temp->next = newNode;
            }
            else
            {
                cout << "Invalid position." << endl;
            }
        }
    }

    // Menambahkan node baru di belakang Linked List.
    void insertAtEnd(int value)
    {
        Node *newNode = new Node;
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

    // Menghapus node pertama dari Linked List.
    void deleteFromFront()
    {
        if (head == nullptr)
        {
            cout << "Linked list is empty." << endl;
        }
        else
        {
            Node *temp = head;
            head = head->next;
            delete temp;
        }
    }

    // Menghapus node terakhir dari Linked List.
    void deleteFromEnd()
    {
        if (head == nullptr)
        {
            cout << "Linked list is empty." << endl;
        }
        else if (head->next == nullptr)
        {
            delete head;
            head = nullptr;
        }
        else
        {
            Node *temp = head;
            while (temp->next->next != nullptr)
            {
                temp = temp->next;
            }
            delete temp->next;
            temp->next = nullptr;
        }
    }

    // menghapus node dari posisi tertentu
    void deleteFromMiddle(int position)
    {
        if (head == nullptr)
        {
            cout << "Linked list is empty." << endl;
        }
        else
        {
            Node *temp = head;
            Node *prev = nullptr;
            int count = 1;

            while (temp != nullptr && count < position)
            {
                prev = temp;
                temp = temp->next;
                count++;
            }

            if (temp == nullptr)
            {
                cout << "Invalid position." << endl;
            }
            else
            {
                prev->next = temp->next;
                delete temp;
            }
        }
    }

    // menampilkan isi dari linked list
    void display()
    {
        if (head == nullptr)
        {
            cout << "Linked list is empty." << endl;
        }
        else
        {
            Node *temp = head;
            while (temp != nullptr)
            {
                cout << temp->data << " -> ";
                temp = temp->next;
            }
            cout << "NULL" << endl;
        }
    }
};

int main()
{
    LinkedList linkedList;
    int choice, value, position;

    do
    {
        system("clear");
        cout << "Menu:" << endl;
        cout << "1. Insert depan" << endl;
        cout << "2. Insert belakang" << endl;
        cout << "3. Insert tengah" << endl;
        cout << "4. Delete depan" << endl;
        cout << "5. Delete belakang" << endl;
        cout << "6. Delete tengah" << endl;
        cout << "7. Display" << endl;
        cout << "8. Exit" << endl;
        cout << "Masukkan Pilihan: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Masukkan value : ";
            cin >> value;
            linkedList.insertAtFront(value);
            cout << "Press Enter to continue...";
            fflush(stdin);
            getchar();
            break;
        case 2:
            cout << "Masukkan value : ";
            cin >> value;
            linkedList.insertAtEnd(value);
            cout << "Press Enter to continue...";
            fflush(stdin);
            getchar();
            break;
        case 3:
            cout << "Masukkan value : ";
            cin >> value;
            cout << "Masukkan posisi : ";
            cin >> position;
            linkedList.insertAtMiddle(value, position);
            cout << "Press Enter to continue...";
            fflush(stdin);
            getchar();
            break;
        case 4:
            linkedList.deleteFromFront();
            cout << "Press Enter to continue...";
            fflush(stdin);
            getchar();
            break;
        case 5:
            linkedList.deleteFromEnd();
            cout << "Press Enter to continue...";
            fflush(stdin);
            getchar();
            break;
        case 6:
            cout << "Masukkan posisi untuk dihapus: ";
            cin >> position;
            linkedList.deleteFromMiddle(position);
            cout << "Press Enter to continue...";
            fflush(stdin);
            getchar();
            break;
        case 7:
            linkedList.display();
            cout << "Press Enter to continue...";
            fflush(stdin);
            getchar();
            break;
        case 8:
            cout << "Keluar..." << endl;
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
        }

        cout << endl;
    } while (choice != 8);

    return 0;
}
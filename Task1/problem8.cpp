#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node()
    {
        data = 0;
        next = NULL;
    }
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class linked_list
{
    node *head;

public:
    linked_list()
    {
        head = NULL;
    }
    bool is_empty()
    {
        return (head == NULL);
    }
    void insert_first(int value)
    {
        node *new_node = new node();

        new_node->data = value;
        if (is_empty())
        {
            new_node->next = NULL;
            head = new_node;
        }
        else
        {
            new_node->next = head;
            head = new_node;
        }
    }
    void display()
    {
        node *temp;
        temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
    int count()
    {
        int counter = 0;
        node *temp = head;
        while (temp != NULL)
        {
            counter++;
            temp = temp->next;
        }
        return counter;
    }
};

int main()
{
    linked_list lst;
    int item, n;
    if (lst.is_empty())
        cout << "The List is empty \n";
    else
        cout << "The List contains " << lst.count() << endl;
    cout << "Enter the item \n";
    cin >> item;
    lst.insert_first(item);
    lst.display();
    cout << "Enter the item \n";
    cin >> item;
    lst.insert_first(item);
    lst.display();
    cout << "Enter the item \n";
    cin >> item;
    lst.insert_first(item);
    lst.display();
}

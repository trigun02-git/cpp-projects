#include<iostream>
#define MAX 100
using namespace std;

class nw5
{
private:
    int a[MAX], n=0;
public:
    void input();
    void display();
    void sort();
    void insert();
    void delete_element();
    void search_replace();
};
void nw5::input()
{
    cout << "\nno of elements of array: ";
    cin >> n;
    cout << "\nplease enter elements of array== ";
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> a[i];
    }
}

void nw5::display()
{
    cout << "array is==\n";
    for (int i = 0; i <= n - 1; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void nw5::sort()
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    cout << "\narray after sorting:\n";
    display();
}

void nw5::insert()
{
    int pos, no;
    cout << "\nenter position== ";
    cin >> pos;
    cout << "\nenter no to be inserted== ";
    cin >> no;
    if (pos <= n && pos >= 0)
    {
        for (int i = n; i > pos; i--)
        {
            a[i] = a[i - 1];
        }
        a[pos] = no;
        n++;
        cout << "\narray after insertion:\n";
        display();
    }
    else
    {
        cout << "invalid try again...";
    }
}

void nw5::delete_element()
{
    int pos;
    cout << "\nenter position== ";
    cin >> pos;
    if (pos < n && pos >= 0)
    {
        for (int i = pos; i < n - 1; i++)
        {
            a[i] = a[i + 1];
        }
        n--;
        cout << "\narray after deletion:\n";
        display();
    }
    else
    {
        cout << "invalid try again...";
    }
}
void nw5::search_replace()
{
    int no1,no2;
    cout << "\nenter number to search for== ";
    cin >> no1;
    cout << "\nenter number to replace it with== ";
    cin >> no2;
    for (int i = 0; i <=n-1; i++)
    {
        if (a[i]=no1)
        {
            cout<<"\nyes this no exist";
            a[i]=no2;
        }
    }
    
}

int main()
{
    nw5 A;
    A.input();
    char choice; 
    do
    {
        cout << "\n===MENU===";
        cout << "\n's'->for sorting of array";
        cout << "\n'i'->for insertion of element";
        cout << "\n'd'->for display of elements";
        cout << "\n'x'->for deletion of element"; 
        cout << "\n'e'->for exit";
        cout<<"\n'r'->for search and replace";
        cout << "\nEnter your choice-- ";
        cin >> choice;

        switch (choice)
        {
        case 's':
            A.sort();
            break;
        case 'i':
            A.insert();
            break;
        case 'd':
            A.display();
            break;
        case 'x':
            A.delete_element();
            break;
        case 'e':
            break;
        case 'r':
            A.search_replace();
            break;
        default:
            cout << "\ninvalid choice";
            break;
        }
    } while (choice != 'e'); 
    return 0;
}
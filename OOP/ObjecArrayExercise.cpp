#include <iostream>
#include <iomanip>
using namespace std;
#define BLUE "\033[34m"
#define GREEN "\033[32m"
#define RESET "\033[0m"
class Book
{
private:
    int id, qty;
    string title, Public_book, author;
    float price;

public:
    // constuctor
    Book()
    {
        id = 0;
        title = "Unknow";
        Public_book = "Unknow";
        author = "Unknow";
        qty = 0;
        price = 0;
    }
    Book(int i, string t, string pu, string a, float p, float q)
    {
        id = i;
        title = t;
        Public_book = pu;
        author = a;
        price = p;
        qty = q;
    }

    int getId()
    {
        return id;
    }
    string getTitle()
    {
        return title;
    }
    string getPublic_book()
    {
        return Public_book;
    }
    string getAuthor()
    {
        return author;
    }
    float getPrice()
    {
        return price;
    }
    int getQty()
    {
        return qty;
    }
};
int main()
{
    int choose, size_of_book, option, add_size_book, update_id, delete_id, new_id, new_qty, id, qty, answer, i, j, Search_id, add_id, add_qty, add_price;
    Book obj[100];
    string title, Public_book, author, new_Public_book, new_title, new_author, add_Public_book, add_author, Search_title;
    float price, new_price;
    bool check;
    do
    {
        cout << GREEN << "==============================================================" << endl;
        cout << "| 1.Create the Detail book.                                   |" << endl;
        cout << "|-------------------------------------------------------------|" << endl;
        cout << "| 2.Display all Detail book.                                  |" << endl;
        cout << "|-------------------------------------------------------------|" << endl;
        cout << "| 3.Search the book.                                          |" << endl;
        cout << "|-------------------------------------------------------------|" << endl;
        cout << "| 4.Delete the book.                                          |" << endl;
        cout << "|-------------------------------------------------------------|" << endl;
        cout << "| 5.Update the book.                                          |" << endl;
        cout << "|-------------------------------------------------------------|" << endl;
        cout << "| 6.Add the book.                                             |" << endl;
        cout << "|-------------------------------------------------------------|" << endl;
        cout << "| 7.Sort the book.                                            |" << endl;
        cout << "|-------------------------------------------------------------|" << endl;
        cout << "| 0.Exit                                                      |" << endl;
        cout << "|=============================================================|" << endl;
        cout << "|==> Please choose the option : ";
        cin >> choose;
        switch (choose)
        {
            case 0:
            {
                cout << "|==============================================================|" << endl;
                cout << "|                      Exit Successfully!                      |" << endl;
                cout << "|==============================================================|" << RESET << endl;
                break;
            }
            case 1:
            {
                cout << "|==============================================================|" << endl;
                cout << "|                       Create the Detail book                 |" << endl;
                cout << "|==============================================================|" << endl;
                cout << "|Enter the number of book : ";
                cin >> size_of_book;
                for (i = 0; i < size_of_book; i++)
                {
                    cout << "|Enter Book ID : ";
                    cin >> id;
                    cout << "|Enter Book Title : ";
                    cin >> title;
                    cout << "|Enter Book Public : ";
                    cin >> Public_book;
                    cout << "|Enter Book Author : ";
                    cin >> author;
                    cout << "|Enter Book Price : ";
                    cin >> price;
                    cout << "|Enter Book Quantity : ";
                    cin >> qty;
                    obj[i] = Book(id, title, Public_book, author, price, qty);
                }
                cout << "|==============================================================|" << endl;
                cout << "|                     Create Book Complete                     |" << endl;
                cout << "|==============================================================|" << endl;
                system("pause");
                break;
            }
            case 2:
            {
                cout << "|=============================================================================|" << endl;
                cout << "|                          Display  All  Book   Detail                        |" << endl;
                cout << "|=============================================================================|" << endl;
                for (i = 0; i < size_of_book; i++)
                {
                    cout << setw(10) << " ID "
                        << setw(12) << " Title "
                        << setw(13) << " PDT "
                        << setw(14) << " Author "
                        << setw(12) << " Price "
                        << setw(13) << " Quantity " << endl;
                    cout << "|=============================================================================|" << endl;
                    cout << "|=============================================================================|" << endl;
                    cout << setw(9) << obj[i].getId()
                        << setw(10) << obj[i].getTitle()
                        << setw(14) << obj[i].getPublic_book()
                        << setw(13) << obj[i].getAuthor()
                        << setw(13) << obj[i].getPrice()
                        << setw(12) << obj[i].getQty() << endl;
                    cout << "|=============================================================================|" << endl;
                    cout << "|=============================================================================|" << endl;
                }
                system("pause");
                break;
            }
            case 3:
            {
                cout << "1.Search For ID." << endl;
                cout << "2.Search For Title." << endl;
                cout << "Enter For Search: ";
                cin >> choose;
                        switch (choose)
                        {
                        case 1:
                        {
                            cout << "Enter ID for search : ";
                            cin >> Search_id;
                            for (int i = 0; i < size_of_book; i++)
                            {
                                if (obj[i].getId() == Search_id)
                                {
                                    cout << setw(10) << "|ID"
                                        << setw(12) << "|Title"
                                        << setw(13) << "|Author"
                                        << setw(14) << "|Price"
                                        << setw(12) << "|Qty"
                                        << setw(13) << "|PDT" << endl;
                                    cout << setw(10) << obj[i].getId()
                                        << setw(10) << obj[i].getTitle()
                                        << setw(13) << obj[i].getAuthor()
                                        << setw(14) << obj[i].getPrice()
                                        << setw(13) << obj[i].getQty()
                                        << setw(13) << obj[i].getPublic_book() << endl;

                                    cout << "|==============================================================|" << endl;
                                    cout << "|                     Search Book Complete                     |" << endl;
                                    cout << "|==============================================================|" << endl;
                                }
                            }
                            break;
                        }
                        case 2:
                        {
                            cout << "Enter Title for search : ";
                            cin.ignore();
                            getline(cin, Search_title);
                            for (int i = 0; i < size_of_book; i++)
                            {
                                if (obj[i].getTitle() == Search_title)
                                {
                                    cout << setw(10) << "|ID"
                                        << setw(12) << "|Title"
                                        << setw(12) << "|Author"
                                        << setw(12) << "|Price"
                                        << setw(12) << "|Qty"
                                        << setw(12) << "|PDT" << endl;
                                    cout << setw(12) << obj[i].getId()
                                        << setw(12) << obj[i].getTitle()
                                        << setw(12) << obj[i].getAuthor()
                                        << setw(12) << obj[i].getPrice()
                                        << setw(12) << obj[i].getQty()
                                        << setw(12) << obj[i].getPublic_book() << endl;

                                    cout << "|==============================================================|" << endl;
                                    cout << "|                     Search Book Complete                     |" << endl;
                                    cout << "|==============================================================|" << endl;
                                }
                            }
                            break;
                        }
                }
             system("pause");
             break;
            }

            case 4:
            {

                cout << "|==============================================================|" << endl;
                cout << "|                           Delete the book                    |" << endl;
                cout << "|==============================================================|" << endl;
                cout << "Enter id to delete: ";
                cin >> delete_id;
                for (int i = 0; i < size_of_book; i++)
                {
                    if (obj[i].getId() == delete_id)
                    {
                        for (j = i; j < size_of_book - 1; j++)
                        {
                            obj[i] = obj[j + 1];
                        }

                        size_of_book = size_of_book - 1;
                    }
                }
                cout << "|==============================================================|" << endl;
                cout << "|                     Delete Book Complete                     |" << endl;
                cout << "|==============================================================|" << endl;
                system("pause");
                break;
            }
            case 5:
            {
                cout << "|==============================================================|" << endl;
                cout << "|                           Update the book                    |" << endl;
                cout << "|==============================================================|" << endl;
                cout << "Enter id to update: ";
                cin >> update_id;
                for (int i = 0; i < size_of_book; i++)
                {
                    if (obj[i].getId() == update_id)
                    {
                        cout << "Enter New ID: ";
                        cin >> new_id;
                        cout << "Enter New Title: ";
                        cin >> new_title;
                        cout << "Enter New Public: ";
                        cin >> new_Public_book;
                        cout << "Enter New Author: ";
                        cin >> new_author;
                        cout << "Enter New Price: ";
                        cin >> new_price;
                        cout << "Enter New Quantity: ";
                        cin >> new_qty;
                        id = new_id;
                        title = new_title;
                        Public_book = new_Public_book;
                        author = new_author;
                        price = new_price;
                        qty = new_qty;
                        obj[i] = Book(id, title, Public_book, author, price, qty);
                        cout << "|==============================================================|" << endl;
                        cout << "|                     Update Book Complete                     |" << endl;
                        cout << "|==============================================================|" << endl;
                    }
                }
                system("pause");
                break;
            }
            case 6:
            {
                cout << "|==============================================================|" << endl;
                cout << "|                     ADD the book                             |" << endl;
                cout << "|==============================================================|" << endl;
                cout << "Add size Book : ";
                cin >> add_size_book;
                for (i = size_of_book; i < size_of_book + add_size_book; i++)
                {
                    cout << "Enter New ID: ";
                    cin >> id;
                    cout << "Enter New  Title : ";
                    cin >> title;
                    cout << "Enter New Public: ";
                    cin >> Public_book;
                    cout << "Enter New Author: ";
                    cin >> author;
                    cout << "Enter New Price: ";
                    cin >> price;
                    cout << "Enter New Quantity: ";
                    cin >> qty;
                    obj[i] = Book(id, title, Public_book, author, price, qty);
                        cout << "|==============================================================|" << endl;
                        cout << "|                     ADD Book Complete                     |" << endl;
                        cout << "|==============================================================|" << endl;
                }
                size_of_book += add_size_book;
                system("pause");
                break;
            }

            case 7:
            {
                cout << "|==============================================================|" << endl;
                cout << "|                        Sort the book                         |" << endl;
                cout << "|==============================================================|" << endl;
                check = false;
                cout << "1.Sort By Title [A-Z][Z-A]" << endl;
                cout << "2.Sort By ID [0-100][100-0]" << endl;
                cout << "Please Choose option:";
                cin >> option;
                switch (option)
                {
                    case 1:
                    {
                        cout << "1.Sort By Title [Z-A]" << endl;
                        cout << "2.Sort By Title [A-Z]" << endl;
                        cout << "Please Choose option:";
                        cin >> answer;
                        check = false;
                        if (answer == 1)
                        {
                            for (int i = 0; i < size_of_book; i++)
                            {
                                for (j = i + 1; j < size_of_book; j++)
                                {
                                    if (obj[i].getTitle() < obj[j].getTitle())
                                    {
                                        swap(obj[i],obj[j]);
                                        check = true;
                                    }
                                }
                            }
                            if (!check)
                            {
                                cout << "Sort Not Complate!" << endl;
                            }
                            else
                            {
                                cout << "Sort Complate!" << endl;
                            }
                        }
                        if (answer == 2)
                        {
                            check = false;
                            for (int i = 0; i < size_of_book; i++)
                            {
                                for (j = i + 1; j < size_of_book; j++)
                                {
                                    if (obj[i].getTitle() > obj[j].getTitle())
                                    {
                                        swap(obj[i],obj[j]);
                                        check = true;
                                    }
                                }
                            }
                            if (!check)
                            {
                                cout << "Sort Not Complate!" << endl;
                            }
                            else
                            {
                                cout << "Sort Complate!" << endl;
                            }
                        }
                        system("pause");
                        break;
                    }
                    case 2:
                    {
                        cout << "1.Sort By ID [100-0]" << endl;
                        cout << "2.Sort By ID [0-100]" << endl;
                        cout << "Please Choose option:";
                        cin >> answer;
                        if (answer == 1)
                        {
                            check = false;
                            for (int i = 0; i < size_of_book; i++)
                            {
                                for (j = i + 1; j < size_of_book; j++)
                                {
                                    if (obj[i].getId() < obj[j].getId())
                                    {
                                       swap(obj[i],obj[j]);
                                       check=true;
                                    }
                                }
                            }
                            if (!check)
                            {
                                cout << "Sort Not Complate!" << endl;
                            }
                            else
                            {
                                cout << "Sort Complate!" << endl;
                            }
                        }
                        if (answer == 2)
                        {
                            check = false;
                            for (int i = 0; i < size_of_book; i++)
                            {
                                for (j = i + 1; j < size_of_book; j++)
                                {
                                    if (obj[i].getId() > obj[j].getId())
                                    {
                                        swap(obj[i],obj[j]);
                                        check=true;
                                    }
                                }
                            }
                            if (!check)
                            {
                                cout << "Sort Not Complate!" << endl;
                            }
                            else
                            {

                                cout << "Sort Complate!" << endl;
                            }
                        }
                        system("pause");
                        break;
                    }
                }
            }
        }

    } while (choose != 0);

    return 0;
}

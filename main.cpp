// Author: Nysa Morales
#include<iostream>
#include<string>
using namespace std;

const int LIST_SIZE = 5;

int main()
{
        string list[LIST_SIZE]; //array of 5 strings
        int numItems = 0;
        char input;
        int index;
        string item;
        index = 0;

        do {
                cout<<"\n==GROCERY LIST MANAGER==";
                cout<<"\nEnter your choice: ";
                cout<<"\n (A)dd an item";
                cout<<"\n (Q)uit";
                cout<<"\nYour choice (A/Q): ";
                cin>>input;

                if (input == 'A' || input == 'a')
                {
                        cout << "What is the item? \n";
                        cin >> item;

                        if (index <5)
                        {
                                list[index] = item;
                                index++;
                        }
                        else 
                        {
                                cout << "You'll need a bigger list!" << endl;
                        }
                }
        }
        while (input != 'Q' && input != 'q');
        return 0;
}

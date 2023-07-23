/*C++ program to implement a custom container that behaves like a stack using the STL algorithms and data structures*/

#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

template <typename T>
class CustomContainer{
    private:
        vector<T> customStack;

    public:

        //Function to add elements into the custom stack container
        void push(T data)
        {
            customStack.push_back(data);
        }

        //Function to check the size of the custom stack container
        int size()
        {
            return customStack.size();
        }

        //Function to pop out the top element from the stack
        void pop()
        {
            if(!customStack.empty())
            {
                customStack.pop_back();
            }
            else
            {
                cout<<"The custom Stack container is EMPTY!";
            }
        }

        T top()
        {
            cout<<"The popped element from the custom Stack container is : "<<customStack.back()<<endl;
        }

        //Function which Checks if the custom stack container is empty
        bool isempty()
        {
            if(customStack.empty())
            {
                cout<<"The custom Stack container is EMPTY!";
            }
            else
            {
                cout<<"There are "<<customStack.size()<<" elements in the custom stack container"<<endl;
            }
        }
};



int main()
{
    //Declaring a vector to create the custom stack container
    CustomContainer<char> customStack;

    int num;
    char data;

    //Getting the number of elements to be inserted into the custom container
    cout << "Enter the number of elements to be inserted in the container: " << endl;
    cin>>num;

    //Getting the data from the user
    //Inserting the elements into the custom container by calling the push function
    cout << "Enter the elements to be inserted in the container: " << endl;
    for(int i=0;i<num;i++)
    {
        cin>>data;
        customStack.push(data);
    }

    //Printing the size of the customStack after inserting the elements into it
    cout << "The size of the Custom Container is : "<<customStack.size()<< endl;

    //Popping an element from the custom container
    customStack.pop();

    //Printing the top element of the custom container
    customStack.top();

    //Checking if the custom container is empty
    customStack.isempty();

    return 0;
}

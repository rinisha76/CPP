/*C++ program that counts the number of unique elements in a given range using the STL set container*/

#include <iostream>
#include <set>

using namespace std;

int main()
{
    int num;
    cout<<"Enter the size of the array: "<<endl;
    cin>>num;

    //Declaring an array with num number of elements 
    int array[num];
    
    //Getting input and storing the array elements 
    cout<<"Enter the array elements: "<<endl;
    for(int i=0;i<num;i++)
    {
        cin>>array[i];
    }

    //Declaring a set to find unique elements
    set<int> Set;

    //Storing the array elements into the set which stores only the unique elements of the array
    for(int i=0;i<num;i++)
    {
        Set.insert(array[i]);
    }

    //Printing the unique elements of the array
    cout<<"The number of unique elements of the array is : "<<Set.size()<< " and the elements are ";

    for(int data:Set)
    {
        cout<<data<<" ";
    }

    return 0;
}

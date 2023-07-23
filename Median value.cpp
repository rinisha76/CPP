/*Implementation of a generic function in C++ that takes 
a container of integers and returns the median value using the STL algorithms*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <class Container>
typename Container::value_type median(Container& vect) 
{
    Container vectData = vect;
    
    //Sorting the vector elements to find the median element
    sort(vectData.begin(), vectData.end());

    size_t vectSize = vectData.size();
    size_t medianIndex = vectSize / 2;

    //Checking if the number of elements of the vector is odd or even 
    //and computing the median element
    /
    if (vectSize%2==0)
        {
        return ((vectData[medianIndex-1] + vectData[medianIndex])/2);
    }
    else {
        return (vectData[medianIndex]);
    }
}

int main() {
    int num;
    
    cout<<"Enter the number of elements: "<<endl;
    cin>>num;

    int data;
    vector<int> vect;

    cout<<"Enter the elements: "<<endl;
    for(int i=0; i<num; i++)
    {
        cin >> data;
        vect.push_back(data);
    }

    
    int medianValue = median(vect);
    cout << "Median: " << medianValue << endl;

    return 0;
}

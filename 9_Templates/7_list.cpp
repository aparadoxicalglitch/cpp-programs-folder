#include<iostream>
#include<list>
using namespace std;

// If we want the faster access of the given data then we should use array as they are easily accesible .
// But if we want the delete the given data or add new element then list is more efficient and it is bidirectional too.

void display(list<int> &lst){
    list<int> :: iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main()
{
    // 6 4 3 
    list<int> list1; // list of zero length
    // list<int> list2(7); // empty list of seven length
    list1.push_back(4);
    list1.push_back(3);
    list1.push_back(2);
    list1.push_back(7);
    list1.push_back(9);
    display(list1);
    
    // Removing elements form the list
    // list1.pop_back(); // removes from the last
    // display(list1);
    // list1.pop_front(); // removes form the front
    // display(list1);
    // list1.remove(7);  // removes the specific element and if there are two same element it will delete both of them 
    // display(list1);

    //Sorting the list
    // list1.sort();
    // display(list1);

    //Reversing the list 
    // list1.reverse();
    // display(list1);

    list<int> list2(3);
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 23;
    iter++;
    *iter = 21;
    iter++;
    *iter = 29;
    iter++;
    display(list2);

    list1.merge(list2);
    cout<<"List 1 after merging : ";
    display(list1);

    // Will merge after sorting both the list
    // list1.sort();
    // list2.sort();
    // list1.merge(list2);
    // cout<<"List 1 after merging : ";
    // display(list1);

    return 0;
}
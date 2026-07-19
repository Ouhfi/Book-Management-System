#include <iostream>
#include <vector>


using namespace std;

int main ()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    vector<int> vec2  {6, 7, 8, 9, 10};
    vector<int> vec3 (10 ,100);

    for(int  i = 0; i < vec.size() ; i++)
    {
        cout << vec.at(i) << " ";

    }
   
    cout  << "\n=========================\n";
    ;

    for(int  i = 0; i < vec.size() ; i++)
    {
        cout << vec2.at(i) << " ";

    }

    cout  << "\n=========================\n";
    for(int  i = 0; i < vec.size() ; i++)
    {
        cout << vec3.at(i) << " ";

    }
    
    cout  << "\n=========================\n";
    cout <<"number of Element  is "  << vec3.size();
}

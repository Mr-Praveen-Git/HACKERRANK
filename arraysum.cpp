#include <iostream>
#include <vector>
#include <numeric> 
using namespace std;

int arraySum(vector<int> &v)
{
    int initial_sum = 0; //define initial value 
    return accumulate(v.begin(), v.end(), initial_sum);// accumalate ek lib hai jo first and last aur initial value ka sum return krta hai 
}

int main()
{
    vector<int> v{1, 2, 3, 4, 10 , 11} ;// given array jiska size 6 hai 
    cout << arraySum(v); // print krne ke liye 
    return 0;
}

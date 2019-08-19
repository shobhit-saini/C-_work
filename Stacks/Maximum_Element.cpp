#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N, i = 0, ele = 0, max_ele = 0, x = 0, options = 0;
    stack<int> st;  
    stack<int> max_st;
    cin>> N;
    while(i < N)
    {
        cin>> options;
        switch(options)
        {
            case 1: 
                cin>> ele;
                st.push(ele);
                if(max_st.empty())
                {
                    max_st.push(ele);
                }
                else if( ele >= max_st.top())
                {
                    max_st.push(ele);
                }
                break;
            
            case 2:
                if( st.top() == max_st.top())
                {
                    max_st.pop();
                }
                st.pop();
                break;

            case 3:
                x = max_st.top();
                cout<<x<<"\n";
                break;

        }
            i++;
    } 
    return 0;
}


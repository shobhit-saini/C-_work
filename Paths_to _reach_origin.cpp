#include <iostream>
using namespace std;
int fact (int n)
{
    if(n == 1)
    {
        return 1;
    }
    else
    {
        return (n * fact(n-1));
    }
}
int main() {
    int n = 0, m = 0, a = 0, b = 0, c = 0, paths = 0, T = 0;
	cin>> T;
	while(T != 0)
	{
	    cin>> n>> m;
	    a = fact (n+m);
	    b = fact (n);
	    c = fact (m);
	    paths = a/(b*c);
	    cout<<paths;
	}
	return 0;
}

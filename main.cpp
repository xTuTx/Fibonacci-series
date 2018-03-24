#include <iostream>

using namespace std;

int recursion(int k)
{
    if(k==1||k==2) return 1;
    else
    {
        return(recursion(k-1)+recursion(k-2));
    }

}
int main()
{
    int num;
    cin>>num;
    cout<<recursion(num)<<endl;
    return 0;
}

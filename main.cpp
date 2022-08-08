#include <iostream>

using namespace std;

void func1(int x,int y)
{
    int i;
    cout<<"CODE TO PRINT COUNTING FROM "<<x<<" TO "<<y<<" IS::"<<endl;
    for(i=x;i<=y;i++)
    {
        cout<<i<<endl;
    }
}
int main()
{
    int n1,n2;
    cout<<" ENTER THE STARTING NUMBER::";
    cin>>n1;
    cout<<" ENTER THE ENDING NUMBER::";
    cin>>n2;
    func1(n1,n2);
    return 0;
}

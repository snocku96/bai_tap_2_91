#include <iostream>

using namespace std;
int add(int x, int y)
{
        int result =x+y;
        return result;
}
int subtract(int x, int y)
{
        int result =x-y;
        return result;
}
int multiplie(int x, int y)
{
        int result =x*y;
        return result;
}
float divide(int x, int y)
{
        float result = x/y;
        return result;
}
int main()
{
    int x,y;
    cout << "Enter the first number ";
    cin >> x;
    cout << "Enter the second number ";
    cin >> y;
    cout << "Your result:"<<endl;
    cout <<"x+y = "<<add(x,y)<<endl;
    cout <<"x-y = "<<subtract(x,y)<<endl;
    cout <<"x*y = "<<multiplie(x,y)<<endl;
    cout <<"x/y = "<<divide(x,y);
    return 0;
}

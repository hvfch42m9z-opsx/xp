#include <iostream>
using namespace std;
int main()
{
    cout << "捐赠多少" <<endl;
    int xp = 0;
    cin >> xp;
    if(xp >= 20){
        cout << "土豪" << endl;
        return 0;
    }
    
    else{
        cout << "穷b" <<endl;
        return 0;
    }
} 
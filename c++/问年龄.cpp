#include <iostream>
using namespace std;

int main()
{
    int xp = 0;
    cout << "你的年临是几?" << endl;
    cin >> xp;
    cout << "你的年龄是：" << xp <<endl; 
    if(xp < 10){
        cout << "滚" << endl;
        if (xp < 5){ //if中再来个判断
            cout << "滚中滚"  << endl;
            if(xp >= 10){
                cout << "豪"  << endl;
            }
        }
        else{
            cout << "棍"  <<endl;
        }
    }
    else{
        cout << "豪中号" <<endl;
    }
}
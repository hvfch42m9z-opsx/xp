#include <iostream>
using namespace std;
int main()
{
    int one = 0;
    cin >> one; 
    int twe = 0;
    cin >> twe;
    int a = one + twe;
    int b = one - twe;
    int c = one * twe;
    int d = one / twe;
    if(a){
        cout << a <<endl;
    }
    else if(b){
        cout << b << endl; 
    }
    else if(c){
        cout << c << endl;
    }
    else if(d ){
        cout << d <<endl;
    }
    else{
        cout << "nm" <<endl;
    }
    return 0;
}
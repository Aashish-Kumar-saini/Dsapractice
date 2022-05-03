#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    
    int i;
    long l;
    char c;
    float f;
    double d;
    
    cin>>i>>l>>c>>f>>d;
    cout<<i<<endl<<l<<endl<<c<<endl;
    cout<<setprecision(8) <<f<<endl;
    cout<<setprecision(16)<<d;
    return 0;
}

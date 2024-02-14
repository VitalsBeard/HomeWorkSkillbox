#include <iostream>
#include <cstdlib>

using namespace std;

int main (){
    string a;
    string b;
    string operation;
    string buffer;
    cout << "Please input the expression:\n";
    cin >> buffer;

    stringstream buffer_stream (buffer) ;
    buffer_stream >> a >> operation >> b;
    
    cout << a << operation << b << " = " ;
}
    
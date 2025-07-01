#include <iostream>
#include <string>
using namespace std;




int main(){

string a, b;
int min, max;

a = "hello";
b = "worldview";

if (a.length() > b.length()){
    min = b.length();
    max = a.length();
}
else {
    min = a.length();
    max = b.length();
}

for (int i = 0; i < min ; i++){
cout << a[i];
cout << b[i];
}

for (int i = min; i < max; i++){
    if (a.length() == max){
        cout << a[i];
    }
    else cout << b[i];
}

cout << "\n";

return 0;
}

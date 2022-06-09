#include <iostream>

using namespace std;

void intToBin (int n) {
	
	if (n>1) 
        intToBin(n/2);
    cout<<n%2;
}

int main() {
    
    int intNum;
    cin >>intNum;
    intToBin(intNum);

    return 0;
}

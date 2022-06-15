// Lab C++ functions;
// Önce karekök fonksiyonu yazıldı.
// Sonra 'pass by pointer' eklendi!

// exp1 converted to c++

// "biraz güzelleştir" (hoca):
#include <iostream>
using namespace std;

int calculate( int n)
{
    int end = (n*n*n);
    cout << end << endl;
    
    return n;
}
int main( void )
{
    int number;
    
    cout << "Enter a number for calculation:" << endl;
    cin >> number;
    
    int *end = &number;
    
    calculate(*end);
}

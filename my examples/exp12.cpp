//  File Processing / Handling example
// Kaç tane not girileceğine dair input aldıktan sonra notların ortalamasını alır ve txt'e kaydeder.

#include <iostream>
#include <fstream>
using namespace std;

int main( )
{
    int g, sum = 0;
    
    cout << "How many grades?\n";
    cin >> g;
    
    int Grades[g];
    ofstream myFile("Grades.txt");
    
    for(int i=0; i<g; i++)
    {
        cout << i+1 << ".grade:";
        cin >> Grades[i];
        
        sum += Grades[i];
        myFile << Grades[i] << "\n";
    }
    myFile << sum/g;
    
    myFile.close();
} //main

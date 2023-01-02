//  File Processing / Handling example
// Kodun çalışması için aynı directory'de GPA.txt dosyasının bulunması gerekiyor.

/* GPA.txt içeriği:
 Ali        Veli    3.6
 Ayse       Kara    3.0
 Metin      Genc    2.2
 Oguzhan    Simit   3.7
 Serdar     Kayacı  2.85
 Gökden     Kolluk  3.19
 */

#include <iostream>
#include <fstream>
using namespace std;

int main( )
{
    char str1[15], str2[15];
    float ort;
    
    ifstream GPA("GPA.txt");
    ofstream YOB("YOB.txt");
    ofstream OB("OB.txt");
    
    while(!GPA.eof())
    {
        GPA >> str1 >> str2 >> ort;
        
        if(ort>=3.5) {
            YOB << str1 << "\t";
            YOB << str2 << "\t";
            YOB << ort << endl;
        }
        else if(ort>=3.0 && ort<3.5) {
            OB << str1 << "\t";
            OB << str2 << "\t";
            OB << ort << endl;
        }
    } //while
    
    GPA.close();
    YOB.close();
    OB.close();

} //main

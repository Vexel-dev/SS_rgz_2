#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{

    int n = 0;
    cout <<"Amount of strings: ";
    cin >> n;
    cout <<"\n";

    int p = 0; //Длина строки после сокращения
    cout <<"length: ";
    cin >> p;

    string h;
    getline(cin, h);

    string str[n];
    cout <<"\nEnter your lines: "<< endl;
    string s2 = "...";

    for(int i = 0; i < n;i++){
            getline(cin, str[i]);
        }


    int counter = 0;
    for(int i = 0; i < n;i++){
        counter = 0;
        for(int j = i+1; j < n; j++){
            if(str[i] == str[j]){
                counter++;
                str[j]+= to_string(counter);
            }
        }
     }

    cout << endl <<"\nBefore reduction: " << endl;
    for(int i = 0; i < n;i++){
           cout << str[i] << "\n";
        }


    for(int i = 0; i < n;i++){
        if(str[i].length() > p){
            str[i].replace(p/2, str[i].length()-p, s2);
            }
        }

    for(int i = 0; i < n;i++){
        counter = 0;
        for(int j = i+1; j < n; j++){
            if(str[i] == str[j]){
                counter++;
                str[j]+= to_string(counter);
            }
        }
     }


    cout << endl <<"\nAfter reduction: " << endl;
    for(int i = 0; i < n;i++){
           cout << str[i] << "\n";
        }


    return 0;
}

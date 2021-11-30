#include <iostream>
#include <string>
using namespace std;
#include <Windows.h>
#include <cmath>

int main(int argc, char** argv) {

    int var = 0;
    int counter_2 = 0;

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
    string str_an[n];
    string str1[n];
    string str2[n];
    string str3[n];
    cout <<"\nstr: "<< endl;
    string s2 = "...";

    for(int i = 0; i < n;i++){
            getline(cin, str[i]);
        }
int counter = 0;


    for(int i = 0; i < n;i++){
        str1[i] = str[i];
        str2[i] = str[i];
        str3[i] = str[i];
    }


cout << endl <<"\n str 3_3 2_4 1_5: " << endl;
 int count = 0;
string str_s[n];
string str_f = " ";
int arr[100][100];



int counter3[p];

    for(int i = 0; i < p;i++){
        counter3[i] = 0;
    }



    for(int i = 0; i < p-1;i++){
        for(int j = 0; j < n;j++){
            str_s[j].assign(str[j], 0, i+1);
            str_s[j].append(str_f);
            str_s[j].append(str[j], (i+1)+(str[j].length()-p), p-i);
            cout <<"\n str_s[" << j << "]: "<< str_s[j];
        }
         cout << endl;

         for(int c = 0; c < n;c++){
             counter = 0;
             for(int t = c+1; t < n; t++){
                 if(str_s[c] == str_s[t]){
                     counter++;
                     //counter3 = counter;
                     //cout << str_s[c] << "  counter: " << counter << endl;
                     str_s[t]+= to_string(counter);
                     //count = counter;
                 }
             }
             counter3[i] = counter3[i] + counter;
          }

          cout << "\n counter3[" << i << "]: "<< counter3[i] << " ";

         for(int u = 0; u < n;u++){
                cout << str_s[u] << "\n";
             }
         cout << endl <<"\n ---------------------------------------------- " << endl;

    }

    for(int i = 0; i < p-1; i++){
        cout << "\n counter3[" << i << "]: "<< counter3[i] << " ";
    }

    int min = 0;
    min = counter3[0];
    for(int j = 0; j < p-1; j++)
    {
        if(counter3[j] < min)
        {
            min = counter3[j];
        }
    }
     //cout <<"\n min: "<< min << endl;
    int number[p];
    for(int i = 0; i < p-1; i++)
    {
        number[i] = 0;

        if(counter3[i] == min)
        {
            number[i] = i+1;
        }
    }

    for(int i = 0; i < p; i++)
    {
        cout << "\n number[" << i << "]: "<< number[i] << " ";
    }

  int result = abs((p/2) - number[0]);
        int item = 0;
       for(int i = 0; i < p; i++)
        {
            if(abs((p/2) - number[i]) < result)
            {
                result = abs((p/2) - number[i]);
                item = i;
            }
       }
       cout <<"\n\n min: "<< min << endl;
       cout <<" item: "<< item << endl;
       for(int i = 0; i < n;i++){
           //str_an[i] = str[i];
           if(str[i].length() > p){
               str[i].replace(item+1, str[i].length()-p, s2);
               }
           }

       cout << endl <<"\nAfter reduction str: " << endl;
       for(int i = 0; i < n;i++){
              cout << str[i] << "\n";
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

       cout << endl <<"\nAfter reduction str: " << endl;
       for(int i = 0; i < n;i++){
              cout << str[i] << "\n";
           }


    return 0;
}

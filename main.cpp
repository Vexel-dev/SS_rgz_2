#include <iostream>
#include <string>
using namespace std;
#include <Windows.h>
#include <cmath>

int main(int argc, char** argv) {


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
    string str_s[n];
    string str_f = " ";
    int counter2[p];
    int min = 0;
    string s2 = "...";
    int counter = 0;
    int number[p];
    int cell = 0;
    cout <<"\nEnter your lines:: "<< endl;

    for(int i = 0; i < n;i++)
        {
            getline(cin, str[i]);
        }

    for(int i = 0; i < p;i++)
        {
        counter2[i] = 0;
        }

    for(int i = 0; i < p-1;i++)
        {
        for(int j = 0; j < n;j++)
            {
            str_s[j].assign(str[j], 0, i+1);
            str_s[j].append(str_f);
            str_s[j].append(str[j], (i+1)+(str[j].length()-p), p-i);
        }
         //cout << endl;

         for(int c = 0; c < n;c++)
            {
             counter = 0;
             for(int t = c+1; t < n; t++)
                {
                 if(str_s[c] == str_s[t])
                    {
                     counter++;
                     str_s[t]+= to_string(counter);
                 }
             }
             counter2[i] = counter2[i] + counter;
          }
    }


    min = counter2[0];
    for(int j = 0; j < p-1; j++)
        {
        if(counter2[j] < min)
        {
            min = counter2[j];
        }
      }


    for(int i = 0; i < p;i++)
        {
        number[i] = 0;
    }

    for(int i = 0; i < p-1; i++)
    {

        if(counter2[i] == min)
        {
            number[i] = i+1;
        }
    }

  int standard = abs((p/2) - number[0]);
       for(int i = 0; i < p; i++)
        {
            if(abs((p/2) - number[i]) < standard)
            {
                standard = abs((p/2) - number[i]);
                cell = i;
            }
       }

       for(int i = 0; i < n;i++)
        {
           if(str[i].length() > p)
            {
               str[i].replace(cell+1, str[i].length()-p, s2);
               }
           }

       for(int i = 0; i < n;i++)
        {
           counter = 0;
           for(int j = i+1; j < n; j++)
                {
               if(str[i] == str[j])
                {
                   counter++;
                   str[j]+= to_string(counter);
               }
           }
        }

       cout << endl <<"\nLines after reduction : " << endl;
       for(int i = 0; i < n;i++)
        {
              cout << str[i] << "\n";
           }

    return 0;
}

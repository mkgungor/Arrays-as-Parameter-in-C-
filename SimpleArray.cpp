#include <iostream>
using namespace std;

void print(int const myScore[], int size)
{
    //myScore[0] = 66;
    for (int i = 0; i < size; i++)
    {
        cout << myScore[i] << " ";
    }
    cout << endl;
}

void fillUpArray(int myScore[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter " << i + 1 << ":";
        cin >> myScore[i];
    }
}

int main()
{
   int score[8] = {10, 20, 30, 40, 50, 60, 70, 80};

   print(score, 8);

   fillUpArray(score, 8);

   print(score, 8);


   score[0] = 11;
   cout << score[0] << endl;

   for (int i = 0; i < 8; i++)
   {
       cout << score[i] << " ";
   }    
   cout << "\nHello World!\n";
}
 
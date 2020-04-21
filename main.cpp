#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cout << "Enter A and B: " << endl;
    int a, b;
    vector <double> znacheniya(4);
    cin >> a >> b;
    cout << "A + B = " << a + b << '\n'
         << "A - B = " << a - b << '\n'
         << "A * B = " << a * b << '\n'
         << "A / B = " << a / b << '\n';
         znacheniya[0]=a + b;
         znacheniya[1]=a - b;
         znacheniya[2]=a * b;
         znacheniya[3]=a / b;

         double max=znacheniya[0];
         double min=znacheniya[0];
         for(size_t i=0;i<3;i++)
         {
             if (min>znacheniya[i+1])
             {
                 min=znacheniya[i+1];
             }
             if (max<znacheniya[i+1])
             {
                 max=znacheniya[i+1];
             }
         }
         cout <<"Min="<<min<<'\n';
         cout <<"Max="<<max<<'\n';
    return 0;
}

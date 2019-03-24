#include <iostream>

using namespace std;

int main()
{
    int i,j,n,temp,a[30];  // for a[n] the size of the array.
    cout << "Enter the number of elements: " << endl;
    cin >> n;
    cout << "Enter the elements: \n";

    for(i=0;i<n;i++)  // assigns each variable;
    {
        cin >> a[i];
    }

    for(i=1;i<=n-1;i++)    // we start at a[1] here so a[j] = a[0]
    {
        temp=a[i];   // for each a[i], we call j i-1 and so a[j] is the number entered immediately before
        j=i-1;

        while((temp<a[j])&&(j>=0))  // example:  while a[3]<a[2] and j>=0...
        {
            a[j+1]=a[j];    // brings the element forward a[3] becomes a[2]
            j=j-1;          // a[2] becomes a[1] (specifically j goes from 2 to one and we test temp against j-1
        }

        a[j+1]=temp;    // inserts a[j+1]
    }

    cout << "\nHere is your sorted list: " << endl;

    for(i=0;i<n;i++)
    {
        cout << a[i] << ", ";
    }

    return 0;
}
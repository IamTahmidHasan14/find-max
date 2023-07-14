#include <iostream>
using namespace std;
class maximum
{
    int n;
    public: void data();
};
void  maximum::data()
{
    int a[] = {4, 9, 10, 3, 8};
    int largest, i, p;
    largest = a[0];
    for(i=1; i<5; i++) {
       if(a[i]>largest) {
          largest = a[i];
          p = i;
      }
   }
   cout<<"The Maximum element in the array is: "<<largest<<endl;
}
int main()
{
    maximum ob;
    ob.data();
}

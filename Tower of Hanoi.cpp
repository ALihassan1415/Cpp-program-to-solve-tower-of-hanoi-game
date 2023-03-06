#include <iostream> 
using namespace std;
int count=0;
void towerOfHanoi(int n, char beg, char end, char aux) 
{
if (n==0) 
{
 return;
}
else
towerOfHanoi(n - 1, beg, aux, end); 
cout << "Move disk " << n << " from rod " << beg<< " to rod " <<end << endl; 
towerOfHanoi(n - 1, aux, end, beg);
count++;
}
main()
{
int n;
cout<<"Enter the number of disks : ";
cin>>n;
towerOfHanoi(n,'A','B','C');
cout<<"\nNo of moves : "<<count;
 return 0;
}
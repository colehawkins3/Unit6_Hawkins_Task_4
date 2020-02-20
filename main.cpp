//Stephen Hawkins 2/20/19
//Unit 6 Assignment - Sorting
#include <iostream> 
#include "accounts.h"
#include <algorithm>

using namespace std;

void printArray(int[], int);

int main()
{
  cout << "\nStart: " << cpuTime() << endl;
  sort(accountBalances, accountBalances+maxAccounts);
  printArray(accountBalances, maxAccounts);
  cout << "\nEnd: " <<cpuTime() << endl;
  return 0;
}

void printArray(int arrayVals[], int size)
{
  cout << "\nPrinted values in Array: " <<endl;
for(int i = 0; i < size; i++)
  {
  cout << arrayVals[i] << ",";
  }
}
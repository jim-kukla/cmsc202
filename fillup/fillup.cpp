#include <iostream>

using namespace std;

const int ARRAY_SIZE = 10;

void 
fillUp(int a[], int size)
{
  int i = 0;
  cout << "Please enter " << size << " numbers, separated by whitespace: ";
  while (i < size) {
    cin >> a[i];
    i++;
  }
  cout << "Thanks for the " << i << " values!" << endl;
}

void printArray(int a[], int size)
{
  for (int i=0; i<size; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}

int main() 
{
  int A[ARRAY_SIZE];
  cout << "Hello, world." << endl;
  printArray(A, ARRAY_SIZE);
  fillUp(A, ARRAY_SIZE);
  printArray(A, ARRAY_SIZE);
}

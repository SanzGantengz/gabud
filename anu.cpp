#include <iostream>
using namespace std;

int main()
{
  int a;
  cout << "angka: ";
  cin >> a;
  
  /**
   * @gabud :v
   * jadi kwren :v
  */
  
  cout << "pola ke-1\n";
  
  for(int i = 1; i <= a; i++){
    for(int b = 1; b <= i; b++){
      cout << " ";
    }
    for(int c = a; c >= i; c--){
      cout << " * ";
    }
    for(int e = 0; e <= i; e++){
      cout << " * ";
    }
    cout << endl;
  }
  
  cout << "pola ke-2\n\n";
  
  for(int i = 1; i <= a; i++){
    for(int b = 1; b <= i; b++){
      cout << " ";
    }
    for(int e = 1; e <= i; e++){
      cout << " + ";
    }
    cout << endl;
  }
  
  cout << "pola ke-3\n\n";
  
  for(int i = 1; i <= a; i++){
    for(int b = 1; b <= i; b++){
      cout << " ";
    }
    for(int c = a; c >= i; c--){
      cout << " * ";
    }
    cout << endl;
  }
  
  cin.get();
}

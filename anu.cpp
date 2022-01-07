#include <iostream>
using namespace std;

int main()
{
  int a;
  cout << "angka: ";
  cin >> a;
  
  /**
   * @gabud :v
   *jadi kwren :v
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
  
  for(int p = 1; p <= a; p++){
    for(int b = 1; b <= p; b++){
      cout << " ";
    }
    for(int e = 1; e <= p; e++){
      cout << " + ";
    }
    cout << endl;
  }
  
  cout << "pola ke-3\n\n";
  
  for(int g = 1; g <= a; g++){
    for(int b = 1; b <= g; b++){
      cout << " ";
    }
    for(int c = a; c >= g; c--){
      cout << " - ";
    }
    cout << endl;
  }
  
  cout << "pola ke-4\n\n";
  
  for(int f = 1; f <= a; f++){
    for(int b = 1; b <= f; b++){
      cout << " $ ";
    }
    cout << endl;
  }
  
  cin.get();
}

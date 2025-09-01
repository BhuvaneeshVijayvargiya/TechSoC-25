#include <iostream>
#include <string>

using namespace std;

int main(){
    int N;
    string text;
    cout << "Enter your text: ";
    getline(cin,text);
    cout << "Enter the shift: ";
    cin >> N;

   int n = N%26;
     int c;
     if(n<0){c = n+26;}
     else{c=n;}

  for(int i=0; i < text.length(); i++){
        char x = text[i];

  if(x>='A' && x<='Z'){
            if((x+c)<='Z'){cout <<char(x+c);}
            else{cout << char(x+c-26);}
        }

   else if(x>='a' && x<='z'){
            if((x+c)<='z'){cout <<char(x+c);}
            else{cout << char(x+c-26);}
        }

   else{cout << x;}
    }

   return 0;
}

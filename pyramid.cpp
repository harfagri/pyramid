#include <iostream>
#include <string>

using namespace std;

int main(void){

string input;
string temp;
string mirror;
string rev;
string temp2;


cout << "Enter String Values"<<endl;
cin >> input;
cout << "--------------------"<<endl;

//reverse the original string
for(int y = input.length(); y >= 0; y--){
    mirror.push_back(input[y]);
  }


for(int i = 0; i < input.length() ; i++){
    //append the blank spaces
    rev = "";
    rev.append(input.length() - i,' ');
    //append original values
    temp = input.substr(0,1 + i);
    rev.append(temp);

    temp2 = "";
    temp2 = mirror.substr(mirror.length() - i,1 + i);
    //append mirror values
    rev.append(temp2);
    cout << rev<<endl;
    }

return 0;
}

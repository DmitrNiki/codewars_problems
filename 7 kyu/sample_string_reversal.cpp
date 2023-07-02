#include <iostream>

using namespace std;

string solve(string s)
{
  string s_rev;
  for (int i = s.size(); i >= 0; i--){
    s_rev += s.substr(i, 1);
  }
  return s_rev;
}
int main(){
    string s;
    getline(cin, s);
    cout << solve(s) << endl;
    return 0;
}
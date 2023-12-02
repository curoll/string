//将大写字母转化为小写字母
#include<iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for(int i=0;i<s.size();i++) s[i]=s[i]-'A'+'a';
    cout << s << endl;
    return 0;
}

#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for(auto&c:s)
      c+=32;

    cout << s << endl;
    return 0;
}

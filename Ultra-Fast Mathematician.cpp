//اذا مررت من هنا فادعوا الله ان ييسر لي امري
//Link Problem==>https://codeforces.com/problemset/problem/61/A
#include <iostream>
#include<iomanip>
#include<cmath>
#include<string>
#include<algorithm>
#define ahmed  ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
using namespace std;
#define ll long long
#define ld long double
int counter[1000001] = {};
long long arr[1000000] = {};
int main()
{
    ahmed;
    string s1, s2,s3;
    cin >> s1 >> s2;
    for (size_t i = 0; i < s1.length(); i++)
    {
        if (s1[i] == s2[i])
            s3+='0';
        else s3 +='1';
    }cout << s3 << endl;
   
    return 0;
}
//مهما الدنيا إتنيلت ضلمت لازم يبقى عندك زفت أمل و تعرف إن في نور في أخر أم النفق//

        //اهو بنتنيل نستمر ف السعي رغم فقدان الزفت الشغف

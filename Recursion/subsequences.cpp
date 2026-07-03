/* Input:  "ab"
Output: "", "a", "b", "ab"

Input:  "abc"
Output: "", "a", "b", "c", "ab", "ac", 
        "bc", "abc"
A subsequence = any subset of characters,
keeping their relative order
(doesn't need to be contiguous)
*/

#include<iostream>
using namespace std;

void f(int index,string source,string ans)
{
    if(index == source.length())
    {
        cout<<ans<<endl;
        return;
    }
    
    f(index+1,source,ans);
    f(index+1,source,ans+source[index]);
}

int main()
{
    f(0,"ab","");
    return 0;
}
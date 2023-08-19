#include<bits/stdc++.h>
using namespace std;
vector<char> nextGreatestLetter(vector<char>& letters, char target) {
        vector<char> temp;
        sort(letters.begin(),letters.end());
        for(int i=0;i<letters.size()-1;i++)
        {
                if(letters[i]!=letters[i+1])
                {
                    temp.push_back( letters[i]);
                }
        }
        temp.push_back(letters[letters.size()-1]);
        return temp;
    }
int main(){
            vector<char> temp {'x','x','y','y'};
            vector<char> temp1;
            temp1 = nextGreatestLetter(temp, 'i');
            for(auto x: temp1)
            {
                cout<<x<<"\n";
            }
            cout<<temp1.size();
          

}
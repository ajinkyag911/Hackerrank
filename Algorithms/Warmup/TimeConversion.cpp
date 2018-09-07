#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    std::string time = s;

    int secs;
    int mins;   
    int hours;    
    char extra;

    std::stringstream ss;
    ss << time;
    ss >> hours >> extra
       >> mins  >> extra
       >> secs;
    
    cout<<s[9];
    if(s[8]=='P' && hours!=12)
        hours = hours + 12;
    if(s[8]=='A' && hours==12)
        hours = hours - 12;
    char ans[25];
    sprintf(ans, "%02d:%02d:%02d", hours, mins, secs);
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

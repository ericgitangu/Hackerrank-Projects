#include <bits/stdc++.h>
#include <string>

using namespace std;

// Complete the findDigits function below.
int findDigits(int n) {
    auto cnt = 0;
    string str = std::to_string(n);
    for(auto &ch: str){
        int x = ch - 48;
        if(x != 0 && !(n % x)) {
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = findDigits(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}



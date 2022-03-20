#include <bits/stdc++.h>
#include <tuple>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'maxRegion' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY grid as parameter.
 */

int maxRegion(vector<vector<int>> grid) {
    cout << "---------------" << endl;
    vector<vector<int>> regions;
    for (int j = 0; j < grid.size(); j++){
        for (int i = 0; i < grid[j].size(); i++){
            cout << grid[j][i] << " ";
        }
        cout << endl;
    }

    cout << "---------------" << endl;

    int total_1s = 0;
    for (int j = 0; j < grid.size(); j++){
        for (int i = 0; i < grid[j].size(); i++){

            int left = i == 0 ? i : i-1;
            int right = i == grid[j].size() ? i : i+1;
            int up = j == 0 ? j : j-1;
            int down = j == grid.size() ? j : j+1;
            
            vector<tuple<int, int>> surround(8);

            surround[0] = make_tuple(left, j);
            surround[1] = make_tuple(right, j);
            surround[2] = make_tuple(i, up);
            surround[3] = make_tuple(i, down);
            surround[4] = make_tuple(left, up);
            surround[5] = make_tuple(right, up);
            surround[6] = make_tuple(left, down);
            surround[7] = make_tuple(right, down);

            // cout << "Left: " << get<0>(surround[0]) << " " << get<1>(surround[0]) << endl;
            // cout << "Right: " << get<0>(surround[1]) << " " << get<1>(surround[1]) << endl;
            // cout << "Middle: " << i << " " << j << endl;
            // cout << "Up: " << get<0>(surround[2]) << " " << get<1>(surround[2]) << endl;
            // cout << "Down: " << get<0>(surround[3]) << " " << get<1>(surround[3]) << endl;
            // cout << "Up Left: " << get<0>(surround[4]) << " " << get<1>(surround[4]) << endl;
            // cout << "Up Right: " << get<0>(surround[5]) << " " << get<1>(surround[5]) << endl;
            // cout << "Down Left: " << get<0>(surround[6]) << " " << get<1>(surround[6]) << endl;
            // cout << "Down Right: " << get<0>(surround[7]) << " " << get<1>(surround[7]) << endl;
            // cout << "__________________" << endl;

            for (int k = 0; k < surround.size(); k++){
                if (grid[get<1>(surround[k])][get<0>(surround[k])]){
                        cout << "Found 1: " << get<0>(surround[k]) << " " << get<1>(surround[k]) << endl;
                        vector<tuple<int, int>> temp;

                }
            }

            }
        }
        cout << total_1s << endl;
    return 1;
    }
    


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string m_temp;
    getline(cin, m_temp);

    int m = stoi(ltrim(rtrim(m_temp)));

    vector<vector<int>> grid(n);

    for (int i = 0; i < n; i++) {
        grid[i].resize(m);

        string grid_row_temp_temp;
        getline(cin, grid_row_temp_temp);

        vector<string> grid_row_temp = split(rtrim(grid_row_temp_temp));

        for (int j = 0; j < m; j++) {
            int grid_row_item = stoi(grid_row_temp[j]);

            grid[i][j] = grid_row_item;
        }
    }

    int res = maxRegion(grid);

    fout << res << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );
    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}

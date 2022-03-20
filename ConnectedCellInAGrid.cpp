#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
using namespace std;
int main(){
    std::string n_temp;
    getline(std::cin, n_temp);
    // int n = stoi(ltrim(rtrim(n_temp)));

    std::vector<vector<int>> vec;
    vec[0].push_back(1);
    vec[1].push_back(2);
    vec[1].push_back(3);
    vec[2].push_back(4);
    vec[3].push_back(5);
    // vec[4].erase(vec.end() - 1);
    cout << vec.size() << endl;
    // for (int i=0; i < vec.size(); i++){
    //     for (int j=0; i < vec.size(); i++){

    //     std::cout << vec[i][] << std::endl;
    //     }
    // }
}

// int main(){
//     int width = 6;
//     int height = 3;
//     srand(time(NULL));
//     int random = rand();
    
//     for (int j = 0; j < 5; j++){
//         std::cout << rand() << std::endl;
//     }
    
//     int arr[height][width];
//     int x = sizeof(arr)/sizeof(arr[0]);
//     int y = sizeof(arr[0])/sizeof(arr[0][0]);

//     for (int j = 0; j < x; j++){
//         for (int i = 0; i < y; i++){
//             if (j % 2 != 0){
//                 if (rand() % 2 == 0){
//                     arr[j][i] = 0;
//                 }else{
//                     arr[j][i] = 1;
//                 }
//             }else{
//                 if (rand() % 2 != 0){
//                     arr[j][i] = 0;
//                 }else{
//                     arr[j][i] = 1;
//                 }
//             }
//             std::cout << arr[j][i] << " ";//;
//         }
//         std::cout << std::endl;
//     }

//     for (int j = 0; j < x; j++){
//         for (int i = 0; i < y; i++){
//             int left = i==0 ? i : i-1;
//             int middle = i;
//             int right = i==y ? i : i+1;
//             int up = j==0 ? j : j-1;
//             int down = j==x ? j : j+1;
//             std::cout << arr[up][left] << " " << arr[up][middle] << " " << arr[up][right] << std::endl;
//             std::cout << arr[j][left] << " " << arr[j][middle] << " " << arr[j][right] << std::endl;
//             std::cout << arr[down][left] << " " << arr[down][middle] << " " << arr[down][right] << std::endl;

//         }
//     }


// }

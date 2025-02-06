

#include<iostream>
using namespace std;


int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;

    for(int i = 0;i<n;i++)
    {
       for(int j =0;j<n-i-1;j++)
       {
        cout<<" ";
       }
      
       for(int j =0;j<i+1;j++)
       {
        cout<<"* " ;  //are nana kay he sadh mi as lihili "*" tr purn chukich dil bnvaun kay bolav ata 
                    //ts chagpt ch ans mi lihil khali ok 
       }



          cout<<endl;
    }
}



// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter n" << endl;
//     cin >> n;

//     for(int i = 0; i < n; i++) {
//         // Print leading spaces for centering the pyramid
//         for(int j = 0; j < n - i - 1; j++) {
//             cout << " ";
//         }
      
//         // Print stars to form the pyramid
//         for(int j = 0; j < 2 * i + 1; j++) {
//             cout << "*";
//         }

//         cout << endl;
//     }

//     return 0;
// }

 #include<iostream>
using namespace std;
 
 

 int main(){
 for(int i =0;i<3;i++)
    {
        if(i==0||i==2){   //loop la tr palvayla start kela 
          for(int j =0;j<5;j++)
          {
             cout<<"*";
          }
                     //vedya sark ithe end l taklo 
        }
        
        else {
            cout<<"*";
            for(int j =1 ;j<4;j++)
            {
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;  /// ya bhau sathi 1/2 dok gel maz
                     //ata laksy thevnar ki every tiem bher thevne 
                     //kay tr nana firts for loop chy madhe yenar endl always 
    }

    return 0;
 }
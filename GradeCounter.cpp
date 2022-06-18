//部分開源
#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

int main(){
    //全域變數定義
    int setup1,setup2,sorce;
    bool check = true;

    //主程式區
    cout<<info[0]<<"\n"<<author[2]<<"\n"<<"\n"<<author[0]<<"\n"<<info[2]<<" | "<<author[1]<<"\n"<<info[1]<<"\n";
    for(int i=0;i<3;i++){
        cout<<func[i]<<endl;
    }
    cout<<">";
    while(check == true){
        cin>>setup1;
        if(setup1==1||setup1==2||setup1==3){
            if(setup1==1){
                cout<<info[5]<<endl;
                check = true;
            }
            else if(setup1==2){
                check = false;
                
            }
            else if(setup1==3){
                cout<<info[5]<<endl;
                check = true;
            }
        }
        else{
            cout<<info[3]<<endl;
            check = true;
        }
    }
    system("PAUSE");
    return 0;
}

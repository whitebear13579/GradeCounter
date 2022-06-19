//部分開源
#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

int main(){
    //Main區域定義
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
                system("cls");
                cout<<info[0]<<"\n"<<info[1]<<endl;
                for(int i =3;i<13;i++){
                    cout<<func[i]<<endl;
                }
                cout<<">";
                while(check2 == true){
                    cin>>setup2;
                    if(setup2>=1&&setup2<=10){
                        if(setup2==1){
                            history();
                            check2 = false;
                        }
                        else if(setup2 == 2){
                            cout<<info[5]<<endl;
                            check2 = true;
                        }
                        else if(setup2 == 3){
                            cout<<info[5]<<endl;
                            check2 = true;
                        }
                        else if(setup2 == 4){
                            cout<<info[5]<<endl;
                            check2 = true;
                        }
                        else if(setup2 == 5){
                            cout<<info[5]<<endl;
                            check2 = true;
                        }
                        else if(setup2 == 6){
                            cout<<info[5]<<endl;
                            check2 = true;
                        }
                        else if(setup2 == 7){
                            cout<<info[5]<<endl;
                            check2 = true;
                        }
                        else if(setup2 == 8){
                            cout<<info[5]<<endl;
                            check2 = true;
                        }
                        else if(setup2 == 9){
                            cout<<info[5]<<endl;
                            check2 = true;
                        }
                        else{
                            cout<<info[5]<<endl;
                            check2 = true;
                        }
                    }
                    else{
                        cout<<info[3]<<endl;
                        check2 = true;
                    }
                }
                
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

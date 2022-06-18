#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

int history(){
    return 0;
}

int main(){
    //全域變數定義
    int setup1,setup2,sorce;
    bool check = true;
    //文字提示區
    //版本檢查較驗: 前五個字串透過SHA1後取前五
    string info[6]={"===歡迎使用，學分精算師.exe===","請鍵入數字來選擇以下功\能:","版本: Dev 2 + 1bc5c","請輸入一個有效的數值","請稍後，正在開啟",
                            "此功\能尚未開發完成"};
    string author[3]={"作者 : whitebear13579  |  人之所以有夢，是因為相信夢。","專案GitHub連結: github.com/whitebear13579/GradeCounter",
                                "此專案尚處於開發狀態，若遇到任何問題，請到GitHub新增Issues，我們將會盡快處理 : )"};
    string func[13]={"(1)全域分析","(2)單科分析","(3)設定",
                                "(1)歷史","(2)地理","(3)公民","(4)國文","(5)數學","(6)英文","(7)地球科學","(8)生物","(9)物理","(10)化學"};
    string heart[2]={" "," "};
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
                system("cls");
                cout<<info[0]<<"\n"<<info[1]<<endl;
                for(int i=3;i<13;i++){
                    cout<<func[i]<<endl;
                }
                cout<<">";
                cin>>setup2;
                cout<<setup2<<endl;
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
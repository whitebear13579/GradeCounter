#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

int history(){
    return 0;
}

int main(){
    //�����ܼƩw�q
    int setup1,setup2,sorce;
    bool check = true;
    //��r���ܰ�
    //�����ˬd����: �e���Ӧr��z�LSHA1����e��
    string info[6]={"===�w��ϥΡA�Ǥ����v.exe===","����J�Ʀr�ӿ�ܥH�U�\\��:","����: Dev 2 + 1bc5c","�п�J�@�Ӧ��Ī��ƭ�","�еy��A���b�}��",
                            "���\\��|���}�o����"};
    string author[3]={"�@�� : whitebear13579  |  �H���ҥH���ڡA�O�]���۫H�ڡC","�M��GitHub�s��: github.com/whitebear13579/GradeCounter",
                                "���M�ש|�B��}�o���A�A�Y�J�������D�A�Ш�GitHub�s�WIssues�A�ڭ̱N�|�ɧֳB�z : )"};
    string func[13]={"(1)������R","(2)�����R","(3)�]�w",
                                "(1)���v","(2)�a�z","(3)����","(4)���","(5)�ƾ�","(6)�^��","(7)�a�y���","(8)�ͪ�","(9)���z","(10)�ƾ�"};
    string heart[2]={" "," "};
    //�D�{����
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
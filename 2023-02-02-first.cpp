#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char password[11];
    cout << "프로그램을 종료하시려면 암호를 입력하시오." <<endl;
    while(true) {
        cout << "암호>>";
        cin >> password;
        if(strcmp(password, "C++")==0) {
            cout << "프로그램을 정상 종료합니다." << endl;
            break;
        }
        else
        cout << "암호를 틀립니다~~" << endl;
    }
}
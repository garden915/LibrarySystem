#include "book.hpp"
#include "librarian.hpp"
#include "user.hpp"

using namespace std;

int main() {

    clearScreen();

    int sel;
    cout << "도서관 정보 관리 프로그램입니다." << endl << endl;
    cout << "신분을 입력하세요." << endl;
    cout << "(1) 사서" << endl;
    cout << "(2) 사용자" << endl;
    cout << "메뉴 입력 << ";
    cin >> sel;

    switch (sel) {
    case 1:
        while (1)
            librarian();

        break;

    case 2:
        string inputName;
        cout << "이름을 입력하세요 << ";
        cin >> inputName;

        while (1)
            usrMenu(inputName);

        break;
    }

    return 0;
}

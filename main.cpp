#include <iostream>

using namespace std;

int main(){

    int n = 0;

    cin >> n;


        int a = 1;
        int b = 1;
        int c = 0;

        cout << a << endl;
        cout << b << endl;

        for (int i=3; i <= n; i++){

            c=a+b;
            a=b;
            b=c;

            if(c<=n){

                cout << c << endl;
            }else {

                break;
            }
        }


    return 0;
}

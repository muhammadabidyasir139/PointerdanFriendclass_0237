#include<iostream>
using namespace std;

class mahasiswa 
{
    public:
        int nim;

         mahasiswa(int n) : nim(n) {}

        void showNim() {
            cout << "No induk = " << nim << endl;
        }
};

int main(){
    mahasiswa mhs{1}; //object mhs
    mhs.showNim(); // member access operator

    mahasiswa &refMhs = mhs; //pointer dereferences pMhs
    refMhs.nim = 2; //Member Access Opeator
    mhs.showNim();

    mahasiswa *pMhs = &mhs; //pointer dereferences pMhs
    pMhs->nim = 3; //Arrow Operator
    pMhs->showNim();
    return 0;

}
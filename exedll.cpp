#include <stdio.h>
#include <iostream>

#include "peconv.h"
#include "pe_handler.h"
using namespace std;

int main(int argc, char *argv[])
{
    char *filename = "application/app.exe";
    char *outfile = "application/app.dll";
    PeHandler hndl(filename);
    if (hndl.isDll()) {
        cout << "It is already a DLL!" << endl;
        return -1;
    }
    if (!hndl.isConvertable()) {
        cout << "[!] Converting not possible: relocation table missing or invalid!" << endl;
        return -1;
    }
    hndl.setExe();
    if (hndl.exeToDllPatch()) {
        cout << "[OK] Converted successfuly."<< endl;
    } else {
        cout << "Could not convert!" << endl;
        return -1;
    }
    if (hndl.savePe(outfile)) {
        cout << "[OK] Module dumped to: " << outfile << endl;
    }
    return 0;
}
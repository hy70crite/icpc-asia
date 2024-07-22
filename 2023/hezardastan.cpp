#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int totalSheets = 0;
    
    for (int i = 0; i < n; i++) {
        int pages;
        cin >> pages;

        int totalPages = pages + (pages % 2);
        
        totalSheets += (totalPages / 2);
    }
    
    cout << totalSheets << endl;
    
    return 0;
}


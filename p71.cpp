#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int dem;
    
    for(int i = 2; i <= n; i++){
        dem = 0;
        while(n % i == 0){
            ++dem;
            n /= i;
        }
        if(dem){
            cout << i;
            while (dem > 1) {
                cout << " " << i;
                dem--;
            }
            if(n > i){
                cout << " ";
            }
        }
    }    
}

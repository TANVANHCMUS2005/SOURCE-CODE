#include <iostream>
using namespace std;

int bunnyEars(int n){
    if(n == 0)
        return 0;
    else if(n % 2 == 0){
            return 3 + bunnyEars(n-1);
        }else{
            return 2 + bunnyEars(n-1);
        }
}
int main(){
    cout << bunnyEars(3) << endl;
    return 0;
}
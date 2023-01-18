#include <iostream>
using namespace std;
int main(){
    int low; 
    int high;
    cout<<"Enter lower limit";
    cin>>low;
    cout<<endl;
    cout<<"Enter upper limit";
    cin>>high;
    cout<<endl;       
    for(int n = low;n<=high; n++){
        int factors = 0;
        for(int div = 2; div * div <=n; div++){
            if(n % div == 0){
                factors = factors + 1;
                break;
            }
        }
        if( factors == 0){
            cout<<n<<endl;
        }
        }
    }

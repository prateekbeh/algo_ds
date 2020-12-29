#include<iostream>
using namespace std;

int inf = 123456789;

template <typename T>
void disp_arr(T arr[],int n){
    for(int i = 0 ; i < n ; i++){
	cout<<arr[i]<<" ";
    }
    cout<<endl;
}
    
int main()
{
    int n = 0;
    cout<<"Enter no. of Coins"<<endl;
    cin>>n;
    int coins[100] = {};
    for(int i = 0; i < n ; i++){
	cin >> coins[i];
    }
    cout<<"Enter sum :"<<endl;
    int sum = 0;
    cin>>sum;
    int mini[100];
    std::fill_n(mini,100,inf);

    mini[0] = 0;
    // disp_arr<int>(mini,100 );
    for(int i = 1 ; i <= sum ; i++){
	for(int j = 0 ; j < n ; j++){
	    if(coins[j] <= i && mini[i - coins[j]] + 1 < mini[i] ){
		mini[i] = mini[i - coins[j]] + 1;
	    }
	}
    }
    cout<<mini[sum];
}

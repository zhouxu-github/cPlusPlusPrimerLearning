#include <iostream>

using namespace std;

int fact(int val){
	 if(val < 0){
           return -1;
        }
        int ret = 1;
        //从1连乘到val
        for(int i = 1;i != val;i++){
        ret *= i;
        }
	return ret;

}

int main(){
	int val,result;
	cout<<"please input an integer:"<<endl;
	cin>>val;
	result = fact(val);
	cout<<result<<endl;
}

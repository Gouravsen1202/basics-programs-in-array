#include<iostream>
using namespace std;
int main(){
//	int arr[5]={1,2,3,4,5};
//    arr[4]=40;
//    for(int i=0 ;i<5;i++){
//    	if(arr[i]!=40&& arr[i]!=2){
//		
//    	cout<<arr[i]<<endl;
//	}
//}}


//int arr1[2][3]={{1,2,3},
//               {4,5,6}};
//for(int i=0;i<2;i++){
//	for(int j=0;j<3;j++){
//		cout<<arr1[i][j];
//	}cout<<endl;
//}

int arr2[3][3][3]={{{1,2,3},{{4,5,6}},{7,8,9}}};
for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		cout<<arr2[i][j];
	}cout<<endl;
}
}

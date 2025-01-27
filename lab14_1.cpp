#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
	int temp;
	for(int i = 1; i < N ; i++){
		for(int j = i-1; j >= 0; j--){
			if(d[i] > temp){
			temp = d[i-1]; //เก็บค่าtempจากตำแหน่งก่อนหน้า
			d[i-1] = d[i]; //เปลี่ยนตำแหน่งก่อนหน้าเป็นปัจจุบัน
			d[i] = temp; //เปลี่ยนปัจจุบันให้เป็นก่อนหน้า
			
			}
		}
		cout << "Pass " << i << ":";
		for(int i = 0; i < 10; i++) cout << d[i] << " ";
		cout << endl;
	}
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}

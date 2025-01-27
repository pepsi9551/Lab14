#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
	T temp;
	for(int i = 1; i < N ; i++){
		for(int j = i ; j > 0; j--){
			if(d[j] > d[j-1]){
			temp = d[j-1]; //เก็บค่าtempจากตำแหน่งก่อนหน้า
			d[j-1] = d[j]; //เปลี่ยนตำแหน่งก่อนหน้าเป็นปัจจุบัน
			d[j] = temp; //เปลี่ยนปัจจุบันให้เป็นก่อนหน้า
			
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
 
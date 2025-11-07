//#include <iostream>
//
//using namespace std;
//
//void Swap(int *a, int *b) {
//    int t = *a;
//    
//	*a = *b;
//    *b = t;
//}
//
//int main() {
//    int x, y;
//    
//    cout << "Enter two numbers: ";
//    cin >> x >> y;
//    
//    Swap(&x, &y);
//    cout << "After swap: x = " << x << ", y = " << y;
//    
//	return 0;
//}
//
//
//
//
//




#include <iostream>

using namespace std;

int main() {
    int n;
    
    cout << "Enter size of array: ";
    cin >> n;
    
    int *arr = new int[n];
    
    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++) cin >> arr[i];
    
    cout << "Array elements are: ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    
    delete[] arr;
    
    return 0;
}























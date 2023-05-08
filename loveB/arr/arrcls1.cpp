#include <iostream>
using namespace std;

// bool check(int arr[], int size, int key){
//   for (int i = 0; i < size; i++) {
//     if (arr[i]==key)
//       return true;
//   }
//   return false;
// }

void printarr(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {

  int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
  int size = 8;

  printarr(arr, size);
  int start = 0;
  int end = size - 1;

  while (true) {

    if (start < end) {
      swap(arr[start], arr[end]);
    } else {
      break;
    }
    start++;
    end--;
  }
  printarr(arr, size);
  // int key;

  // cout<< "enter a key.."<<endl;
  // cin>>key;

  // if(check(arr,size,key)){
  //   cout<< "found.."<<endl;
  // }
  // else{
  //   cout<< "not found.."<<endl;
  // }

  return 0;
}
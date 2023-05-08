#include <iostream>
#include <vector>
using namespace std;

    // int findUnique(vector<int> arr) {
    //   int ans = 0;
    //   for (int i = 0; i < arr.size(); i++) {
    //     ans = arr[i] ^ ans;
    //   }
    //   return ans;
    // }

int main() {


    //ARRANGING 0 & 1 WITH TWO POINTER APPROACH
    vector<int>arr{0,1,1,0,0,1,0,1,1};

    int start = 0;
    int end = arr.size() - 1;
    int i = 0;

    for(auto val : arr){
        cout<<val<<" ";
    }cout<<endl;

    while (start!=end)
    {
        if (arr[i]==0){
            swap(arr[start],arr[i]);
            start++;
            i++;
        }
        else{
            swap(arr[i],arr[end]);
            end--;
        }
    }
    



    for(auto val : arr){
        cout<<val<<" ";
    }





        // //PAIR SUM
        // vector<int>arr{10,20,30,40,50};
        // int sum = 80;

        // for (int i = 0; i < arr.size(); i++)
        // {
        //     int element1=arr[i];
        //     for (int j = i; j < arr.size(); j++)
        //     {
        //         int ele2 = arr[j];
        //         if (element1+ele2==sum)
        //         {
        //             cout<<"pair is "<<element1<< " with "<<ele2;
        //             cout<<endl;
        //         }
                
                
        //     }
            
        // }
    




    //INTERSECTION
    /*    int arr[] = {3,6,4,6,6,9,1};
        int sizea = 5;
        int brr[] = {7,6,6,6};
        int sizeb = 4;
        vector<int>ans;
            for (int i = 0; i < sizea; i++)
            {
                for(int j = 0 ; j < sizeb; j++){
                    if (arr[i]==brr[j])
                    {   
                        ans.push_back(arr[i]);
                        arr[i]= -1;
                        brr[j]= -11;
                    }
                    
                }
            }
            for (int i = 0; i < ans.size(); i++)
            {
                cout<<ans[i]<<" ";
            }
      */      





    //  //UNION
    //     int arr[] = {4,5,8,9,1};
    //     int sizea = 5;
    //     int brr[] = {7,5,3};
    //     int sizeb = 3;

    //     vector<int>ans;
    //     for (int i = 0; i < sizea; i++)
    //     {
    //         ans.push_back(arr[i]);
    //     }
    //     for (int j = 0; j < sizeb; j++)
    //     {
    //         ans.push_back(brr[j]);
    //     }
    //     for (int i = 0; i < ans.size(); i++)
    //     {
    //         cout<<ans[i]<<" ";
    //     }




    //   int n;
    //   cout << "Enter the i/p no. ";
    //   cin >> n;

    //   vector<int> arr(n);
    //   for (int i = 0; i < arr.size(); i++) {
    //     cout << i +1 << " i/p ";
    //     cin >> arr[i];
    //   }
    //   cout << endl;

    //   cout << " Unique Ele. is " << findUnique(arr);

  /*
     vector<int>arr;
     int ans = (sizeof (arr)/sizeof (int));
     cout<<ans<<endl;
     cout<<arr.size()<<endl;
     cout<<arr.capacity()<<"dooooooog"<<endl;
     arr.push_back(8);
     arr.push_back(65);
     arr.push_back(12);
     //arr.push_back(5);

     cout<<arr.size()<<endl;
     cout<<arr.capacity()<<endl;
     for (int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
     }cout<<endl;


     vector<int>brr(11,6);
     cout<<brr.capacity()<<endl;
     for (int i = 0; i < brr.size(); i++){
         cout<<brr[i]<<" ";
     }cout<<endl;

     vector<int>crr{11,16,41};
     cout<<crr.capacity()<<endl;
     cout<<crr.size()<<endl;
     for (int i = 0; i < crr.size(); i++){
         cout<<crr[i]<<" ";
     }cout<<endl;
  */

  return 0;
}
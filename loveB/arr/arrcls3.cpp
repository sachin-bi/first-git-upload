 #include<iostream>
 #include<vector>
 using namespace std;
    // void printarr(int arr[][3],int r, int c){
    //         for(int i = 0; i<r;i++){
    //             for (int j = 0; j < c ; j++){
    //                std:: cout<<arr[i][j]<<" ";               
    //             }std::cout<<std::endl;     
    //         }
    // }

    // void transpose(int arr[][3],int r, int c){
    //     int trans[r][c];
    //     for (int i = 0; i < r; i++)
    //     {
    //         for (int j = 0; j < c; j++)
    //         {
    //             trans[i][j]=arr[j][i];
    //         }
            
    //     }
    //     for(int i = 0; i<r;i++){
    //             for (int j = 0; j < c ; j++){
    //                std:: cout<<trans[i][j]<<" ";               
    //             }std::cout<<std::endl;     
    //         }
    //     // return trans[r][c];
    // }

int main (){

    //SHORT VECTOR

vector<vector<int> >arr(5,vector<int>(5,-8));
        for (int i = 0; i < arr.size(); i++)
        {
            for(int j = 0; j < arr[i].size();j++){
                cout<<arr[i][j]<<" ";
            }cout<<endl;
        }




    // VECTOR 2D ARRAY
        // vector<vector<int> >arr;

        // vector<int>a{4,2,6};
        // vector<int>b{9,9,4,0,8};
        // vector<int>c{9,3};

        // arr.push_back(a);
        // arr.push_back(b);
        // arr.push_back(c);

        // for (int i = 0; i < arr.size(); i++)
        // {
        //     for(int j = 0; j < arr[i].size();j++){
        //         cout<<arr[i][j]<<" ";
        //     }cout<<endl;
        // }
    



        
    //     //TRANSPOSE A MATRIX
    //     int arr[3][3]= {{6,3,4},{7,8,9},{2,3,1}};
    //     printarr(arr,3,3);
    //     transpose(arr,3,3);




    //  ADDING IN ARRAY
    //int arr[3][3]= {{6,3,4},{7,8,9},{2,3,1}};
    
        // for(int i = 0; i<3;i++){
        //     int ans = 0;
        //     for (int j = 0; j < 3 ; j++)
        //     {
        //        std:: cout<<arr[i][j]<<" ";
        //        ans = ans + arr[i][j];
        //     }std::cout<<"-> "<<ans<<std::endl;     
        // }

   



    return 0;
 }
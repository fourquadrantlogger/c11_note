#include<iostream>
#include<vector>


using namespace std;
using std::vector;

int find(vector<int> src,int target){
    int beg = 0;
    int end = src.size();
     int  mid = beg + (end - beg) / 2;

    while (mid != end && src[mid] != target)
    {
        if (target < src[mid])
        {
            end = mid;
        }
        else
            {
            beg = mid + 1;
        }
        mid = beg + (end - beg) / 2;
    }
    if(src[mid] != target){
    return -1;
    }else{
     return mid;
     }

}

int main()
{
    vector<int> text{54,87,575,4587,54245,54255,58655,59654,60000,60555,65588};
    int keyindex=find(text,54255);
    cout<<"position:" <<keyindex;

    cin.get();
    return 0;
}
#include<iostream>
#include<string>
#include <math.h>
using namespace std;
#define MAX_SIZE 50
void show_array(int array[], int N){
    for(int i = 0; i < N; i++)  
    cout << array[i] <<' ';   
    cout << endl;
}
float average(int array[], int N)
{
    int sum = 0;
    for (int i=0; i<N; i++)
    {
        sum+= array[i];
    }
    float tb=float(sum)/N;
    return tb;
}
float result_s(int array[],int N, float tb){
    float sum,s;
    for (int i = 0; i<N;i++){
        sum += pow((array[i]- tb),2);
    }
    return sqrt(1.0/(N-1)*float(sum));
}
void reverse(int array[], int N){
   for(int i=0;i<N/2;i++)
    {
      int temp=array[i];
         array[i]=array[N-1-i];
         array[N-1-i]=temp; 
    }
    show_array(array,N);
}
int main(){
    int array[MAX_SIZE];
    int N;
    float tb,s;
    cout << " Xin moi nhap mang : ";
    for (int i = 0; i< MAX_SIZE;i++){
    cin>> array[i];
    if (array[i] <= 0)
    break;
    N = i+1;
    };
    cout << " Day so truoc khi dao : "<< endl;
    show_array(array,N);
    tb = average(array,N);
    s = result_s(array,N,tb);
    cout<< " Gia tri trung binh cong :"<<tb<<endl;
    cout<< " Gia tri do lech chuan : " << s<<endl;
    cout<< " Day so sau khi dao :"<<endl;
    reverse(array,N);
    return 0; 
}
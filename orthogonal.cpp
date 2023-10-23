#include<bits/stdc++.h>
using namespace std;

int main(){
  double x1,y1,x2,y2,x3,y3,x4,y4;
  cin>>x1>>y1;
    cin>>x2>>y2;
    cin>>x3>>y3;
    cin>>x4>>y4;
    double ABx = x2-x1;
    double ABy = y2-y1;
    double CDx = x4-x3;
    double CDy = y4-y3;
    double dotproduct = ABx * CDx +ABy* CDy;
    if (dotproduct == 0)
    {
        cout<<"Orthogonal"<<endl;

    }
    else
    {
        cout<<"Not Orthogonal"<< endl;

    }
    return 0;


}

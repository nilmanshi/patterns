*        *
 *      *
  *    *
   *  *
     *






#include <iostream>
using namespace std ;

int main() {
  int n ;
  cin>>n ;
  for ( int rows =0; rows<n;rows++)
    {
      for (int col =0; col<rows;col++)
        {
          cout<<" ";
        }

      int totalcol = n-rows;
      
      for(int col=0; col<totalcol;col++)
        {
          if (col == 0 || col== totalcol-1)
          {
            cout<<"* ";
          }
          else{
            cout<<"  ";
          }
        }
      cout<<endl;
    }
}






 EMPTY DIAMOND

   *   
  * *
 *   *
*     *
*     *
 *   *
  * *
   *   




 #include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  for(int rows=0 ; rows<n ; rows++ )
  {
    for (int col=0; col<n-rows-1 ; col++)
      {
        cout<<" ";
      }
    for (int col=0;col<rows+1; col++)
      {
        if ( col==0||col== rows+1-1)
        {
          cout<<"* ";
        }
        else{
          cout<<"  ";
        }
      }
    cout<<endl;
  }
  for(int rows = 0; rows<n; rows++)
    {
      for (int col =0 ; col<rows ; col++)
        {
          cout<<" "; 
        }
      int totalcol = n- rows ;
      for (int col =0; col<totalcol ; col++)
        {
          if (col==0|| col==totalcol-1)
          {
            cout<<"* ";
          }
          else 
          {
            cout<<"  ";
          }
        }
      cout<<endl ;
    }
  
}


ANOTHER PATTERN 



**** ****
***   ***
**     **
*       *
*       *
**     **
***   ***
**** ****



#include <iostream>
using namespace std ;

int main() {
  int num ;
  cin>>num ;
 int  n = num/2;
  for (int rows =0; rows <n ;  rows++)
    {
      for (int col=0 ; col<n-rows ; col++)
        {
          cout<<"* ";
        }
      for (int col= 0 ; col<2*rows+1 ; col++)
        {
          cout<<"  ";
        }
      for(int col= 0; col<n-rows ; col++)
        {
          cout<<"* ";
        }
      cout<<endl;
    }

  for (int rows = 0; rows <n ; rows ++)
        {
          for(int col=0; col <rows+1 ; col++)
            {
              cout<<"* ";
            }
          for (int col=0 ; col< 2*n-2*rows-1;col++)
            {
              cout<<"  ";
            }
          for(int col =0 ; col<rows+1; col++)
            {
              cout<<"* ";
            }
          cout<<endl ;
        }
}


ANOTHER PATTERN 

1
1*2
1*2*3
1*2*3*4
1*2*3*4*5


#include <iostream>
using namespace std;

int main(){
  int n ;
  cin>>n;
  for (int rows =0;rows<n; rows++)
    {
      for (int col =0 ; col<2*rows+1 ; col++)
        {
          if (col%2==1)
          {
            cout<<"* ";
          }
          else
          {
            cout<< rows+1;
          }
        }
      cout<<endl;
    }
}


1
22
333
4444
55555

#include <iostream>
using namespace std;

int main(){
  int n ;
  cin>>n;
  for (int rows=0; rows<n;rows++)
    {
      for(int col = 0 ; col<rows+1; col++)
        {
          cout<<rows+1;
        }
      cout<<endl;
    }
}